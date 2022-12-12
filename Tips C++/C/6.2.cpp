#include <bits/stdc++.h> 
using namespace std; 
bool isBinaryNum(int N) { 
	while (N > 0) { 
		int digit = N % 10; 
		if (digit != 0 && digit != 9) 
			return false; 
		N /= 10; 
	} 
	return true; 
} 
int mod(string t, int N) { 
	int r = 0; 
	for (int i = 0; i < t.length(); i++) { 
		r = r * 10 + (t[i] - '0'); 
		r %= N; 
	} 
	return r; 
} 
string tim(int N) { 
	queue<string> q; 
	set<int> visit; 
	string t = "9"; 
	q.push(t); 
	while (!q.empty()) { 
		t = q.front();	 q.pop(); 
		int rem = mod(t, N); 
		if (rem == 0) 
			return t; 
		else if(visit.find(rem) == visit.end()) { 
			visit.insert(rem); 
			q.push(t + "0"); 
			q.push(t + "9"); 
		} 
	} 
} 
int main() { 
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
	    cout << tim(n)<<endl; 
    }
	return 0; 
} 
