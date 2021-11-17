#include<cstdio>
#include<vector>
#include<iostream>
using namespace  std;
int main(){
	const char *cs = "i love china";
	string s(cs, 7);
	s.insert(s.size(), cs);
	cout << s << endl;
}
