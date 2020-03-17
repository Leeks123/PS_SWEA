#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string t;
    cin>>t;
    for(int i=0;i<t.size();i++){
        cout<<toupper(t[i])-64<<" ";
    }
    return 0;
}
