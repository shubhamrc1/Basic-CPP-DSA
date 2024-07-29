#include<iostream>
using namespace std;

int oct(int n)
{
    int sum = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10;
        sum = sum + (x*y);
        x = x * 8;
        n = n / 10;
    }
    return sum;
    
}
int main()
{
    int n;
    cout<<"Enter octal number : ";
    cin>>n;
    cout<<oct(n)<<endl;
}