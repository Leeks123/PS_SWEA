// 1285 아름이의 돌 던지기

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solve(vector<int> testcase){
    vector<int> ret(2);
    
    for(int i=0;i<testcase.size();i++){
        testcase[i]=abs(testcase[i]);
    }
    sort(testcase.begin(),testcase.end());
    ret[0]=testcase[0];
    for(int i=0;i<testcase.size();i++){
        if(testcase[i]==ret[0]){
            ret[1]++;
        }else {
            break;
        }
    }
    
    return ret;
}

int main(){
    int t;
    cin>>t;
    vector<vector<int>> testcases;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> testcase;
        for(int j=0;j<n;j++){
            int d;
            cin>>d;
            testcase.push_back(d);
        }
        testcases.push_back(testcase);
    }

    for(int i=0;i<t;i++){
        vector<int> answer = solve(testcases[i]);
        cout<<"#"<<i+1<<" "<<answer[0]<<" "<<answer[1]<<endl;
    }
    return 0;
}
