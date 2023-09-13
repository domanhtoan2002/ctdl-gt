#include<iostream>

using namespace std;

// su dung phep tru

int UCLN(int a, int b) 
{
    while (a!= b)
    {
    	if(a > b)
    	a = a - b;
		else
		b = b - a;
	}
	return a ;  // a = b
}

int main() 
{
    int a, b;
    cout << "Input:" << endl;
    cin >> a >> b;
    cout << "The greatest common divisor of " << a << " and " << b << " is " << UCLN(a, b);
    return 0;
}
