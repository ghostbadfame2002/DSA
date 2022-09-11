#include<bits/stdc++.h>
using namespace std;

int Gcd(int a, int b)
{
    if(b==0) return a;
    else
    return Gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<Gcd(a,b);
}