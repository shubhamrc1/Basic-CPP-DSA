//Inverted Half Star Pyrmid
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=n;i<=n;i--)// loop from n to 1
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
            
        }
        cout<<endl;
    }
    return 0;
}