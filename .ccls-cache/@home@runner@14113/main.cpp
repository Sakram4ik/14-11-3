#include <iostream>
#include <ctime>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;
int main(){
	int arr[5][7];
	int sum = 0;//змінна для парних чисел рядка
	srand(time(NULL));//отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним. 
	for (int i = 0; i < 5; i++) { // для рядків 
		for (int j = 0; j < 7; j++) {// для стовпчиків
			arr[i][j] =rand() %10;
		}
	}
	for (int i = 0; i < 5; i++) {
		sum = 0;//оновлює щоразу після циклу в рядку
		for (int j = 0; j < 7; j++) {
			sum=arr[i][j]+sum;
		}
		cout << "for " << i << " line sum is = " << sum << endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			cout << arr[i][j] << ' ';
		}//виведення двовимірного масиву
		cout << endl;
	}
}