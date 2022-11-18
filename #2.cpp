#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;
    vector<Point>arr(n + 5);
    set<double>res;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].x>>arr[i].y;
    }
    for (int i =0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++){
        res.insert(sqrt(pow(arr[j].x - arr[i].x , 2)  + pow(arr[j].y - arr[i].y , 2) ));
        }
    }
    
    
    cout << res.size() << endl;
    cout.precision(12);
    for (auto i : res)
        cout << fixed<<i << endl;
}