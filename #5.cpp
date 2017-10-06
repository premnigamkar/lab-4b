#include <iostream>
using namespace std;
int sumeven( int n);
int main() {
	int a,b;
	cout<<"Enter the limits: \n";
	cin>>a>>b;
	cout<<sumeven(b-1)-sumeven(a);
	return 0;
	}
	int sumeven(int n)
	{
	if (n%2==0 && n>2)
	return n+sumeven(n-1);
	else if (n%2 != 0 && n>0 )
	return sumeven(n-1);
	else if (n=2)
	return 2;
	else 
	return 0; 
	}
	
