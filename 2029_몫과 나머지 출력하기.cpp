#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(int argc, char** argv)
{
    int t,a,b;
    cin>>t;
    vector<pair<int,int>> answer;
    
    for(int i=0;i<t;i++){
        cin>>a>>b;
        answer.push_back(make_pair(a/b,a%b));
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" "<<answer[i].first<<" "<<answer[i].second<<endl;
    }
    return 0;
}
