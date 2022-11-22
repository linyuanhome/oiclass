#include<bits/stdc++.h>
using namespace std;
class wl{
private:
    vector<char>s;
    bool fs[27];
    int tw(char n,int b,int e){
        int ans=1;
        if(e==0)
            return 0;
        if(b==e)
            return 0;
        while(s[b-1]!=n&&b!=e)
            b++;
        if(b==e)
            if(s[b-1]==n)
                return 1;
            else
                return 0;
        while(s[e-1]!=n&&b!=e)
            e--;
         if(b==e)
            if(s[b-1]==n)
                return 1;
            else
                return 0;
        while(b!=e){
            if(s[b++]<n)
                ans++;
        }
        return ans;
    }
    int be(int begin,int end){
        int ans=0;
        for(char i='A';i<='Z';i++)
            ans+=tw(i,begin,end);
        return ans;
    }
public:
    wl(int a){
        string str;
        cin>>str;
        for(int i=0;i<a;i++)
            s.push_back(str[i]);
    }
    int out(int b,int e){
        return be(1,b-1)+be(e+1,s.size());
    }
};
string in;
int n,q,beginv,endv;
int main(){
    cin>>n>>q;
    wl a={n};
    while(q--){
        cin>>beginv>>endv;
        cout<<a.out(beginv,endv)<<endl;
    }
}