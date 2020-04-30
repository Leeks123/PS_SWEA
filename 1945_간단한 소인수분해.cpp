// 1945 간단한 소인수 분해
#include <iostream>
#include <vector>

using namespace std;

int* solve(int n){
    int num = n;
    int *check = new int[12]{0,};
    for(int i=2;i<n;i++){
        if(num%i==0){
            check[i]++;
            num=num/i;
            i=1;
        }
    }
    return check;
}
int main(){
    int t;
    cin>>t;
    
    int n;
    vector<int> testcase;
    for(int i=0;i<t;i++){
        cin>>n;
        testcase.push_back(n);
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" ";
        int *arr = solve(testcase[i]);
        for(int j=0;j<12;j++){
            if(j==2||j==3||j==5||j==7||j==11){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
