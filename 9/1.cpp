#include <iostream>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int min4(int a, int b, int c, int d) {
    return (min(a, b) < min(c, d)) ? min(a, b) : min(c, d);
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    std::cout << min4(a, b, c, d);
    
    return 0;
}
