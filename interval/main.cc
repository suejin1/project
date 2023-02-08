#include <iostream>
#include <chrono>
#include <thread>
#include <functional>
 
void run(std::function<void(void)> f, int duration)
{
    std::thread([f, duration]() {
        while (true)
        {
            f();
            auto ms = std::chrono::steady_clock::now() + std::chrono::milliseconds(duration);
            std::this_thread::sleep_until(ms);
        }
    }).detach();
}
 
void foo() {
    std::cout << "Running.." << std::endl;
}

int main()
{
    run(foo, 1000);
    while (true);
}
