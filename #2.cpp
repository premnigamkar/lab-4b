#include <iostream>
using namespace std;
void print(int a,int i)
{if (i!=a)
{cout<<i<<" ";
print(a,i+1);}
else
cout<<a;
}
int main ()
{int a;
cout<<"Enter the number of digits you have to print ";
cin>>a;
print(a,1);
return 0;
}


