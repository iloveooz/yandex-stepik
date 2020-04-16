#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2, d = 0.0;
    std::cin >> x1 >> y1 >> x2 >> y2;
    
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    std::cout << d;
    
    return 0;
}
