#include <iostream>
using namespace std;
int sumarr (int a[100],int n,int i)
{if(i!=n)
{return a[i]+sumarr (a,n,i+1);}
else
return 0;}

int main() 
{	int a[100],n,i;
	cout<<"Enter the size of the array ";
	cin>>n;	cout<<"\nEnter the array elements ";
	for(i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"\nThesum of the elements of the array is "<<sumarr(a,n,0);
	return 0;
}
