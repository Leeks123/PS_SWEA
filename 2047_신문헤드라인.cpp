#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string t,answer="";
    cin>>t;
    for(int i=0;i<t.size();i++){
        answer+=toupper(t[i]);
    }
    cout<<answer<<endl;
    return 0;
}
