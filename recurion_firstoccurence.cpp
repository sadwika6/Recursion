#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int a[],int n,int k)
{
	if(n==0)
	{
		return -1;
	}
	if(a[0]==k)
	{
		return 0;
	}
	int ind=firstoccurence(a+1,n-1,k);
	if(ind==-1)
	{
		return -1;
	}
	else
	{
		return 1+ind;
	}
}
int main()
{
	int a[]={1,2,3,4,6,7,8,9,10};
	int key=10;
	int n=sizeof(a)/sizeof(int);
	cout<<firstoccurence(a,n,key);
}