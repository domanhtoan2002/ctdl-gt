#include<iostream>
#include<string>
using namespace std ;

string Hamdaonguoc(string s)
{
	int l = s.length();
//	string temp ;
	for(int i = l-1; i >= 0; i--)
	{
		cout << s[i];
	}
}

int main()
{
	string s ;
	cout << "Nhap chuoi:" << endl;
	getline(cin,s);
	cout << "Chuoi sau khi dao nguoc la:" << endl;
	cout << Hamdaonguoc(s);
}
