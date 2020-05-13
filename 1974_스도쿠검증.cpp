//1974. 스도쿠 검증

#include <iostream>

using namespace std;

class Sudoku {
private:
    int board[9][9];
public:
    void input(){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int n;
                cin>>n;
                board[i][j]=n;
            }
        }
    }
    bool check(){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(!partCheck(i,j)){
                    return false;
                }
            }
        }
        return true;
    }
    bool partCheck(int x,int y){
//        cout<<x<<" "<<y<<":"<<rowCheck(x)<<" "<<columnCheck(y)<<" "<<squareCheck(x, y)<<endl;
        if(rowCheck(x)&&columnCheck(y)&&squareCheck(x,y)) return true;
        else return false;
    }
    bool rowCheck(int n){
        int check[10]={0,};
        for(int i=0;i<9;i++){
            check[board[n][i]]++;
        }
        for(int i=1;i<=9;i++){
            if(check[i]!=1) return false;
        }
        return true;
    }
    bool columnCheck(int n){
        int check[10]={0,};
        for(int i=0;i<9;i++){
            check[board[i][n]]++;
        }
        
        for(int i=1;i<=9;i++){
            if(check[i]!=1) return false;
        }
        return true;
    }
    bool squareCheck(int x,int y){
        int squareNum = (x/3)*3+y/3+1;
        int startX=0,startY=0;
        
        switch (squareNum) {
            case 1:
                startX=0;startY=0;
                break;
            case 2:
                startX=0;startY=3;
                break;
            case 3:
                startX=0;startY=6;
                break;
            case 4:
                startX=3;startY=0;
                break;
            case 5:
                startX=3;startY=3;
                break;
            case 6:
                startX=3;startY=6;
                break;
            case 7:
                startX=6;startY=0;
                break;
            case 8:
                startX=6;startY=3;
                break;
            case 9:
                startX=6;startY=6;
                break;
            default:
                break;
        }
        
        int check[10]={0,};
        
        for(int i=startX;i<startX+3;i++){
            for(int j=startY;j<startY+3;j++){
                check[board[i][j]]++;
            }
        }
        for(int i=1;i<=9;i++){
            if(check[i]!=1) return false;
        }
        return true;
    }
};

int main(){
    int t;
    cin>>t;
    Sudoku sudoku[t];
    for(int i=0;i<t;i++){
        sudoku[i].input();
    }
    for(int i=0;i<t;i++){
        cout<<"#"<<i+1<<" "<<sudoku[i].check()<<endl;
//        sudoku[i].check();
    }
    return 0;
}
