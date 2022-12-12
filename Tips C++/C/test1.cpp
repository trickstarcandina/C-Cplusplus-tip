#include<bits/stdc++.h> 
using namespace std; 
//a, b > 0, p phải là số nguyên tố
long long modPrimePow(long long a, long long b, long long p){
    //a=a%p;
    //b=b%(p-1);
    long long res = 1;
    a %= p;
    b %= p - 1;
    while (b > 0) //vòng lặp phân tích b thành cơ số 2
    {
        if (b % 2 > 0)  //ở vị trí có số 1 thì nhân với a^(2^i) tương ứng. Tất cả các phép nhân đều có phép mod p theo sau.
            res = res * a % p;
        a = a * a % p;  //tính tiếp a^(2^(i+1)), a^1 -> a^2 -> a^4 -> a^8 -> a^16 v.v...
        b /= 2;
    }
    return res;
}
main()
{
    long long a,b,m; 
    cin>>a>>b>>m;
    cout<<modPrimePow(a, b, m); 
}