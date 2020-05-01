// 1284 수도요금 경쟁
#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> v){
    int a = v[0]*v[4];
    int b;
    if(v[4]<v[2]){
        b = v[1];
    }else{
        int remain = v[4]-v[2];
        b = v[1]+remain*v[3];
    }
    return a<b?a:b;
}
int main(){
    int t;
    cin>>t;

    vector<vector<int>> testcase;
    for(int i=0;i<t;i++){
        int p,q,r,s,w;
        cin>>p>>q>>r>>s>>w;
        vector<int> v;
        v.push_back(p);
        v.push_back(q);
        v.push_back(r);
        v.push_back(s);
        v.push_back(w);
        
        testcase.push_back(v);
    }

    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" ";
        cout<<solve(testcase[i])<<endl;
    }
}
