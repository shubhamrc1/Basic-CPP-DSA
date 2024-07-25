#include<iostream>
using namespace std;

int fact(int n)
{
    int f1=1;
    for(int i=2;i<=n;i++)
    {
        f1 = f1*i;
    }
    return f1;

}
int main()
{
    int n,r;
    cout<<"Enter the value of N : ";
    cin>>n;
    cout<<"Enter the value of R : ";
    cin>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}