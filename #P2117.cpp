#include<bits/stdc++.h>
using namespace std;
class mp{
public:
    int& operator [] (queue<int>in){
        for(int i=0;i<mrp.size();i++)
            if(mrp.front().num==x)
                return mrp.front().sum;
            else{
                mrp.push(mrp.front())
                mrp.pop();
            }
        mqp x;
        x.put(in);
        mrp.push(x);
        return mrp.back().sum;
    }
private:
    struct mqp{
        void put(queue<int>x){
            num=x;
            sum=1;
        }
        queue<int>num;
        int sum;
    };
    queue<mqp>mrp;
};
int s,sum,maxs,d,n,k;
mp maxd;
int main(){
    cin>>n>>d>>k;
    while(n--){
        int ni,in;
        queue<int>inq;
        cin>>ni;
        while(ni--){
            cin>>in;
            inq.push(i)
        }
    }

}