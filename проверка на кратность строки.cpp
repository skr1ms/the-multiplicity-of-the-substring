#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsKPeriodic(string s, int k) {
	//проверка длины строки
	if (s.length() <= NULL) 
		return false;
	if (s.length() % k != 0) {
		return false;  
	}
	else {
		std::string substring = s.substr(0, k); //если находится подстрока, то сохраняем ее в substring
		for (int i = k; i < s.length(); i += k) {
			//проверяем на равенство подстрок
			if (s.substr(i, k) != substring) {
				return false;
			}
		}
		return true;
	}

}

int main()
{
	string q{ "abcabcabcabc" };

	bool a = IsKPeriodic(q, 5);

	cout << a << endl;
	return 0;
}
