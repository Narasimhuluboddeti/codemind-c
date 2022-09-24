#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,s,t;
    cin>>a>>b;
    s=a*1;
    t=b*2;
    if(b%2!=0 and a==0){
        cout<<"NO
";
    }
    else if((s+t)%2==0){
        cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
    return 0;
}