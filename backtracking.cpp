#include<bits/stdc++.h>
using namespace std;
void fun1(int i)
{
	if(i<1)return; 
	fun1(i-1);
	cout<<i<<" ";
}
void fun2(int i)
{
	if(i>10)return;
	fun2(i+1);
    cout<<i<<" ";
}
int reverse(int n,int r)
{
	if(n == 0) return r;
	else
	{
		r=(r*10)+(n%10);
		return reverse(n/10,r);
	}
}
int countdigits(int n)
{
	if(n==0)return 0;
	return 1+countdigits(n/10);
}
int main()
{
	cout<<reverse(132,0);
	//fun1(10);//1 to 10
	cout<<endl;
	//fun2(1);//10 to 1
	cout<<countdigits(232);
	return 0;
}