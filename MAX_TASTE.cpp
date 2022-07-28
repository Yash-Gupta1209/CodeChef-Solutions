#include <iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>> t;
    while(t--){
        cin>>a>>b>>c>>d;
        int ans = max(a,b) + max(c,d);
        cout << ans << endl;
    }
    return 0;
}
