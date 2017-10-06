#include <iostream>
using namespace std;
int pow(int a, int b);

int main()
{
   int a, b;
   cout << "Enter two positive integers: \n ";
   cin >> a >> b;
   cout <<a<<" raised to the power "<<b<<" is: " <<pow(a, b);
   return 0;
}

int pow(int a, int b)
{
    if (b != 0)
       return a*pow(a, b-1);
    else 
       return 1;
}
