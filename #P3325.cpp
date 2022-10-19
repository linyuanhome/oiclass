#include <bits/stdc++.h>
using namespace std;
class mp{
public:
    int size(){
        return len;
    }
    int& operator [] (string x){
        for(int i=0;i<len;i++)
            if(mrpv[i].name()==x)
                return mrpv[i].num;
        len++;
        mrpv[len-1].name=x;
        mrpv[len-1].num=0;
        return mrpv[len-1].num;
    }
private:
    struct mrp{
        string name;
        int num;
    }mrpv[1000];
    int len;
};
mp in;
int main(){
    while(true){
        string a;
        cin>>a;
        if(a="push")
            
    }
}
