//1926. 간단한 369게임

#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<char> splitNum(int n){
    vector<char> ret;
    string s = to_string(n);
    for(int i=0;i<s.size();i++){
        ret.push_back(s[i]);
    }
    return ret;
}
string check369(int n){
    string ret = "";
    vector<char> sNum = splitNum(n);
    for(int i=0;i<sNum.size();i++){
        if(sNum[i]=='3' || sNum[i]=='6' || sNum[i]=='9'){
            ret+="-";
        }
    }
    if(ret==""){
        return to_string(n);
    } else {
        return ret;
    }
}
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<check369(i)<<" ";
    }

}
