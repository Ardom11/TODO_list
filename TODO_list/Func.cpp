#include "Task.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string filename;

void file_open(vector<Task>& Tasks, string filename) {

}

void file_close(vector<Task>& Tasks) {

}

void add_task(vector<Task>& Tasks) {
	system("cls");
	cout << "Enter task: ";
	Task t;
	cin >> t.title;
	Tasks.push_back(t);
}

void show_tasks(vector<Task>& Tasks) {
	system("cls");

	if (Tasks.empty()) {
		cout << "No tasks";
		return;
	}

	for (auto& task : Tasks) {
		cout << "* " << task.title << endl;
	}
}

void delete_task(vector<Task>& Tasks) {
	system("cls");

	if (Tasks.empty()) {
		cout << "No tasks to delete";
		getchar();
		getchar();
		return;
	}

	show_tasks(Tasks);

	unsigned int pos;
	unsigned int iStatus = 1;
	while(iStatus)
	{
		cout << "Enter task position you want to delete(0 to exit): ";
		cin >> pos;

		if (pos == 0) {
			return;
		}

		if (pos < 0 || pos > Tasks.size()) {
			cout << "Wrong position" << endl;
			continue;
		}

		iStatus = 0;
	}

	Tasks.erase(Tasks.begin() + pos - 1);

	system("cls");
	show_tasks(Tasks);
	getchar();
	getchar();
}

void file_opening_choice_menu(vector<Task> &Tasks) {
	int iUserChoice, iStatus = 1;
	while (iStatus) {
		system("cls");
		cout << "Task manager" << endl << "1 Open new file" << endl << "2 Open existing file" << endl;
		cin >> iUserChoice;

		switch (iUserChoice) {
		case 1:
			system("cls");
			cout << "Enter file name: " << endl;
			cin >> filename;
			file_open(Tasks, filename);
			iStatus = 0;
			break;
		case 2:
			system("cls");
			cout << "Enter file name: " << endl;
			cin >> filename;
			file_open(Tasks, filename);
			iStatus = 0;
			break;
		default:
			cout << "Wrong choice" << endl;
		}
	}
}

void main_menu(vector<Task>& Tasks) {
	int iChoice = 0, iStatus = 1;

	while (iStatus) {
		system("cls");
		cout << "1 Show tasks" << endl << "2 Add task" << endl << "3 Delete task" << endl << "4 Exit" << endl;
		cin >> iChoice;
		switch (iChoice) {
		case 1:
			show_tasks(Tasks);
			getchar();
			getchar();
			break;
		case 2:
			add_task(Tasks);
			break;
		case 3:
			delete_task(Tasks);
			break;
		case 4:
			file_close(Tasks);
			iStatus = 0;
			break;
		}
	}
}