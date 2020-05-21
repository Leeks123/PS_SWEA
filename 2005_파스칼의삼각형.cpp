//2005. 파스칼의 삼각형

#include <iostream>
#include <vector>

using namespace std;

class Pascal {
public:
    int pascal[10][10];
    
    Pascal(){
        arrayInit();
        
        setFirst();
        setLast();
        setInner();
    }
    void arrayInit(){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                pascal[i][j]=0;
            }
        }
    }
    void setFirst(){
        for(int i=0;i<10;i++){
            pascal[i][0]=1;
        }
    }
    void setLast(){
        for(int i=0;i<10;i++){
            pascal[i][i]=1;
        }
    }
    void setInner(){
        for(int i=2;i<10;i++){
            for(int j=1;j<i;j++){
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }
    void getTriangle(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cout<<pascal[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int t;
    cin>>t;
    vector<int> testcase;
    Pascal p = Pascal();
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        testcase.push_back(n);
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<endl;
        p.getTriangle(testcase[i]);
    }
}
