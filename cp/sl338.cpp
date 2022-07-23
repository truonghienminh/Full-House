#include<bits/stdc++.h>
using namespace std;
bool sodep(string n){
    if(n.length()==1) return false;
    long long int sum=0;
    for(long long int i=0;i<n.length()/2;i++)
    {
        if(n[i]!=n[n.length()-1-i]) return false;   
        sum+=(int(n[i]-'0')*2);
    }
    if(n.length()%2!=0) sum+=int(n[n.length()/2]-'0');
    if(sum%10==0) return true;
    else return false;
}
int main (){
    long long int l,r;
    while(cin>>l>>r){
        int num=0;
        for(long long int i=l;i<=r;i++) if(sodep(to_string(i))) ++num;
        cout<<num<<endl;
    }
    return 0;
}