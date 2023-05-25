/*Problem statement: Create a class template to represent a generic vector.
Include following member functions: 
· To create the vector.
· To modify the value of a given element
· To multiply by a scalar value*/

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Vector {
private:
    vector<T> elements;

public:
    Vector() {}

    void createVector(const vector<T>& values) {
        elements = values;
    }

    void modifyElement(int index, const T& value) {
        if (index >= 0 && index < elements.size()) {
            elements[index] = value;
        }
    }

    void multiplyByScalar(const T& scalar) {
        for (auto& element : elements) {
            element *= scalar;
        }
    }

    void print() const {
        cout << "Vector elements: ";
        for (const auto& element : elements) {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main() {
    Vector<int> intVector;
    vector<int> intValues = {1, 2, 3, 4, 5};
    intVector.createVector(intValues);

    cout << "Initial vector: ";
    intVector.print();

    intVector.modifyElement(2, 10);

    cout << "Vector after modifying an element: ";
    intVector.print();

    intVector.multiplyByScalar(2);

    cout << "Vector after multiplying by scalar: ";
    intVector.print();

    return 0;
}
