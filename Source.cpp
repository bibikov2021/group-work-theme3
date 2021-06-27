// ���� 3
// ��������� ���������� ��������� ������: ������� �., ���������� �., ���������� �., ��������� �., ������� �.
// ���� ��� ������� ������������� ��� ����� �������� ��������� ���������


#include <iostream>
#include <string>
using namespace std;



struct car { // �������� ��������� ����������
	double lg; // �����
	double hg; // ������ 
	int year; // ��� �������
	string country; // ������
	string name; // ��������
};

void printItemCar(car* arr, int n) { // ����� ���������� � ������� ����
	for (int i = 0; i < n; i++) {
		cout << "���� �" << i + 1 << endl;
		cout << "��������: " << arr[i].name << endl;
		cout << "�����: " << arr[i].lg << endl;
		cout << "������: " << arr[i].hg << endl;
		cout << "��� ���������: " << arr[i].year << endl;
		cout << "������: " << arr[i].country << endl;
		cout << endl;
	}
}

void searchItemCar(car* arr, int n, string nm) { // ����� ���� � ������� �� �����
	for (int i = 0; i < n; i++) {
		if (arr[i].name == nm) {
			printItemCar(&arr[i], 1);
			return;
		}
	}
	cout << "����� ���� �� �������!" << endl;
	return;
}

void removeItemCar(car*& arr, int* n) { // �������� ���� �� ������� �� ����� ����� �������� ������ �������, �������� ������� � ������
	string nm;
	cout << "������� �������� ���� ��� ��������: ";
	cin >> nm;

	bool ifsearch = false; // ���� ������� ������
	for (int i = 0; i < (*n); i++) {
		if (arr[i].name == nm)
		{
			arr[i].name = "NULL";
			ifsearch = true;
		}

	};

	if (!ifsearch) {
		cout << "����� ������� �� ������!" << endl;
		return;
	}
	car* arr2 = new car[(*n) - 1];

	int j = 0;
	for (int i = 0; i < (*n) - 1; i++) {

		if (arr[j].name == "NULL")
			j++;
		arr2[i] = arr[j];
		j++;
	}

	(*n)--;

	delete[] arr;
	arr = arr2;

	return;
}
void addItemCar(car*& arr, int* n) { // ���������� ���������� � ������ ��������, ���� ������ ���������� ��������
	car* arr2 = new car[(*n) + 1];
	for (int i = 0; i < (*n); i++) {
		arr2[i] = arr[i];
	}
	car item;
	cout << "������� ��������: ";
	cin >> item.name;
	cout << "������� �����: ";
	cin >> item.lg;
	cout << "������� ������: ";
	cin >> item.hg;
	cout << "������� ��� ���������: ";
	cin >> item.year;
	cout << "������� ������: ";
	cin >> item.country;

	(*n)++;
	
	arr2[(*n) - 1] = item;
	delete[] arr;
	arr = arr2;
}

struct ship { // �������� ��������� ������� 
	double lg; // �����
	double os; // ������
	string country; // ������
	string name; // ��������
};


void printItemShip(ship* arr, int n) { // ������� ��������� ���������� ����������� ��� ����
	for (int i = 0; i < n; i++) {
		cout << "������� �" << i + 1 << endl;
		cout << "��������: " << arr[i].name << endl;
		cout << "�����: " << arr[i].lg << endl;
		cout << "������: " << arr[i].os << endl;
		cout << "������: " << arr[i].country << endl;
		cout << endl;
	}
}

void searchItemShip(ship* arr, int n, string nm) { // ������� ��������� ���������� ����������� ��� ����
	for (int i = 0; i < n; i++) {
		if (arr[i].name == nm) {
			printItemShip(&arr[i], 1);
			return;
		}
	}
	cout << "����� ������� �� ������!" << endl;
	return;
}

