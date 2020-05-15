//2001. 파리 퇴치

#include <iostream>

using namespace std;

class flyBoard {
private:
    int boardSize;
    int sieveSize;
    int maxCatchValue = 0;
    int** Board;
public:
    flyBoard(){}
    flyBoard(int n,int m){
        this->boardSize = n;
        this->sieveSize = m;
        
        Board = new int*[n];
        for(int i=0;i<boardSize;i++){
            Board[i] = new int[n];
        }
    }
    
    void input(){
        for(int i=0;i<boardSize;i++){
            for(int j=0;j<boardSize;j++){
                int n;
                cin>>n;
                Board[i][j]=n;
            }
        }
    }
    int maxCatch(){
        for(int i=0;i<=boardSize-sieveSize;i++){
            for(int j=0;j<=boardSize-sieveSize;j++){
                int tmp=0;
                for(int x=i;x<i+sieveSize;x++){
                    for(int y=j;y<j+sieveSize;y++){
                        tmp+=Board[x][y];
                    }
                }
                if(tmp>maxCatchValue){
                    maxCatchValue=tmp;
                }
            }
        }
        return maxCatchValue;
    }
    
};
int main(){
    int t;
    cin>>t;
    flyBoard f[t];
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        f[i] = flyBoard(n,m);
        f[i].input();
    }
    
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" "<<f[i].maxCatch()<<endl;
    }
    return 0;
}
