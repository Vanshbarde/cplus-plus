


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
    cout<<"enter the value of n :";
    cin>>n;
     vector<int> nums;
     for(int i=0;i<n;i++){
       cin>>nums[i];
     }
     //to print the next purmutation we are using a fucition of c++;
     next_permutation(nums.begin() , nums.end());
     for(long long i:nums){
        cout<<i<<endl;
     }


    return 0;
}



