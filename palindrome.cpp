#include <iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;
    cout<<"Enter a positive number: ";
    cin>>num;
     n=num;
    while (num)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    cout<<"The reverse of the number"<<rev<<endl;
    if (n==rev)
    cout<<"The given number is palindrome"
    else
    cout<<"The given number is not a palindrome"
    return 0;
}