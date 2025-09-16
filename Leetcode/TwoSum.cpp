

// how should the output will look      nput: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

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
    int target;
    int n;
    cout<<"enter the number of elements in the array : ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the target value : ";
    cin >> target;
    for(int &i : nums){
        cin>>i;
    } 
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] + nums[j] == target){
                cout<<"the indices are : "<<i<<" and "<<j<<endl;
            }
    }
}
    return 0;
}



