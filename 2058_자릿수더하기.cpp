#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin>>s;
    int ret=0;
    
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            ret+=(int)s[i]-48;//0==48
        }
    }
    cout<<ret<<endl;
    
    return 0;
}
