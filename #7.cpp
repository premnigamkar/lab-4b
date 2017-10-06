#include <iostream>
#include <cmath>
using namespace std;
int rev(int n);
int nod(int n, int i)
{
for (i=0;n>0;i++)
{n=n/10;
}
return i;
}
int main() {
            int n;
            cout<<"Enter the number \n ";
            cin>>n;
            if (rev(n)==n)
            cout<<"The number is a palindrome.";
            else 
            cout<<"The number is not a palindrome.";
return 0;	
}
int rev(int n)
{if (n>9)
return (n%10)*pow(10,nod(n,0)-1)+rev(n/10);
else
return n;
}