void removeItemShip(ship*& arr, int* n) { // ������� ��������� ���������� ����������� ��� ����
	string nm;
	cout << "������� �������� ������� ��� ��������: ";
	cin >> nm;

	bool ifsearch = false; // ���� ������
	for (int i = 0; i < (*n); i++) {
		if (arr[i].name == nm)
		{
			arr[i].name = "NULL";
			ifsearch = true;
		}

	};

	if (!ifsearch) {
		cout << "����� ������� �� ������!" << endl;
		return;
	}
	ship* arr2 = new ship[(*n) - 1];

	int j = 0;
	for (int i = 0; i < (*n) - 1; i++) {

		if (arr[j].name == "NULL")
			j++;
		arr2[i] = arr[j];
		j++;
	}

	(*n)--;

	delete[] arr;
	arr = arr2;

	return;
}
void addItemShip(ship*& arr, int* n) { // ������� ��������� ���������� ����������� ��� ����
	ship* arr2 = new ship[(*n) + 1];
	for (int i = 0; i < (*n); i++) {
		arr2[i] = arr[i];
	}
	ship item;
	cout << "������� ��������: ";
	cin >> item.name;
	cout << "������� �����: ";
	cin >> item.lg;
	cout << "������� ������: ";
	cin >> item.os;
	cout << "������� ������: ";
	cin >> item.country;

	(*n)++;

	arr2[(*n) - 1] = item;
	delete[] arr;
	arr = arr2;
}
struct air {
	double rzm; // ������ �������
	double lg; // �����
	double max_s; // ������������ ��������
	double max_h; // ������������ ������ ������
	string name; // ��������

};


void printItemAir(air* arr, int n) { // ������� ��������� ���������� ����������� ��� ����
	for (int i = 0; i < n; i++) {
		cout << "������� �" << i + 1 << endl;
		cout << "��������: " << arr[i].name << endl;
		cout << "�����: " << arr[i].lg << endl;
		cout << "������ �������: " << arr[i].rzm << endl;
		cout << "������������ ��������: " << arr[i].max_s << endl;
		cout << "������������ ������: " << arr[i].max_h << endl;
		cout << endl;
	}
}

void searchItemAir(air* arr, int n, string nm) { // ������� ��������� ���������� ����������� ��� ����
	for (int i = 0; i < n; i++) {
		if (arr[i].name == nm) {
			printItemAir(&arr[i], 1);
			return;
		}
	}
	cout << "����� ������� �� ������!" << endl;
	return;
}

void removeItemAir(air*& arr, int* n) { // ������� ��������� ���������� ����������� ��� ����
	string nm;
	cout << "������� �������� �������� ��� ��������: ";
	cin >> nm;

	bool ifsearch = false; // ���� ������
	for (int i = 0; i < (*n); i++) {
		if (arr[i].name == nm)
		{
			arr[i].name = "NULL";
			ifsearch = true;
		}

	};

	if (!ifsearch) {
		cout << "����� ������� �� ������!" << endl;
		return;
	}
	air* arr2 = new air[(*n) - 1];

	int j = 0;
	for (int i = 0; i < (*n) - 1; i++) {

		if (arr[j].name == "NULL")
			j++;
		arr2[i] = arr[j];
		j++;
	}

	(*n)--;

	delete[] arr;
	arr = arr2;

	return;
}
void addItemAir(air*& arr, int* n) { // ������� ��������� ���������� ����������� ��� ����
	air* arr2 = new air[(*n) + 1];
	for (int i = 0; i < (*n); i++) {
		arr2[i] = arr[i];
	}
	air item;
	cout << "������� ��������: ";
	cin >> item.name;
	cout << "������� �����: ";
	cin >> item.lg;
	cout << "������� ������: ";
	cin >> item.rzm;
	cout << "������� ������������ ��������: ";
	cin >> item.max_s;
	cout << "������� ������������ ������: ";
	cin >> item.max_h;

	(*n)++;

	arr2[(*n) - 1] = item;
	delete[] arr;
	arr = arr2;
}





