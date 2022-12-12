#include<iostream>
#include<cstring>
using namespace std;
static int n;
class sv{
	public:
		string name,lop;
};
static sv s[100];
void input(int n){	
	int i=1;
	while(i<=n){
		cout<<i<<endl;
		cout<<"Name:";
	    getline(std::cin,s[i].name);
	    cout<<"Class:";
	    getline(std::cin,s[i].lop);
	    i++;
	    cout<<endl;
	}
}
 
int confirm(int lc){
	for(int i=1;i<=lc-1;i++)
	if(s[lc].lop==s[i].lop) return 0;
	return 1;
	
} 
 
void output(int n,sv s[]){
	cout<<"\nINFOR:\n";
	static int lc=1;//vi tri
    for(lc=1;lc<=n;lc++)
    if(confirm(lc)==1 ){
    	cout<<s[lc].lop<<":\n";
    	for(int i=1;i<=n;i++)
    	if(s[i].lop==s[lc].lop) cout<<s[i].name<<endl;
	}
	

}

int main()
{
   cout<<"How many student in your class ? :";
   cin>>n;
   cin.ignore(1);
   input(n);
   output(n,s);

}
