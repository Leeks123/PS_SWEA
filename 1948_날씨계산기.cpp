//1948 날씨 계산기
#include <iostream>
#include <vector>
using namespace std;

int mm[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int solve(vector<int> v){
    int am = v[0],ad = v[1];
    int bm = v[2],bd = v[3];
    
    int ret=1;
    if(am==bm){
        ret += v[3]-v[1];
    }else{
        ret += mm[am] - ad;
        for(int i=am+1;i<bm;i++){
            ret += mm[i];
        }
        ret += bd;
    }
    return ret;
}
int main(){
    int t;
    cin>>t;
    
    vector<vector<int>> testcase;
    for(int i=0;i<t;i++){
        vector<int> mmdd;
        for(int j=0;j<4;j++){
            int n;
            cin>>n;
            mmdd.push_back(n);
        }
        testcase.push_back(mmdd);
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" ";
        cout<<solve(testcase[i])<<endl;
    }
}
