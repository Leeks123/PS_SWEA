//1989 초심자의 회문검사
#include <iostream>
#include <vector>
using namespace std;

int solve(string str){
    for(int i=0;i<str.length()/2;i++){
        if(str[i]!=str[str.length()-1-i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    
    vector<string> testcase;
    for(int i=0;i<t;i++){
        string str;
        cin>>str;
        testcase.push_back(str);
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" ";
        cout<<solve(testcase[i])<<endl;
    }
}
