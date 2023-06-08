#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0){
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main ()
{
    int n;

    while(cin>>n&&n!=0)
    {
        int ans=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
               ans+=gcd(j,i);

            }
        }
        cout<<ans<<endl;

    }

    return 0;
}

