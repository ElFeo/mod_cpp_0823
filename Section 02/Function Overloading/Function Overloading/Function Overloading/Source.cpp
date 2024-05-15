#include <iostream>
int Add(int a, int b) {
	return a + b;
}
double Add(double a, double b) {
	return a + b;
}
extern "C" void PrintCStyle(const int *x) {
     printf("using C style printf = %x\n", x);

     return;
}
void Print(const int* x) {
    std::cout << x << std::endl;

    return;
}
int main() {
	using namespace std;
	int result = Add(3, 5);
	std::cout << result << std::endl;
	double dResult = Add(3.1, 6.2);
	std::cout << dResult << std::endl;
	const int x = 1;
	Print(&x);
	PrintCStyle(&x);
	return 0;
}