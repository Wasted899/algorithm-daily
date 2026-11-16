#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin>>n;
	cin>>s;
	int m=s.length();
	n=n%26;
	for(int i=0;i<m;i++) 
	{
		int o=(s[i]-'a'+n)%26;
		cout<<char('a'+o);
	}
	return 0;
}
//wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww