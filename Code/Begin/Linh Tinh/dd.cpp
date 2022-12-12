#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

//Game
int SPEED=210;
#define SNAKE	'O'
#define PR		'$'

//Define const color
#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_MAGENTA 5
#define DARK_YELLOW 6
#define GRAY 7
#define DARK_GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define MAGENTA 13
#define YELLOW 14
#define WHITE 15

struct Point
{
	int x, y;
};

struct Snake
{
	Point Body[100];
	int len;
};

char map[27][84];
char backm[27][84]=
{
"**********************************************************************************",
"*                                                                                *",
"*                                                                                *",
"*                                                               88               *",
"*           88 88 8888 888  888  8  8                          8888              *",
"*           82828 88   8228 8228 8888                           88               *",
"*           82828 82   8882 8882  88                                             *",
"*           8   8 8888 8  8 8  8  88                            88               *",
"*                                                              8228              *",
"*              88  88 8  88288 8888 8888                      822228             *",
"*               2882  8  82828 8228 8822                     88822888            *",
"*               8888     82828 8888 2288                     28822882            *",
"*              88  88    8   8 8  8 8888                     88    88            *",
"*                                                           882    288           *",
"*                                                          8888    8888          *",
"*                                                           288    882           *",
"*          8888 8888 888  8888                              88      88           *",
"*          2288 8228   8  8822                             882      288          *",
"*          8822 8228   8  2288                           888888    888888        *",
"*          8888 8888 8888 8888                                8    8             *",
"*                                                             8    8             *",
"*                                                             8    8             *",
"*                                                           888    888           *",
"*                                                                                *",
"*                                                                                *",
"*                                                                                *",
"**********************************************************************************",	
};
void Init(int CWidth, int CHeight, Snake &snake, int &Score, int &Level);
void setDiff(int &Speed);
void GotoXY(int x, int y);
void TextColor(WORD color);
void ResizeConsole(int Width, int Height);
int Menu(char *list[], int n, char *title);
int WriteXY(short x, short y, WORD color, const char *format, ...);
void Play(int CWidth, int CHeight, Snake &snake, int &Score, int &Level);

//**************************************************************************************
int main()
{
	char *title = "TRO CHOI CON RAN";
	char *list[4] = {
		"Bat dau choi",				//1
		"Lich su (unavailable)",				//2
		"Chon do kho",		//3
		"Thoat",	//4
	};
	int CWidth=80, CHeight=25,
		Score=0, select=0, Level;
	Snake snake;
	
	ResizeConsole(CWidth+2, CHeight+3);
	ResizeConsole(CWidth+2, CHeight+3);
	do{
		select=Menu(list,4,title);
		switch (select){
			case 1:
				Init(CWidth, CHeight, snake, Score,Level);
				Play(CWidth, CHeight, snake, Score, Level);
				break;
			case 2:
				system("cls");
				WriteXY(25,12,RED,"Chuc nang nay tam thoi bi vo hieu hoa.\n");
				getch();
				break;
			case 3:
				setDiff(SPEED);
				break;
			case 4:
				return 0;
		}
	}while (1);
	return 0;
	
}

