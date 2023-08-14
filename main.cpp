#include "iostream"
#include <boost/thread.hpp>

int main() {
    std::cout << "hello world!" << std::endl;
        std::cout << boost::thread::hardware_concurrency() << std::endl;
}