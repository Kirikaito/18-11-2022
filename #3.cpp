#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos;
    string s,answ = "";
    cin >> n;
    bool b,b1,b2,d;
    for(int i = 0; i < n; ++i){
        cin >> s;
        b = false; b1 = false; b2 = false; d = false;
        if(s[0] != '0'){
            answ = answ + "NO\n";
        }
        else{
            b = true;
            for(int j = 1; j < s.size(); ++j){
                if((s[j] == '0') && (b1 || b2)){
                    answ = answ + "NO\n";
                    d = true;
                    break;
                }
                if(s[j] == '1'){
                    b1 = true;
                     if(b2){
                        answ = answ + "NO\n";
                        d = true;
                        break;
                     }
                }
                if(s[j] == '2'){
                    b2 = true;
                    if(!b1){
                        answ = answ + "NO\n";
                        d = true;
                        break;
                    }
                }
            }
            if(!d){
                pos = s.find("1");
            if((s.size() - 1 - pos - 1) == (pos - 1) * 2)
                answ = answ + "YES\n";
            else
                answ = answ + "NO\n";
            }
        }
    }
    cout << answ;
    return 0;
}