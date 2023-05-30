
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float height;
    float up;
    float down;
    float fatigue;
    while(cin>>height>>up>>down>>fatigue &&height)
    {
        float current_position=0;
        int day=1;
        fatigue=(fatigue*up)/100;
        while(current_position<height && current_position>=0)
        {
            current_position+=up;
            if(up>0){
                up-=fatigue;
            }
            if(current_position>height){
                    break;
            }
            else
            {
                current_position-=down;
            }
            if(current_position<0){
                break;
            }
            day++;
        }
        if(current_position<0){
            cout<<"failure on day "<<day<<endl;
        }
        else
        {
            cout<<"success on day "<<day<<endl;
        }
    }

    return 0;
}


