#include <iostream>
using namespace std;
int fac(int n);
int main() {
	int n;
	cout<<"Enter the number :\n";
	cin>>n;
	cout<<"The factorial of "<<n<<" is "<<fac(n);
	return 0;
}
    int fac(int n)
    {if (n>1)
    return n*fac(n-1);
    else 
    return 1;
    }
