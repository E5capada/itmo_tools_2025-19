#include <iostream>
#include <vector>

int counter(std::vector<int>& v) {
    int count = 0;
    for (int i = 1; i < v.size() - 1; i++) {
        if ((v[i - 1] < v[i]) && (v[i + 1] < v[i])) {
            count++;
        }
    }
    return count;
}
    int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::cout << counter(v);
}
