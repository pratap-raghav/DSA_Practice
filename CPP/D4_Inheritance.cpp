#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box(int w) : width(w) {}
    friend void printWidth(Box b);  // Friend function declaration
};

void printWidth(Box b) {
    cout << "Width: " << b.width << endl;  // Access private member
}

int main() {
    Box box(10);
    printWidth(box);  // Output: Width: 10
    return 0;
}
