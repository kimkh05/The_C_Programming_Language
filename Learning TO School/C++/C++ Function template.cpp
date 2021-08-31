#include<iosteam>
#include<typeinfo>
template<typename T>
T add(T a, T b) {
	std::cout << typeid(a).name() << "\t";
	return a + b;
}
int main() {
	std::cout << add(3, 4) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;
	std::cout << add(3.141f, 4.456f) << std::endl;
}
