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
    int p=0,m=0,z=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
        if((arr[arr_i])>0)
            {p+=1;}
        else if((arr[arr_i])<0)
            {m+=1;}
        else
            {z+=1;}
    }
    cout<<(float)p/n<<endl;;
    cout<<(float)m/n<<endl;
    cout<<(float)z/n<<endl;
    return 0;
}
