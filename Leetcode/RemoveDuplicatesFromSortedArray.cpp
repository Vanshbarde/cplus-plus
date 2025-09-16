
// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).


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
         vector<int>nums(n);
         for(int i=0;i<n ;i++){
            cin>>nums[i];
         }
         for(int i =0 ;i<n;i++){
            int j = i+1;
            // while(j < nums.size()){
            //     if(nums[i] == nums[j]){
            //         nums.erase(nums.begin() + j);
            //     }
            //     else{
            //         j++;
            //     }
            // }

            //using for loop ::
            //in this we are not incrementing j in for loop beacuse if we are erasing the element then the next element will come at the same index so we will not increment j in that case
            for(int j=i+1;j<nums.size();){
                if(nums[i] == nums[j] ){
                    nums.erase(nums.begin() + j);
                }
                else{
                    j++;
                }
            }


         }
         cout<<nums.size();
          



        //WE CAN SOLVER SAME QUESTION USIGN SET :::
        // set<int>s(nums.begin() , nums.end());
        // cout<<s.size();
        //very easy appraoch::::



    return 0;
}



