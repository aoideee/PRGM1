#include <iostream>

using namespace std;

int factorial(int);
int main()
{
    int number;
    cout<<"Enter value: ";
    cin>>number;
    
    int fact=factorial(number);
    cout<<fact;

    return 0;
    
}

int factorial(int n)
{
    if (n==1)
    return n;
    else
    return n*factorial(n-1);
}
