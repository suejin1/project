#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream in ("sys/class/gpio/gpio490/value");
    std::string s;

    if (in.is_open()) {
        in >> s;
        std::cout << "1" << std::endl;
    } else {
        std::cout << "파일을 찾을 수 없습니다!" << std::endl;
    }

    return 0;
}