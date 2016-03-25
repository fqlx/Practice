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


int main()
{
    int n, i, j, k;
    cin>>n;
    
        for(i=n;i>=1;i--)
        {
            for(j=1;j<i;j++)
            {
              cout<<" ";
            }
            for(k=n;k>=i;k--)
                {
                    cout<<"#";
                }
        cout<<"\n";
        }
}
