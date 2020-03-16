#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int t;
    cin>>t;
    vector<string> answers;
    int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    string input,yyyy,mm,dd;
    for(int i=0;i<t;i++){
        cin>>input;
        yyyy = input.substr(0,4);
        mm = input.substr(4,2);
        dd = input.substr(6,2);
        
        // value check
        if(stoi(mm)<1 || stoi(mm)>12) answers.push_back("-1");
        else {
            if(stoi(dd)<1 || stoi(dd)>monthday[stoi(mm)-1]){
                answers.push_back("-1");
            }else{
                answers.push_back(yyyy+"/"+mm+"/"+dd);
            }
        }
    }
    for(int i=1;i<=answers.size();i++){
        cout<<"#"<<i<<" "<<answers[i-1]<<endl;
    }
}
