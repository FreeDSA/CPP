#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void insertAtBottom(stack<int> &st,int ele){
    
    if(st.empty()){
        st.push(ele);
        return;
    }
    
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(topele);
    return;
}

void reverse(stack<int> &st){
    
    if(st.empty()){
        return;
    }
    
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
    return;
}

int main(){
    
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}
