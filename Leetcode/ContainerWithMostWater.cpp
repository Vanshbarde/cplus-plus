// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.


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
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
      vector<int> nums(n);
      for(int i=0;i<n;i++){
        cin>>nums[i];
      }
      int maxi = INT_MIN;
      int start = 0;
      int end  = n-1;
      while(start<end){
       int w = end - start;
       int h = min(nums[start],nums[end]);
       int area = w*h;
       maxi = max(maxi,area);
         if(nums[start]<nums[end]){
          start++;
         }
         else{
          end--;
         }
    }
  cout<<maxi;
    return 0;
}



