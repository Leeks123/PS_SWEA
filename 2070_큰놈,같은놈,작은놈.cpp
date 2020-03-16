#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    vector<char> answer;
    
    cin>>T;
    
    for(test_case = 1; test_case <= T; ++test_case)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) answer.push_back('>');
        else if(a==b) answer.push_back('=');
        else answer.push_back('<');
    }
    
    for(int i=1;i<=answer.size();i++){
        cout<<"#"<<i<<" "<<answer[i-1]<<endl;
    }
    return 0;
}
