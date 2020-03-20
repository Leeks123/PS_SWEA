#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    int n,ret;
    cin>>n;
    ret=n;
    
    for(int i=0;i<=n;i++){
        cout<<ret<<" ";
        ret-=1;
    }
    return 0;
}
