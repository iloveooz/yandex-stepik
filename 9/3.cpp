#include <iostream>

bool IsPointInSquare(double x, double y) {
    if (x >= -1.0 && x <= 1.0 && y >= -1.0 && y <= 1.0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    double x, y;
    std::cin >> x >> y;
    
    if (IsPointInSquare(x, y)) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
        
    return 0;
}
