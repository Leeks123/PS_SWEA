#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    v.erase(unique(v.begin(),v.end()),v.end());
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
