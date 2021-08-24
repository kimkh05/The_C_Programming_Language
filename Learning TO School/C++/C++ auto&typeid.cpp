#include<iostream>
int main() {
	auto a = true;
	auto b = 'A';
	auto c = L'B';
	auto d = "문자열";
	auto e = 815;
	auto f = 3.14;
	auto g = 2.19f;
	std::cout << "값\t크기\t자료형" << std::endl;
	std::cout << a << '\t' << sizeof(a) << '\t' << typeid(a).name() << std::endl;
	std::cout << b << '\t' << sizeof(b) << '\t' << typeid(b).name() << std::endl;
	std::cout << c << '\t' << sizeof(c) << '\t' << typeid(c).name() << std::endl;
	std::cout << d << '\t' << sizeof(d) << '\t' << typeid(d).name() << std::endl;
	std::cout << e << '\t' << sizeof(e) << '\t' << typeid(e).name() << std::endl;
	std::cout << f << '\t' << sizeof(f) << '\t' << typeid(f).name() << std::endl;
	std::cout << g << '\t' << sizeof(g) << '\t' << typeid(g).name() << std::endl;
}
