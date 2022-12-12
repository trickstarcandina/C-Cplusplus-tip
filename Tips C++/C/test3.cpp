#include<string>
#include<iostream>
using namespace std;
string Tich(string number1, string number2) {
	int a[100005];
	int i, j;
	for (i = 0; i < number1.size() + number2.size(); i++)
		a[i] = 0;
	for (i = number1.size() - 1; i >= 0; i--)
		for (j = number2.size() - 1; j >= 0; j--)
			a[i + j + 1] += (number1[i] - '0')*(number2[j] - '0');
	for (i = number1.size() + number2.size() - 1; i >= 0; i--)
		if (a[i] > 9) {
			a[i - 1] += a[i] / 10;
			a[i] %= 10;
		}
	string kkk = "";
	if (a[0] != 0)
		for (i = 0; i < number1.size() + number2.size(); i++)
			kkk += (char)('0' + a[i]);
	else {
		for (i = 1; i < number1.size() + number2.size(); i++)
			kkk += (char)('0' + a[i]);
	}
	return kkk;
}
 
string moduu(string a, long long m) {
	long long res = 0;
	for (int i = 0; i < a.length(); i++)
		res = (res * 10 + a[i] - '0') % m;
	string x = "";
	if (res == 0) return "0";
	while (res != 0) {
		x = (char)(res % 10 + '0') + x;
		res = res / 10;
	}
	return x;
}
void modpow(string base, long long exp, long long modulus) {
	base = moduu(base, modulus);
 
	string result = "1";
 
	while (exp != 0) {
		if (exp & 1) {
			string tich = Tich(result, base);
			result = moduu(tich, modulus);
		}
		string tich = Tich(base, base);
		base = moduu(tich, modulus);
		exp /= 2;
	}
	cout << result;
}
int main() {
	string a;
	long long b, m;
	cin >> a >> b >> m;
	modpow(a, b, m);
}