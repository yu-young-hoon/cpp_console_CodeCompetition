#ifdef WIN32 
#include "..\\..\\..\\stdc++.h"
#elif __APPLE__
#include "../../../stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;
using namespace std;

int main() {
#ifdef YH
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

if (a.length() > b.length()) 
        swap(a, b); 
  
    string str = ""; 
  
    int n1 = a.length(), n2 = b.length(); 
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((a[i]-'0')+(b[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
  
        carry = sum/10; 
    } 
  
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((b[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if (carry) 
        str.push_back(carry+'0'); 
  
    reverse(str.begin(), str.end()); 
  
    cout << str;
    
	return 0;
}
