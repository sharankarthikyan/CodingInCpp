#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
	    if((int)s[i]==104)
	    cout<<s[i]<<"="<<(int)s[i]<<"\n";
	}
	return 0;
}
