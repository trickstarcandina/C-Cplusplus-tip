#include<bits/stdc++.h>
using namespace std;
struct time{  
    string gio;
    string phut;
    string giay;
    string tichtac;
    string name;
};
struct time nhanhcham;
struct time phu[100000];
struct time de[100000];
int n[100000];
int i=1;
void nhap(){
    cin>>nhanhcham.gio>>nhanhcham.phut>>nhanhcham.giay>>nhanhcham.tichtac>>nhanhcham.name;
    //faster hơặc slower //"00:00:05,797 --> 00:00:10,297"
    //while (scanf("%d",&n[i])!=-1){
    for(int v=0;v<5;v++){
        cin>>n[i];
        string str;
        getline(cin,str);
        string x[8];
        int j=0,k=0;
        while (j<str.length()){
            if(str[j]==':' || str[j]==' ' || str[j]=='-' || str[j]=='>') {
                j++; //x+=' ';
            }
            else{
                x[k]=str[j]; k++;
            } 
        }
        phu[i].gio=x[1]; phu[i].phut=x[2]; phu[i].giay=x[3]; phu[i].tichtac=x[4];
        de[i].gio=x[5]; de[i].phut=x[6]; de[i].giay=x[7]; de[i].tichtac=x[8]; 
        i++;
    }
}
void xuat(){
    for(int m=0;m<i;m++){
        cout<<n[m]<<endl;
        cout<<phu[m].gio<<":"<<phu[m].phut<<":"<<phu[m].giay<<","<<phu[m].tichtac;
        cout<<" --> ";
        cout<<de[m].gio<<":"<<de[m].phut<<":"<<de[m].giay<<","<<de[m].tichtac;
        cout<<endl;
        cout<<nhanhcham.name<<endl;
    }
}
int main(){
    nhap();
    xuat();
}

