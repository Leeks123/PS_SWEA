#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int t,n;
    cin>>t;
    vector<int> v;
    for(int i=0;i<t;i++){
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    cout<<v[t/2]<<endl;
    return 0;
}
