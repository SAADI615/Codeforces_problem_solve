#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    cin>>word;
    cout<< (char) toupper(word[0]);
    cout<< word.substr(1,-1)<<endl;
}