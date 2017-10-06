#include <iostream>
using namespace std;

int max (int a[100],int n,int i,int m)
{if (i!=n)
{	{if(a[i]>m)
{m=a[i];}
return max (a,n,i+1,m);}}
else
return m;
}

int min (int a[100],int n,int i,int m)
{if (i!=n)
{	{if(a[i]<m)
{m=a[i];}
return min (a,n,i+1,m);}}
else
return m;
}

int main() 
{	int a[100],n,i;
	cout<<"Enter the size of the array ";
	cin>>n;	cout<<"\nEnter the array elements ";
	for(i=0;i<n;i++)
	{cin>>a[i];}
    cout<<"\nThe maximum element in the array is "<<max(a,n,0,a[0]);	
    cout<<"\nThe minimum element in the array is "<<min(a,n,0,a[0]);	
	return 0;
}
