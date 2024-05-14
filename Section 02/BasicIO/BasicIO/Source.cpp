#include <iostream>
#include <string>

int main() {
	using namespace std;
	
	char buff[64];
	cout << "What is your name?";
	/*
	There's a better way to do it. Check the 
	lecture on std::strings if you're curious :)
	*/
	cin.getline(buff, 64, '\n');
	cout << "Your name is:" << buff << endl;
	
	int age{ 0 };
	std::cout << "age variable after init = " << std::to_string(age) << std::endl;
	std::cout << "What is your age?" << std::endl;
	std::cin >> age;
	std::cout << "your age is: " << std::to_string(age) << std::endl;
	return 0;
}