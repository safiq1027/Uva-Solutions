#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,ans=0;
        cin>>r;
        int dis[r+10];
        for(int i=0;i<r;i++){
            cin>>dis[i];
        }
        sort(dis,dis+r);
        int mid=dis[r/2];
        for(int i=0;i<r;i++){
            ans+=abs(mid-dis[i]);
        }
        cout<<ans<<endl;
    }
}

