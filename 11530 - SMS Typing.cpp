
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   cin.ignore();
      int n=t;
   while(t--)
   {
       int cont=0;
       string s;
       getline(cin,s);
       for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
            {
                cont++;
            }
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x'){
                cont+=2;
            }
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y'){
                cont+=3;
            }
            else
            {
                cont+=4;
            }

       }
       cout<<"Case #"<<n-t<<": "<<cont<<endl;
   }
    return 0;
}
