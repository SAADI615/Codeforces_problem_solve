#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    string word;
    cin>> a;
    cin>>word;
    int count=0;
    for(int i=0; i<a; i++){
        if(word[i]==word[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
}
