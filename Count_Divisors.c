#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,s=0;
    cin>>a>>b>>c;
    for(int i=a;i<b+1;i++){
        if(i%c==0){
            s+=1;
        }
    
    }
    cout<<s;
    return 0;
}