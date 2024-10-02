#include<iostream>
using namespace std;
int main(){
    int test_case, i=0, n, arr[100];
    cin>>test_case;
    while(i<test_case){
        i++;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int max_1=arr[0];
        int count_1 =0;
        for(int j=0; j<n; j=j+2){
            if(arr[j]>max_1){
                max_1=arr[j];
            }
            count_1++;
        }
        int sum_1=max_1+count_1;

        int max_2=arr[0];
        int count_2=0;
        for(int j=1; j<n; j=j+2){
            if(arr[j]>max_2){
                max_2=arr[j];
            }
            count_2++;
        }
        int sum_2=max_2+count_2;

        cout<<max(sum_1,sum_2)<<endl;


    }

}