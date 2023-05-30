#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long x;

    int sum;

    while(cin>>x)
    {
        if(x==0){
            break;
        }
        else
        {
            while(x/10!=0){
                sum=0;
                while(x!=0){
                    sum=sum+x%10;
                    x/=10;
                }
                x=sum;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}


