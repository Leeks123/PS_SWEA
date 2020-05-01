// 1986 지그재그 숫자
#include <iostream>
#include <vector>

using namespace std;

int solve(int n){
    int ret = 0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            ret-=i;
        }else{
            ret+=i;
        }
    }
    return ret;
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
        cout<<solve(testcase[i])<<endl;
    }
}
