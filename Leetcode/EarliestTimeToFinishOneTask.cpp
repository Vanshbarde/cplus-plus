// Input: tasks = [[1,6],[2,3]]

// Output: 5

// Explanation:

// The first task starts at time t = 1 and finishes at time 1 + 6 = 7. The second task finishes at time 2 + 3 = 5. You can finish one task at time 5.


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
     vector<vector<int>> nums(n , vector<int>(2));
    
     for(int i=0;i<n;i++){
      cin>>nums[i][0]>>nums[i][1];
     }
     int sum  = 0;
     int mini = INT_MAX;

     for(int i=0;i<n;i++){
        sum = nums[i][0] + nums[i][1];
        mini = min(mini , sum);
     }
     cout<<mini;
    return 0;
}



