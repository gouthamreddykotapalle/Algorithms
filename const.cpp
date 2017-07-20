#include<iostream>
using namespace std;
 
class Test {
    int value;
public:
    Test(int v = 0) {value = v;}
    int getValue() const {value+=1;return value;}//cane make changes
};
 
int main() {
    Test t;
    const a=1;//cant be changed
    cout << t.getValue();
    return 0;
}
