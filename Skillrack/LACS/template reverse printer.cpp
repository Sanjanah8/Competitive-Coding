#include <vector>
template <typename T>
class ReversePrinter {
private:
    std::vector<T> elements;
    int size;
public:
    ReversePrinter(int n) {
        size = n;
        elements.reserve(size);
    }
    void add(T item) {
        elements.push_back(item);
    }
    void printInReverse() {
        for (int i = elements.size() - 1; i >= 0; i--) {
            cout << elements[i];
            if (i > 0) {
                cout << " ";
            }
        }
    }
};
