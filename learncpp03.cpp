#include <iostream>
using namespace std;

int main () {

int number;
cout << "Enter an Integer: ";
cin  >> number;

if (number%2 == 0)
{
cout << "The number is an even number" << number  << endl;
}
else
{
cout << "The number is an  odd number" << number << endl;
}
return 0;
}
