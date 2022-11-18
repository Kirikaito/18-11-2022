#include <iostream>

using namespace std;

int main()
{
    string s,d="",m="",g="";
    cin >> s;
    int n = 0;
    while (s[n]!='/') {
             d = d + s[n]; n++;
       }
    n++;
    while (s[n] != '/') {
             m = m + s[n]; n++;
       }
    n++;
    while (n<s.length()) {
             g = g + s[n]; n++;
       }
       
    int dn, mn, gn;
    dn = stoi(d); mn = stoi(m); gn = stoi(g);
    int osn = dn + 1;
    
    char out[]={'0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
    'Q','R','S','T','U','V','W','X'};
    
    d="",m="",g="";
    
    while(dn > 0){
    d = out[dn % osn] + d;
    dn = dn / osn;
    }
    while(mn > 0){
    m = out[mn % osn] + m;
    mn = mn / osn;
    }
    while(gn > 0){
    g = out[gn % osn] + g;
    gn = gn / osn;
    }
    
    cout << d << '/' << m << '/' << g;
    return 0;
}
