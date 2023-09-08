#include "iostream"
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main() {
    std::cout << "App starts!" << std::endl;
    while(true) {
std::cout << "App alive!" << std::endl;
std::this_thread::sleep_for(2000ms);
    }
}