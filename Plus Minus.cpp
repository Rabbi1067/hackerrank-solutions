#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   int x=0,y=0,z=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>0) x++;
    else if(a[i]<0) y++;
    else if(a[i]==0) z++;
   } 
     cout << fixed << setprecision(6) << (double)x / n << endl;
     cout << fixed << setprecision(6) << (double)y/ n << endl;
      cout << fixed << setprecision(6) << (double)z / n << endl;
    
    
    return 0;
}


