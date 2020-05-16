//1976. 시각 덧셈

#include <iostream>
#include <vector>

using namespace std;
class calcTime {
    int h1,m1;
    int h2,m2;
    
    int overflow = 0;
public:
    calcTime(){};
    calcTime(int h1,int m1,int h2,int m2){
        this->h1 = h1;
        this->m1 = m1;
        this->h2 = h2;
        this->m2 = m2;
    }
    
    int getHour(){
        int tmp = h1+h2+overflow;
        if(tmp>12){
            return tmp-12;
        } else {
            return tmp;
        }
    }
    int getMin(){
        int tmp = m1+m2;
        if(tmp>=60){
            overflow++;
            return tmp-60;
        } else {
            return tmp;
        }
    }
};
int main(){
    int t;
    cin>>t;
    vector<calcTime> testcases;
    
    for(int i=0;i<t;i++){
        int h1,h2,m1,m2;
        cin>>h1>>m1>>h2>>m2;
        testcases.push_back(calcTime(h1,m1,h2,m2));
    }
    
    for(int i=0;i<t;i++){
        int m = testcases[i].getMin();
        int h = testcases[i].getHour();
        cout<<"#"<<i+1<<" "<<h<<" "<<m<<endl;
    }
    return 0;
}
