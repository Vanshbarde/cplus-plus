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

#include <boost/multiprecision/cpp_int.hpp>

using namespace std;


int main(){
        int a ;
        cout<<"enter the value of a: ";
        cin>>a;
        cpp_int first =0; 
        cpp_int second =1;
        cpp_int count = 1;
        for(int i=2;i<=10000000;i++){
            cpp_int next = first + second;
            first = second;
            second = next;
            count++;
            if(count == a){
                break;
            }
        }
        
        cout<<second;
    return 0;
}


43466557686937456435688527675040625802564660517371780402481729089536555417949051890403879840079255169295922593080322634775209689623239873322471161642996440906533187938298969649928516003704476137795166849228875
