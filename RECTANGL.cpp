#include <iostream>
using namespace std;

int main() {

  int t ,a,b,c,d;
  cin >> t;
  while(t-- >0){
      cin>>a>>b>>c>>d;
     if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
                        printf("%s\n", "YES");
                else
                        printf("%s\n", "NO");
      
  }

	return 0;
}
