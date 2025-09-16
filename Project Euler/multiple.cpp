

//THIS CODE IS FOR FINDING THE SUM OF ALL THE MULTIPLES OF 3 AND 5 BELOW N FOR T TEST CASES :::::::::::::::

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
    int t;
    cout<<"enter the number of test cases : ";
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cout<<"enter the value of n for "<<i<< " : ";
        cin >> n;
        int sum  = 0;
        int j =0;
        while(j != n){
            if(j % 3 ==0 || j % 5 == 0){
                sum = sum + j;
            }
            j++;
        }
        
        cout<<"the sum for the " << i << " is "<<sum<<endl;
    }
    return 0;
}



