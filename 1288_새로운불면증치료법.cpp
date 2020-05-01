// 1288 새로운 불면증 치료법
#include <iostream>
#include <vector>

using namespace std;

vector<int> numberParse(int n){
    vector<int> ret;
    
    while(n/10!=0){
        ret.push_back(n%10);
        n = n/10;
    }
    ret.push_back(n);
    return ret;
}
bool isAll(vector<int> v){
    for(int i=0;i<v.size();i++){
        if(v[i]==0) return false;
    }
    return true;
}
int solve(int n){
    vector<int> check(10,0);
    int k=1;
    while(true){
        vector<int> v = numberParse(n*k);
        
        for(int i=0;i<v.size();i++){
            check[v[i]]++;
        }
        
        if(isAll(check)) break;
        k++;
    }
    return k;
}
int main(){
    int t;
    cin>>t;

    vector<int> testcase;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        
        testcase.push_back(n);
    }

    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" ";
        cout<<solve(testcase[i])*testcase[i]<<endl;
    }
}
