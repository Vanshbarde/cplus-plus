#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
          int a;
          cout<<"enter the value of n : ";
          cin>>a;
          int sum =0 ;
          for(int i=1;i<=a;i++){
            sum = i*i + sum ;
          }
          cout<<"the sum of the square of the first n natural number is : "<<sum<<endl;
          int ans =0 ;
          for(int i=0;i<=a;i++){
            ans = ans + i;
          }
          cout<<"the sum of the first n natural number is : "<<ans<<endl;
          int sq = ans * ans;
          int res;
          res = sq - sum ;
          cout<<"the sumn of these is : "<<res; 
    return 0;
}
