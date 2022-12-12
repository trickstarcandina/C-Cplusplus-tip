#include <bits/stdc++.h>
using namespace std;

struct dathuc
{
	int heso;
	float *a;
};

dathuc cong(dathuc dt1,dathuc dt2)
{
	dathuc dtkq;
	dtkq.heso=max(dt1.heso,dt2.heso);
	float *a;
	dtkq.a = new float[dtkq.heso+1];
	int check=0;
	if(dt1.heso> dt2.heso) check=1;
	for(int i=dtkq.heso;i>=0;i--)
	{
		
	}
	return dtkq;
}
dathuc daoham(dathuc dt1)
{
	dathuc dtkq;
	dtkq.heso=dt1.heso;
	float *a;
	dtkq.a = new float[dtkq.heso+1];
	for(int i=dt1.heso-1;i>=0;i--)
	{
		dtkq.a[i]=dt1.a[i]*(dtkq.heso-i);
	}
	return dtkq;
}
dathuc Input()
{
	dathuc dt;
	cin >> dt.heso;
	float *a;
	dt.a = new float[dt.heso+1];
	for(int i=0;i<=dt.heso;i++)
	{
		cin >> dt.a[i];
	}
	return dt;
}
void Output(dathuc dt)
{
	for(int i=0;i<=dt.heso;i++)
	{
		cout << dt.a[i]<<" ";
	}
	cout << endl;
}
int main()
{
	dathuc dt1;
	dt1=Input();
	dathuc dt2;
	dt2=Input();
	dathuc dtkq=cong(dt1,dt2);
	Output(dt1);
	Output (dt2);
	Output(dtkq);
	return 0;
}
