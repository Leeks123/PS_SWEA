//1970. 쉬운 거스름돈

#include <iostream>
#include <vector>

using namespace std;
vector<int> solve(int n){
    vector<int> ret(8);
    
    ret[0]=n/50000; n=n%50000;
    ret[1]=n/10000; n=n%10000;
    ret[2]=n/5000;  n=n%5000;
    ret[3]=n/1000;  n=n%1000;
    ret[4]=n/500;   n=n%500;
    ret[5]=n/100;   n=n%100;
    ret[6]=n/50;    n=n%50;
    ret[7]=n/10;
    
    return ret;
}
void vectorPrint(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    
    vector<int> testcases;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        testcases.push_back(n);
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<endl;
        vectorPrint(solve(testcases[i]));
    }
    return 0;
}
