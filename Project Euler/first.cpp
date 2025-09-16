#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{    
    // int x;
    vector<int> v(6);
    
    cout<<"\nenter the value for all the elements :   ";
  for(int &i : v){
    cin>>i;
  }
  reverse(v.begin(),v.end());
//   vector<int> b = reverse(v.begin(),v.end());
  cout<<"\nthe reversed array is : ";
  for(int j : v){
    cout<<j<<" ";
  }
  
    // cout<<"enter the value";
    // cin>>x;5

    // cout<<"so the value is " << x;
    return 0;
}