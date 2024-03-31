#include <iostream>
#include "List.h"
using namespace std;

template <typename T>
void show_list(list1_elem<T>* list)
{
	auto curr = list;
	while (curr)
	{
		cout << curr->data << " -> ";
		curr = curr->next;
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "");
	list1_elem<student>* students = nullptr;
	int n;
	cout << "¬ведите кол-во студентов" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		student man;
		cout << "¬ведите фамилию и номер группы студента" << endl;
		cin >> man.name;
		cin >> man.group;
		add(students, man);
	}
	int* k = new int[n];
	auto curr = students;
	for (int i = 0; i < n; i++)
	{
		k[i] = curr->data.group;
		curr = curr->next;
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		while (j < i && k[j] != k[i]) ++j;

		count += j == i;
	}
	cout << count;
	list1_elem<student>* mas_stud = new list1_elem<student>[count];
	for (int i = 0; i < count; i++)
	{

	}
}