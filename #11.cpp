#include <iostream>
using namespace std;

int hcf(int a, int b);

int main()
{
   int a, b;
   cout << "Enter two positive integers: \n ";
   cin >> a >> b;
   cout << "The H.C.F of " << a << " & " << b << " is: " << hcf(a, b);
   return 0;
}

int hcf(int a, int b)
{
    if (b != 0)
    return hcf(b, a % b);
    else 
    return a;
}
