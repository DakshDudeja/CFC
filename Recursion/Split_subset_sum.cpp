#include <bits/stdc++.h>
using namespace std;

void equalGroups (vector<int> a, vector<int> l1, vector<int> l2, int index, int sum1, int sum2) {
    if (index == a.size()) {
        if(sum1 == sum2) {
            for(auto i: l1) {
                cout << i << " ";
            }
            cout << "and ";
            for(auto i: l2) {
                cout << i << " ";
            }
            cout << "\n";
        }
        return;
    }
    l1.push_back(a[index]);
    equalGroups(a, l1, l2, index+1, sum1+a[index], sum2);
    l1.pop_back();
    l2.push_back(a[index]);
    equalGroups(a, l1, l2, index+1, sum1, sum2+a[index]);
    l2.pop_back();
    return;
}

// Driver program
int main(void)
{
    srand(time(0));
 
    int n;
    cin >> n;

    vector<int> a(n,0), l1, l2;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    equalGroups(a, l1, l2, 0 , 0, 0);
    
    return 0;
}