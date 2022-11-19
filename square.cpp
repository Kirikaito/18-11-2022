#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,d;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt(pow(x1 - x2 , 2)  + pow(y1 - y2 , 2));
    b = sqrt(pow(x3 - x2 , 2)  + pow(y3 - y2 , 2));
    c = sqrt(pow(x1 - x3 , 2)  + pow(y1 - y3 , 2));
    if(a == b && sqrt(pow(a , 2)  + pow(b , 2)) == c){
        cout << x3 + (x1 - x2) << " " << y3 + (y1 - y2);
        return 0;
    }
    if(c == b && sqrt(pow(c , 2)  + pow(b , 2)) == a){
        cout << x2 + (x1 - x3) << " " << y2 + (y1 - y3);
        return 0;
    }
    if(a == c && sqrt(pow(a , 2)  + pow(c , 2)) == b){
        cout << x2 + (x3 - x1) << " " << y2 + (y3 - y1);
        return 0;
    }
    cout<<"this is not the square";
    return 0;
}
