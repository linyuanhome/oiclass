#include<bits/stdc++.h>
using namespace std;
long long maxrp,n;
string in,rp;
long long All(string str,string f){
    long long sum=0;
    while(str.find(f)!=string::npos){
        str=str.replace(str.find(f),f.size(),"");
        sum++;
    }
    return sum;
}
int main(){
    cin>>n;
    while(n--){
        cin>>in;
        if(in.find("reioxzsj")!=string::npos){
            while(in.find("woc")!=string::npos)
                in=in.replace(in.find("woc"),3,"drib");
            long long rf=(All(in,"r")+All(in,"p"))*5+All(in,"pr")*20;
            if(rf>maxrp||(rf==maxrp&&in.size()<rp.size())){
                maxrp=rf;
                rp=in;
            }
        }
    }
    cout<<rp<<endl<<maxrp;
}