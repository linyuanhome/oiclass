#include<iostream>
using namespace std;
int sy,sm,sd,ey,em,ed,C,m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    cin>>sy>>sm>>sd>>ey>>em>>ed;
    if(ey-sy==0){
            if((sy%4==0&&sy%100!=0)||(sy%400==0))
                    m[1]=29;
            for(int i=sm;i<em;i++)
                if(i==sm)
                    C=m[i-1]-sd;
                else
                    C+=m[i-1];
            C+=ed;
            if(sm==em)
                C=ed-sd;
            cout<<C;
            return 0;
    }
    else{
            for(int i=sy;i<ey;i++)
                if(i%4==0&&i%100!=0||i%400==0)
                    C+=366;
                else 
                    C+=365;
            if(sy%4==0&&sy%100!=0||sy%400==0) 
                m[1]=29;
            for(int i=1;i<sm;i++) 
                C-=m[i-1];
            C-=sd;
            if(ey%4==0&&ey%100!=0||ey%400==0) 
                m[1]=29;
            else 
                m[1]=28;
            for(int i=1;i<em;i++)
                C+=m[i-1];
            C+=ed;
            cout<<C;
            return 0;
        }
    }


