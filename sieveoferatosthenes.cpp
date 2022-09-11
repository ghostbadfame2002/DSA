#include<bits/stdc++.h>
using namespace std;

void sieveoferatosthenes(int n)
{
    bool isprime[n+1];
    memset(isprime,true,sizeof(isprime));

    for(int i=2;i<=sqrt(n);i++)
    {
        if(isprime[i]==true)
        {
            for(int j=2*i;j<=n;j+=i)
            isprime[j]=false;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
        cout<<i<<" ";
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
sieveoferatosthenes(n);
return 0;
}