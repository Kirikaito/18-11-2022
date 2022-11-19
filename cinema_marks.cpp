#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x,y,n,answ;
    cin >> x >> y >> n;
    if(x>y){
        y = y + 0.04444444;
    }else{
        y = y - 0.05555555;
    }
    answ = (((x - y)*n)/(y - 1));
    if(answ > (int)answ){
        cout << (int)answ + 1;
    }else{
        cout << (int)answ;
    }    
    return 0;
}
