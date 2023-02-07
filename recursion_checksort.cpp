#include<bits/stdc++.h>
using namespace std;
int checksort(int a[],int i,int n)
{
	if(i==n-1) return 1;
	if(a[i]<=a[i+1])
	{
		return checksort(a,i+1,n);
	}
	else
	{
		return -1;
	}
}
int checksort2(int a[],int n)
{
	if(n==1)
	{
		return 1;
	}
	if(a[0]<=a[1])
	{
		return checksort2(a+1,n-1);
	}
	else
	{
		return -1;
	}
}
int main()
{
	int a[]={1,2,3,4,6};
	int n=sizeof(a)/sizeof(int);
	//cout<<checksort(a,0,n);//using an extra variable
	cout<<checksort2(a,n);//without using an extra variable
}