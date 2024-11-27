#include <iostream>
using namespace std;

int addCont(int x, int y){
    int xy = x*y;
    if(xy>1000)
        return xy*0.5;
    return xy*0.8;
}
int addVont(int x, int y){
    int xy = x*y;
    if(xy>1000)
        return xy*0.5;
    return xy*0.8;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << addCont(x, y) << endl;
}