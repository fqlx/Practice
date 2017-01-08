#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
    public:
    int maximumDifference;
        
    // Add your code here

    Difference (vector<int> _elements)
        : elements(_elements), maximumDifference(0) {}

    void computeDifference() {
        maximumDifference = 
            *max_element(elements.begin(), elements.end())
            - *min_element(elements.begin(), elements.end());
    }
}; // End of solution

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}