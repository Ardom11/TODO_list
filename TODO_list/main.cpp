#include "Func.h"
#include <iostream>
#include <utility>

using namespace std;

int main() {
	vector<Task> Tasks;

	file_opening_choice_menu(Tasks);

	main_menu(Tasks);


	return 0;
}