#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll x,ll y,ll p){
    ll res = 1;
    x=x%p;
    if (x==0) 
    return 0;
    while (y>0)
    {
        if (y&1){
            res=(res*x)%p;
            }
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
ll ch(ll x){
    ll reverse=0,rem,i=0,a=x,y,z,no,d;
    while(a!=0){
        rem=a%10;      
        reverse=reverse*10+rem;  
        a=a/10;
        i++;
    }
    d=pow(10,i-1);
    y=x*d;
    z=reverse%d;
    no=y+z;
    return no;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll arr[100001];
    for(int i=1;i<=100000;i++){
        if(i==1){
            arr[i]=ch(i);
        }
        else{
            arr[i]=arr[i-1]+ch(i);
        }
    }
    int T;
    cin >>T;
    while(T>0){
        ll l,r,sum=0;
        cin>>l>>r;
        ll b=ch(l);
        sum=arr[r]-arr[l];
        ll ans=power(b,sum,mod);
        cout<<ans<<endl;
        T--;    
    }
    return 0;
}
