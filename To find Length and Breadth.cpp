#include <iostream>
using namespace std;
int main() {
    int length,breadth;
    cin>>length>>breadth;
    int ropeLength=2*(length+breadth);
    int carpetarea = length+breadth;
    //To genertae output
    cout<<ropeLength<<endl;
    cout<<carpetarea<<endl;
    return 0;
}