#include<bits/stdc++.h>
using namespace std;
bool check(int i,int j,string s)//palindrome
{
	if(i>j) return true;
	if(s[i]!=s[j]) return false;
	return check(i+1,j-1,s);
}
int main()
{
	string s;
	cin>>s;
	cout<<check(0,s.size()-1,s);//palindrome
}