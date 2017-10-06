#include <iostream>
#include <cmath>
using namespace std;
int sod(int n);
int main() {
	int n;
	cout<<"Enter the number :\n";
	cin>>n;
	cout<<"The sum of digits of "<<n<<" is "<<sod(n);
	return 0;
}
    int sod(int n)
    {if (n>9)
    return(n%10)+sod(n/10);
    else 
    return n;
    }
