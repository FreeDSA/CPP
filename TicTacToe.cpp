#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >>T;
    while(T>0){
        int cx=0,co=0,c_=0,wx=0,wo=0;
        char a[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
                if(a[i][j]=='X'){
                    cx++;
                }
                else if(a[i][j]=='O'){
                    co++;
                }
                else{
                    c_++;
                }
            }
        }
        for(int i=0;i<3;i++){
            if(a[i][0]==a[i][1] && a[i][1]==a[i][2]){
                if(a[i][0]=='X'){
                    wx++; 
                }
                else if(a[i][0]=='O'){
                    wo++; 
                }
            }
        }
        for(int i=0;i<3;i++){
            if(a[0][i]==a[1][i] && a[1][i]==a[2][i]){
                if(a[0][i]=='X'){
                    wx++; 
                }
                else if(a[0][i]=='O'){
                    wo++; 
                }
            }
        }
        if(a[0][0]==a[1][1] && a[1][1]==a[2][2]){
            if(a[0][0]=='X'){
                wx++; 
            }
            else if(a[0][0]=='O'){
                wo++; 
            }
        }
        if(a[0][2]==a[1][1] && a[1][1]==a[2][0]){
            if(a[0][2]=='X'){
                wx++; 
            }
            else if(a[0][2]=='O'){
                wo++; 
            }
        }
        if(co>cx){
            cout<<3<<endl;
        }
        else if(cx-co>1){
            cout<<3<<endl;    
        }
        else if(cx>co && wx==1 && wo==0){
            cout<<1<<endl;
        }
        else if(co==cx && wo==1 && wx==0){
            cout<<1<<endl;
        }
        else if(c_==0 && wo==0 && wx==0){
            cout<<1<<endl;
        }
        else if(c_==0 && wx==2 && wo==0){
            cout<<1<<endl;
        }
        else if(c_!=0 && wx==0 && wo==0){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
        T--;    
    }
    return 0;
}
