#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to represent a task

struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

// Function to add a task to the list

void AddTask(vector<Task>& tasks, const string& description) {
    Task newTask(description);
    tasks.push_back(newTask);
    cout << "Task added: " << description << endl;
}

// Function to mark a task as completed

void MarkTaskAsCompleted(vector<Task>& tasks, int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) {
        tasks[taskIndex - 1].completed = true;
        cout << "Task marked as completed: " << tasks[taskIndex - 1].description << endl;
    }
    else {
        cout << "Invalid task index!" << endl;
    }
}

// Function to view tasks

void ViewTasks(const vector<Task>& tasks) {
    cout << "Tasks:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        if (tasks[i].completed) {
            cout << "[Completed] ";
        }
        else {
            cout << "[Pending] ";
        }
        cout << tasks[i].description << endl;
    }
}




int main() {
    vector<Task> tasks;

    while (true) {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2.Mark Task as Completed" << endl;
        cout << "3. View Tasks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            cin.ignore();
            cout << "Enter task description: ";
            string description;
            getline(cin, description);
            AddTask(tasks, description);
        }
        else if (choice == 2) {
            cout << "Enter the task number to mark as completed: ";
            int taskIndex;
            cin >> taskIndex;
            MarkTaskAsCompleted(tasks, taskIndex);

        }
        else if (choice == 3) {
            ViewTasks(tasks);
        }
        else if (choice == 4) {
            cout << "Exiting the program." << endl;
            break;
        }
    }

    return 0;
}
