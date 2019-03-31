// Task1.cpp: ���������� ����� ����� ��� ����������� ����������. 
// 

using namespace std;
#include <iostream> 
#include "stdafx.h" 

/*  
*  ������ �1 : ����������� ����������� ������� strnset
*  ������� �������������� ������� ������ ������������ ��������.
*  ���� count ������, ��� ����� str, ����� str ������������ ������ count.
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
	char *str = new char[255]; // ������������� ���������?? �� ������ ��� � �������� 255 ��-��� 
	char c = ' '; // ���������� ���������� �������� � ������ ������������� 
	int count = 0; // ���������� ���������� �������� � ������ ������������� 
	
	
	cout <<  "Input string : "; // ���� ������, count ������ �������� ������� ����� �������� 
	//cin >> str; // ��� ������� ������ �� ������� �������(
	cin.getline(str, 255);
	cout << "Input symbol : "; // ���� �������, ������� ����� �������� ������� ���. ������ 
	cin >> c;
	cout << "Input count : "; // ���� ���-�� ������ ��������, ������� ����� �������� � ���. ������ 
	cin >> count;
	
	
	_my_strnset(str, c, count); // ����� ������� � ��������� ���������� 
	cout << str; // ����� ���������� 
	cin.ignore(); // ��� �������� ������� 
	cin.ignore();
	
	delete[] str; // �������� ������ "�������" 
	return 0;
}

// if (count > my_strlen(str)) // ����������� ��� strlen(str))
//	count = my_strlen(str); // ����������� ��� strlen(str))
//char *str2 = "firstC++task"; 
//*_my_strnset(str2, 'i', 10); 
//cout � str2; 
//cout � *_my_strnset("My first C++ task", 'j', 222); // ������ �� ��������?? 
//cout � *_my_strnset("Text here", 'h', 5); 
//cout � sizeof("He llo "); 
//cout � strlen("He llo ");
/*int my_strlen(char *str)
{
	int count = 0;
	for (count = 0; str[count]; count++);
	return count;
}*/