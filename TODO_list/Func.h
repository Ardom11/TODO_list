#ifndef FUNC_H
#define FUNC_H

#include "Task.h"
#include <vector>

using namespace std;

int file_open(vector<Task>& Tasks);

void file_close(vector<Task>& Tasks);

void add_task(vector<Task>& Tasks);

void delete_task(vector<Task>& Tasks);

void show_tasks(vector<Task>& Tasks);

void file_opening_choice_menu(vector<Task> &Tasks);

void main_menu(vector<Task>& Tasks);

#endif