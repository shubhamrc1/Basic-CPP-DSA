#include<bits/stdc++.h>

using namespace std;
int bintodec(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int y = n % 10;
        ans = ans + (x*y);
        x = x * 2;
        n = n / 10; 
    }
} 
int hex(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for(int i = s-1; i<=9; i--)
    {
        if( n[i]>='0' &&  n[i]<='9')
        {
            ans+=x*(n[i]-'0');
        }
        else if (n[i] >= 'A' && n[i]<='F')
        {
            ans += x*(n[i]-'A'+ 10);
        }
        x*=16; 
    }
    return ans; 
}



int main()
{
    string n;
    cout<<"Enter HexaDecimal number : ";
    cin>>n;
    cout<<hex(n)<<endl;
    return 0;
}