#include <vector>
template <typename T>
class Doubler {
private:
    std::vector<T> elements;
public:
    Doubler(int n) {
        elements.reserve(n);
    }
    void add(T item) {
        elements.push_back(item);
    }
    void printDouble() {
        for (size_t i = 0; i < elements.size(); i++) {
            cout << elements[i] * 2 << (i == elements.size() - 1 ? "" : " ");
        }
    }
};
