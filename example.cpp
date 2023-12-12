#include<iostream>
using namespace std;

class Solution {
public:
    int num[4];
    int i=0;

    void setnum(int a) {
       
       num[i]=a;
       i++;
    }

    void getnum() {
        for(int i = 0; i < 4; i++) {
            cout << num[i] << endl;
        }
    }
};

int main() {
    int target;
    cin >> target;

    Solution sol;

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    sol.setnum(A);
    sol.setnum(B);
    sol.setnum(C);
    sol.setnum(D);

    sol.getnum();

    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 4; j++) {
            if((sol.num[i] + sol.num[j]) == target) {
                cout << i << " , " << j << endl;
            }
        }
    }

    return 0;
}
