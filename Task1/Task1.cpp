// Task1.cpp: определяет точку входа для консольного приложения. 
// 

using namespace std;
#include <iostream> 
#include "stdafx.h" 

/*  
*  Задача №1 : реализовать собственную функцию strnset
*  Функция инициализирует символы строки определенным символом.
*  Если count больше, чем длина str, длина str используется вместо count.
*/

char* _my_strnset(char *str, char c, size_t count)
{
	int i = 0;
	while (str[i] && (i < count))
	{
		str[i] = c;
		i++;
	}
	return str;
}

int main()
{
	char *str = new char[255]; // инициализация указателя?? на массив чар с размером 255 эл-тов 
	char c = ' '; // присвоение переменной значения в момент инициализации 
	int count = 0; // присвоение переменной значения в момент инициализации 
	
	
	cout <<  "Input string : "; // ввод строки, count первых символов которой нужно заменить 
	//cin >> str; // это считает только до первого пробела(
	cin.getline(str, 255);
	cout << "Input symbol : "; // ввод символа, который будет заменять символы исх. строки 
	cin >> c;
	cout << "Input count : "; // ввод кол-ва первых символов, которые будут заменены в исх. строке 
	cin >> count;
	
	
	_my_strnset(str, c, count); // вызов функции с передачей параметров 
	cout << str; // вывод результата 
	cin.ignore(); // для удобства отладки 
	cin.ignore();
	
	delete[] str; // очищение памяти "вручную" 
	return 0;
}

// if (count > my_strlen(str)) // реализовать без strlen(str))
//	count = my_strlen(str); // реализовать без strlen(str))
//char *str2 = "firstC++task"; 
//*_my_strnset(str2, 'i', 10); 
//cout « str2; 
//cout « *_my_strnset("My first C++ task", 'j', 222); // почему не работает?? 
//cout « *_my_strnset("Text here", 'h', 5); 
//cout « sizeof("He llo "); 
//cout « strlen("He llo ");
/*int my_strlen(char *str)
{
	int count = 0;
	for (count = 0; str[count]; count++);
	return count;
}*/