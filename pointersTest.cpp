#include <iostream>

int main(){
	int *p;
	int k = 5;
	p = &k;

	int *q = p;

	char s = '5';

	std::cout << "String s: " << s << std::endl;

	int t = (int)s - '0';
	int six = 6;
	char m_char = '0' + six;
	int m_int = (int)m_char - '0';

	std::cout << "char m: " << m_char << std::endl;
	std::cout << "int m_int: " << m_int << std::endl;

	std::cout << "Int t: " << t << std::endl;

	std::cout << "*p imprime el elemento al que apunta: " << *p << std::endl;
	std::cout << "p imprime la direccion del elemento al que apunta: " << p << std::endl;

	return 0;
}