#include <iostream>
using namespace std;
int sum(int n);
int main() {
	int n;
	cout<<"Enter the number :\n";
	cin>>n;
	cout<<"The sum of all natural numbers from 1 to "<<n<<" is "<<sum(n);
	return 0;
}
    int sum(int n)
    {if (n>1)
    return n+sum(n-1);
    else 
    return 1;
    }