int main() {
	setlocale(LC_ALL, "ru");
	 int count_cars = 2;
	 int count_ships = 2;
	 int count_airs = 2;

	car *cars = new car[count_cars]; // �������� �������� �������� ��� ������� �������� � ���������� ���� ��������
	cars[0].name = "FirstCar";
	cars[0].lg = 2;
	cars[0].hg = 1.5;
	cars[0].year = 2000;
	cars[0].country = "Russia";
	//////
	cars[1].name = "SecondCar";
	cars[1].lg = 3;
	cars[1].hg = 2.5;
	cars[1].year = 1970;
	cars[1].country = "USA";
	////////////   �������   //////////////
	ship* ships = new ship[count_ships];
	ships[0].name = "1Ship";
	ships[0].lg = 200;
	ships[0].os = 50;
	ships[0].country = "England";
	//////
	ships[1].name = "2Ship";
	ships[1].lg = 750;
	ships[1].os = 150;
	ships[1].country = "France";
	////////////   ��������   //////////////
	air* airs = new air[count_airs];
	airs[0].name = "FirstAir";
	airs[0].lg = 200;
	airs[0].rzm = 30;
	airs[0].max_s = 2000;
	airs[0].max_h = 7000;
	//////
	airs[1].name = "SecondAir";
	airs[1].lg = 50;
	airs[1].rzm = 5;
	airs[1].max_s = 400;
	airs[1].max_h = 2000;



	// �������� ���� � ������� �����������
	int number;
	mainMenu: // ������� goto ��� �������� � �������� ����
	cout << "�������� ����������� ����������: " << endl;
	cout << "1. ���������� �����������" << endl;
	cout << "2. ���������� ��������" << endl;
	cout << "3. ���������� ���������" << endl;
	cout << "4.����� �� ����������" << endl;
	cin >> number;

	// ���� ������������ ����������� swith ���� ��� ������ �������� � �������������� ��������� ���� �������
		switch (number) {
		case 1:
			system("cls");
		carMenu:
			cout << endl;

			int number1;
			cout << "���� ����������� �����������: " << endl;
			cout << "1. �������� ������ ����" << endl;
			cout << "2. �������� ����� ���� � ������" << endl;
			cout << "3. ������� �� ������ �� ��������" << endl;
			cout << "4. ����� �� ��������" << endl;
			cout << "5. � �������� ����" << endl;
			cin >> number1;
			if (number1 == 1) printItemCar(cars, count_cars);
			else if (number1 == 2) addItemCar(cars, &count_cars);
			else if (number1 == 3) removeItemCar(cars, &count_cars);
			else if (number1 == 4) {
				cout << "������� �������� ���� ��� ������ �� ������: ";
				string nm;
				cin >> nm;
				searchItemCar(cars, count_cars, nm);
			}
			else if (number1 == 5) goto mainMenu;
			goto carMenu;
			break;
		case 2:
			system("cls");
		shipMenu:
			cout << endl;

			int number2;
			cout << "���� ����������� ��������: " << endl;
			cout << "1. �������� ������ ��������" << endl;
			cout << "2. �������� ����� ������� � ������" << endl;
			cout << "3. ������� �� ������ �� ��������" << endl;
			cout << "4. ����� �� ��������" << endl;
			cout << "5. � �������� ����" << endl;
			cin >> number2;
			if (number2 == 1) printItemShip(ships, count_ships);
			else if (number2 == 2) addItemShip(ships, &count_ships);
			else if (number2 == 3) removeItemShip(ships, &count_ships);
			else if (number2 == 4) {
				cout << "������� �������� ������� ��� ������ �� ������: ";
				string nm;
				cin >> nm;
				searchItemShip(ships, count_ships, nm);
			}
			else if (number2 == 5) goto mainMenu;
			goto shipMenu;
			break;
		case 3:
			system("cls");
		airMenu:
			cout << endl;
			int number3;
			cout << "���� ����������� ���������: " << endl;
			cout << "1. �������� ������ ���������" << endl;
			cout << "2. �������� ����� ������� � ������" << endl;
			cout << "3. ������� �� ������ �� ��������" << endl;
			cout << "4. ����� �� ��������" << endl;
			cout << "5. � �������� ����" << endl;
			cin >> number3;
			if (number3 == 1) printItemAir(airs, count_airs);
			else if (number3 == 2) addItemAir(airs, &count_airs);
			else if (number3 == 3) removeItemAir(airs, &count_airs);
			else if (number3 == 4) {
				cout << "������� �������� �������� ��� ������ �� ������: ";
				string nm;
				cin >> nm;
				searchItemAir(airs, count_airs, nm);
			}
			else if (number3 == 5) goto mainMenu;
			goto airMenu;
			break;
		case 4:
			return 0;
			break;
			default:
				cout << "������ �����, ���������";
				goto mainMenu;
			
		}

	


	return 0;
}