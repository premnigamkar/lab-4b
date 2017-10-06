#include <iostream>
#include <cmath>
using namespace std;
#include <iostream>
using namespace std;
int hcf(int a, int b);
int main()
{
int a, b;
cout << "Enter two positive integers: \n ";
cin >> a >> b;
cout << "The L.C.M of " << a << " & " << b << " is: " << a*b/hcf(a, b);
return 0;
}
int hcf(int a, int b)
{
if (b != 0)
return hcf(b, a % b);
else 
return a;
}
