#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    int A,B;
    string answer;
    cin>>A>>B;
    // 가위 1 바위 2 보 3
    if(A<B){
        if(A==1 && B==3){
            answer="A";
        }else{
            answer="B";
        }
    }else{
        if(A==3 && B==1){
            answer="B";
        }else{
            answer="A";
        }
    }
    cout<<answer<<endl;
    return 0;
}
