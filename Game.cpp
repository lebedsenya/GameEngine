#include <iostream>
#include <chrono>

int main() {
    double dt = 0;
    while (true) {
        // Measure elapsed time
        auto start = std::chrono::high_resolution_clock::now();
        // Update game state
        update(dt);
        // Render current frame
        render();
        // Measure elapsed time
        auto end = std::chrono::high_resolution_clock::now();
        dt = std::chrono::duration<double, std::milli>(end - start).count();
    }
    return 0;
}
