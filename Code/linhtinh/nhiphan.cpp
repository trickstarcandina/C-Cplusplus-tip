#include <iostream>
using namespace std;
int a[10],n;  
void out(){
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
}
 
void tim(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1)  
            out();
        else
            tim(i+1); 
    }
}
 
int main(){
    cin >> n;   
    tim(0);
}
