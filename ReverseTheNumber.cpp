#include<iostream>
using namespace std;
//4321 => 1234
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int reverse=0;
    while(n>0)
    {
        int lastdigit = n%10;
        reverse = (reverse*10) + (lastdigit);
        n=n/10;
    }
    cout<<"The reverse Number is "<<reverse<<endl;
}