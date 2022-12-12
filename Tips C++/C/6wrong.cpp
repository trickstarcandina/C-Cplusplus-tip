#include <bits/stdc++.h> 
using namespace std; 
#define MAX_COUNT 1000000000000000000
vector<string> vec; 
void lietke() { 
	queue<string> q; 
	q.push("9"); 
	for (long long count = MAX_COUNT; count > 0; count--) { 
		string s1 = q.front(); 
		q.pop(); 
		vec.push_back(s1); 
		string s2 = s1; 
		q.push(s1.append("0"));  
		q.push(s2.append("9")); 
	} 
} 
void tim(long long n) { 
	for (int i = 0; i < vec.size(); i++){
        long long val=atoi(vec[i].c_str());
        if (val%n == 0) {
            cout<<vec[i]<<endl;	
            break;
        }		
    }		 
} 
int main() {
    int t; cin>>t;
    lietke();	
    while(t--){
	    long long n; cin>>n;
	    tim(n);	   
    } 
	return 0; 
} 
