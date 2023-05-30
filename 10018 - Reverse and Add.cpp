
 #include<bits/stdc++.h>
 using namespace std;

long long reverses(long long n)
 {
      long long rev=0;
     while(n!=0){
        long long rem=n%10;
        rev=rev*10+rem;
        n/=10;
     }
     return rev;
 }

 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         long long num,ans;
         cin>>num;

         for(int i=0;i<1000;i++){
            ans=reverses(num);
            if(ans==num){
                cout<<i<<" "<<ans<<endl;
                break;
            }
            else
            {
                num=num+ans;

            }
         }

     }
     return 0;
 }
