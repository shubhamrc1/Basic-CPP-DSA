#include<iostream>
using namespace std;

void fib(int n)
{
    int n1,n2,nt;
    n1=0;
    n2=1;
    for(int i=0;i<n;i++)
    {
        cout<<n1<<endl;
        nt=n1+n2;
        n1=n2;
        n2=nt;
    }
    return;

}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    fib(n);
    return 0;
}