#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long num ;
   cin >> num ;

   bitset<8> b(num) ;

   cout << b.count() << endl ;// count '1' of binary number

   cout << b.to_string() << endl ; // binary number

   cout << b.to_string('*','X') << endl ; //  * replace 0 , and X replace 1

   cout << b.to_string('*') << endl ; // * replace 0

   cout << b.to_ulong() << endl ; // num
   int num2 = b.to_ulong() ;
   cout << num2 << endl ;



    return 0 ;
}
