#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    vector<int> answer;
    
    cin>>T;
    
    for(test_case = 1; test_case <= T; ++test_case)
    {
        int n,ret=0;
        for(int i=0;i<10;i++){
            cin>>n;
            ret=ret>n?ret:n;
        }
        answer.push_back(ret);
    }
    
    for(int i=1;i<=answer.size();i++){
        cout<<"#"<<i<<" "<<answer[i-1]<<endl;
    }
    return 0;
}
