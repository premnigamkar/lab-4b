#include <iostream>
#include <cmath>
using namespace std;
int fib(int n);
int main() {
	int n;
	cout<<"Enter the number :\n";
	cin>>n;
	cout<<"The "<<n<<"th fibonacci number is "<<fib(n);
	return 0;
}
    int fib(int n)
    {if (n>2)
    return fib(n-1)+fib(n-2);
    else 
    return 1;
    }
