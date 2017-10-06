#include <iostream>
using namespace std;

void printodd(int a,int b)
{if (b!=a)
{if(b%2==1)
{cout<<b<<" ";}
printodd(a,b+1);}
else
{if(b%2==1)
{cout<<b;}}
}

void printeven(int a,int b)
{if (b!=a)
{if(b%2==0)
{cout<<b<<" ";}
printeven(a,b+1);}
else
{if(b%2==0)
{cout<<b;}}
}

int main ()
{int a,b,n;
cout<<"Enter the limits ";
cin>>a>>b;
cout<<"\nTo print odd numbers, enter 1, for even numbers enter 2\n";
cin>>n;
if(n==1)
{printodd(b,a);}
else if(n==2)
{printeven(b,a);}
else
{cout<<"\n Invalid entry";}
return 0;
}


