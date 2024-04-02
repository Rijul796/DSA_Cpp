#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int breadth;
    int height;

public:
    // Default constructor
    Box() : length(0), breadth(0), height(0) {}

    // Parameterized constructor
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    // Copy constructor
    Box(const Box& b) : length(b.length), breadth(b.breadth), height(b.height) {}

    // Getter functions
    int getLength() const {
        return length;
    }

    int getBreadth() const {
        return breadth;
    }

    int getHeight() const {
        return height;
    }

    // Calculate volume
    long long CalculateVolume() const {
        return static_cast<long long>(length) * breadth * height;
    }

    // Overload less than operator
    bool operator<(const Box& b) const {
        if (length < b.length)
            return true;
        else if (length == b.length && breadth < b.breadth)
            return true;
        else if (length == b.length && breadth == b.breadth && height < b.height)
            return true;
        else
            return false;
    }

    // Overload insertion operator
    friend ostream& operator<<(ostream& out, const Box& b) {
        out << b.length << " " << b.breadth << " " << b.height;
        return out;
    }
};

int main() {
    int l, b, h;
    cout << "Enter length, breadth, and height of the box: ";
    cin >> l >> b >> h;
    
    Box b1; // Default constructor
    Box b2(l, b, h); // Parameterized constructor
    
    cout << "Length of b2: " << b2.getLength() << endl; 
    cout << "Breadth of b2: " << b2.getBreadth() << endl; 
    cout << "Height of b2: " << b2.getHeight() << endl; 
    cout << "Volume of b2: " << b2.CalculateVolume() << endl;
    bool x = (b1 < b2); 
    cout << "b1 < b2: " << (x ? "true" : "false") << endl;
    cout << "Box b2 dimensions: " << b2 << endl; 
    return 0;
}
