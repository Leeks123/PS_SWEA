// 1966 숫자를 정렬하자
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<vector<int>> testcase;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> v;
        for(int j=0;j<n;j++){
            int m;
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        testcase.push_back(v);
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" ";
        for(int j=0;j<testcase[i].size();j++){
            cout<<testcase[i][j]<<" ";
        }
        cout<<endl;
    }
}
