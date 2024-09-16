#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int count = 0;
    cin>>name;
    sort(name.begin(), name.end());

    int l = name.length();
    for (int i=1; i<l; i++){
        if(name[i]!=name[i-1]){
            count++;
        } 
    }
    //cout<<count<<endl;
    if((count+1)%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}