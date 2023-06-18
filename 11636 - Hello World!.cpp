#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cs=1;
    while(cin>>n,n>0){
            int numbr=1;
            int past=0;
    while(numbr<n){
        numbr<<=1;// left shift increasing value 2^n;
        past++;
    }
    cout<<"Case "<<cs<<": "<<past<<endl;
    cs++;

    }
    return 0;

}
