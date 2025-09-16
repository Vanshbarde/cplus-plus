// Input: nums = [84,93,100,77,90], k = 3

// Output: [100,93,90]

// Explanation:

// The maximum sum is 283, which is attained by choosing 93, 100 and 90. We rearrange them in strictly descending order as [100, 93, 90].


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
    cout<<"enter the size of the array : ";
    cin>>n;
     vector<int> nums(n);
     for(int i=0;i<n;i++){
        cin>>nums[i];
     }
     int k;
     cout<<"enter the value of k : ";
     cin>>k;
    
     //first we need to remove the duplicates and to convert into ascending order we can convert the vector to the set::
     set<int> first(nums.begin(),nums.end());

     //we can't directly reverse the set so first we convert the set into vector:::
     vector<int> second(first.begin() , first.end());
     //to make the vector reverse or in descending order we are using reverse funition::::
      reverse(second.begin() , second.end());
      //to check which is smaller form the size or from the given value of k::::
int s = min(k, static_cast<int>(second.size()));
      vector<int>result;
       for(int i=0;i<s;i++){
           result.push_back(second[i]);
       }
       for(int i: result){
        cout<<i<<endl;
       }
    return 0;
}



