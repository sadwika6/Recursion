#include<bits/stdc++.h>
using namespace std;
int AllOccurences(int a[],int n,int k,int out[],int i,int j)
{
	if(i>n)
	{
		return j;
	}
	if(a[i]==k)
	{
		out[j]=i;
		return AllOccurences(a,n,k,out,i+1,j+1);
	}
	return AllOccurences(a,n,k,out,i+1,j);
}
int main()
{
	int a[]={1,2,1,5,4,1,7,8,1,5,1};
	int key=5;
	int n=sizeof(a)/sizeof(int);
	int out[100]={0};
	int size=AllOccurences(a,n,key,out,0,0);
	for(int i=0;i<size;i++)
	{
		cout<<out[i]<<" ";
	}
}