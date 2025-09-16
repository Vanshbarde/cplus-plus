


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
  cout<<"enter the value of a : ";
  cin>>a;
  long long rest = 1;
  for(int i = 1; i <= a; i++){
    rest = lcm(rest, i);
  }
  cout<<rest;
    return 0;
}