//=================================================
void TextColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void ResizeConsole(int Width, int Height)
{
	COORD coord;
	coord.X = Width;
	coord.Y = Height;

	SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;

	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle
	SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
	SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size
}
void GotoXY(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//============================================================================
void writec(char c, int n)
{
	for (int i = 0; i < n; i++)
		printf("%c", c);
}

void DrawBox(int x1, int y1, int x2, int y2, int color)
{
	TextColor(color);
	GotoXY(x1, y1);
	writec(219, x2 - x1 + 1);
	for (int i = 1; i < y2 - y1; i++)
	{
		GotoXY(x1, y1 + i);
		writec(219, 1);
		GotoXY(x2, y1 + i);
		writec(219, 1);
	}
	GotoXY(x1, y2);
	writec(219, x2 - x1 + 1);
}

//******************************************************************
void Init(int CWidth, int CHeight, Snake &snake, int &Score, int &Level)
{
	system("cls");
	for(int i=0; i<27; i++)
		for(int j=0; j<84; j++)
		{
			map[i][j]=backm[i][j];
			if(map[i][j]=='8')
				WriteXY(j,i,WHITE,"%c",219);
		}
	snake.Body[0]={1,1};
	snake.len=1;
	Level=0;
	Score=0;
	ResizeConsole(CWidth+2, CHeight+3);
	DrawBox(0,0,CWidth+1,CHeight+1,YELLOW);
	TextColor(CYAN);
	GotoXY(1,1);
	printf("%c",SNAKE);
}

int WriteXY(short x, short y, WORD color, const char *format, ...)
{
	GotoXY(x, y);
	TextColor(color);
	
	va_list arg;
	int done;
	
	va_start(arg, format); // lay danh sach doi so dua theo format
	done = vfprintf(stdout, format, arg); // xuat cac doi so theo format
	va_end(arg);
	
	return done;
}

int Menu(char *list[], int n,char *title)
{
	int select = 0,
		history = 0,
		dPos = 5;
	

	system("cls");

	// Hien thi tieu de
	WriteXY((80 - strlen(title)) / 2, 1, GREEN, title);
	
	DrawBox(2, 3, 78, n+6, RED);


	for (int i = 0; i < n; i++)
	{
		// In menu
		WriteXY(6, i + dPos, WHITE, "%3d. %s", i + 1, list[i]);
	}

	//To sang lua chon mac dinh
	WriteXY(5, select + dPos, YELLOW, "%c%3d. %s", 175, select + 1, list[select]);
	
	//In text huong dan
	WriteXY(2, n+8, CYAN, "HUONG DAN: Nhan phim mui ten len ^ , xuong v hoac phim so 1 2 3... de chon\nthao tac, sau do nnhan phim enter de ket thuc thao tac chon.\n");
	WriteXY(2, n+12, MAGENTA, "HUONG DAN CHOI: Nhan phim mui ten len ^ , xuong v , trai < hoac phai > de di\nchuyen con ran va an moi. De tam dung nhan space, de thoat nhan esc.");
	char key = 0;
	do
	{
		key = getch();
		if(key==224)
			key=getch();
			
		if (key == 72) select--;
		if (key == 80) select++;
		
		if(key>'0' && key <='9')
			select=key-'0'-1;
		
		if (select == -1)
			select = n - 1;
		else if (select >= n)
			select = 0;
		
		// Xoa lua chon cu
		WriteXY(5, history + dPos, WHITE, " %3d. %s", history + 1, list[history]);
		
		//To sang lua chon moi
		WriteXY(5, select + dPos, YELLOW, "%c%3d. %s", 175, select + 1, list[select]);
		
		history = select;
	} while (key != 13); // Dung khi nhan phim enter
	
	return select+1;
}

//Bat dau choi game
void setPrey(int CWidth, int CHeight, Point &Prey)
{
	srand(time (0));
	Prey.x=rand()%CWidth+1;
	Prey.y=rand()%CHeight+1;
}

void Play(int CWidth, int CHeight, Snake &snake, int &Score, int &Level)
{
	const int dx[4]={1,0,-1,0}; 
	const int dy[4]={0,-1,0,1};
	int temp=0, dir=0, key;
	
	//dat moi
	Point Prey;
	setPrey(CWidth, CHeight, Prey);
	while(map[Prey.y][Prey.x]!=' ')
		setPrey(CWidth, CHeight, Prey);
	WriteXY(Prey.x, Prey.y,GREEN,"%c",PR);
	
	WriteXY(65,27,GREEN," Score: %5d ",Score);
	WriteXY(50,27,GREEN," Level: %2d ",Level);
	WriteXY(1,27,CYAN,"Main menu: ESC  Pause: SPACE     Speed:%3d/20",(210-SPEED)/10);
	
	key=getch();
	do
	{
		//An dc moi:
		if(snake.Body[0].x==Prey.x && snake.Body[0].y==Prey.y)
		{
			Score++;
			snake.len++;
			if(Score%5==0)
			{
				Level++;
				if(SPEED>30)
					SPEED-=20;
			}
			WriteXY(65,27,GREEN," Score: %5d ",Score);
			WriteXY(50,27,GREEN," Level: %5d ",Level);
			WriteXY(1,27,CYAN,"Main menu: ESC  Pause: SPACE     Speed:%3d/20",(210-SPEED)/10);
			//dat moi
			setPrey(CWidth, CHeight, Prey);
			while(map[Prey.y][Prey.x]!=' ')
				setPrey(CWidth, CHeight, Prey);
			WriteXY(Prey.x, Prey.y,GREEN,"%c",PR);
		}
	
		//Nhan phim dieu khien
		if(kbhit())
		{
			key=getch();
			if(key==224)
				key=getch();
				
			switch(key)
			{
				case 77: //sang phai
					if(dir!=2)
						dir=0;
					break;
				case 72://len tren
					if(dir!=3)
						dir=1;
					break;
				case 75://sang trai
					if(dir!=0)
						dir=2;
					break;
				case 80://xuong duoi
					if(dir!=1)
						dir=3;
					break;
				case 32:
					getch();
					break;
			}
		}
		
		for(int i=snake.len; i>0; i--)
		{
			snake.Body[i]=snake.Body[i-1];	
		}
		
		//xac dinh toa do diem dau moi theo huong di chuyen
		snake.Body[0].x=snake.Body[0].x+dx[dir];
		snake.Body[0].y=snake.Body[0].y+dy[dir];
		
		//xoa diem cuoi dung
		WriteXY(snake.Body[(snake.len)].x,snake.Body[(snake.len)].y,CYAN," ");
		map[snake.Body[(snake.len)].y][snake.Body[(snake.len)].x]=' ';
		
		//ve diem dau
		WriteXY(snake.Body[0].x,snake.Body[0].y,MAGENTA,"%c",SNAKE);
		if(map[snake.Body[0].y][snake.Body[0].x]!=' '&&map[snake.Body[0].y][snake.Body[0].x]!='2')
			{
				WriteXY(snake.Body[0].x,snake.Body[0].y,MAGENTA,"X");
				WriteXY(25,12,RED,"You lose! Press ESC to back main menu.");
				while(getch()!=27);
				return;
			}
		map[snake.Body[0].y][snake.Body[0].x]='1';
		//delay
		Sleep(SPEED);
	}while(key!=27);
}

void setDiff(int &Speed)
{
	system("cls");
	char title[]="CHON MUC DO KHO",
		tut[]="Huong dan: Nhan phim mui ten < hoac > de dieu chinh. Nhan ESC de ve Menu.";
	int key;
	WriteXY((80 - strlen(title)) / 2, 1, GREEN, title);
	WriteXY((80 - strlen(tut)) / 2, 10, RED, tut);
	WriteXY(15,5,YELLOW,"Muc: [%40s]: %3d"," ",(210-SPEED)/10);//21
	for(int i=0; i<(210-SPEED)/(200/40); i++)
		WriteXY(21+i,5,YELLOW,"%c",219);//21
	for(int i=(210-SPEED)/(200/40); i<40; i++)
		WriteXY(21+i,5,YELLOW,"%c",32);//21
	do{
		key=getch();
		if(key==224)
			key=getch();	
		switch(key)
		{
			case 77: //sang phai
					SPEED-=10;
					if(SPEED<10)
						SPEED=210;
					WriteXY(64,5,YELLOW,"%3d",(210-SPEED)/10);
					for(int i=0; i<(210-SPEED)/(200/40); i++)
						WriteXY(21+i,5,YELLOW,"%c",219);//21
					for(int i=(210-SPEED)/(200/40); i<40; i++)
						WriteXY(21+i,5,YELLOW,"%c",32);//21
				break;
			case 75://sang trai
					SPEED+=10;
					if(SPEED>210)
						SPEED=10;
					WriteXY(64,5,YELLOW,"%3d",(210-SPEED)/10);
					for(int i=0; i<(210-SPEED)/(200/40); i++)
						WriteXY(21+i,5,YELLOW,"%c",219);//21
					for(int i=(210-SPEED)/(200/40); i<40; i++)
						WriteXY(21+i,5,YELLOW,"%c",32);//21
				break;
		}
	}while(key!=27);
	//getch();
}
