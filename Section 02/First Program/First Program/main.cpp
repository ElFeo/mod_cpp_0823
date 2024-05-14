//This is a single line comment 05/14/2024 Tuesday

/*
  05/14/2024 Modern Cpp 
*/


#include <type_traits>
#include <iostream>
#include <string>

enum e1{} ;
enum class e2{};
 
int main() {
    bool e1_type = std::is_same<int,typename std::underlying_type<e1>::type>::value; 
    bool e2_type = std::is_same<int,typename std::underlying_type<e2>::type>::value;
    // initialization examples
    int i{ 44 };
    std::cout << "underlying type for 'e1' is " << (e1_type?"int":"non-int") << '\n' << "underlying type for 'e2' is " << (e2_type?"int":"non-int") << std::endl;

    std::cout << "Hello, Hello Kitty!" << std::endl;
    std::cout << "integer value i=" + std::to_string( i ) << std::endl;

    return 0;
}