 #include <iostream>
    #include <string>

    int main() {
        std::string str1 = "Hello";
        std::string str2 = str1; // Copy using = operator
        std::cout << "str1: " << str1 << std::endl; // Output: str1: Hello
        std::cout << "str2: " << str2 << std::endl; // Output: str2: Hello
        str1 = "World"; // Modifying str1
        std::cout << "str1: " << str1 << std::endl; // Output: str1: World
        std::cout << "str2: " << str2 << std::endl; // Output: str2: Hello
        return 0;
    }