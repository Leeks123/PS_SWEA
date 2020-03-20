#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    int n,ret=1;
    cin>>n;
    
    for(int i=0;i<=n;i++){
        cout<<ret<<" ";
        ret*=2;
    }
    return 0;
}
