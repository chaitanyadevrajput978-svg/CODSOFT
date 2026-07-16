#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TaskList {
private:
    vector<string> task;
    vector<bool> completed;

public:
    void addTask() {
        string newTask;
        cin.ignore();
        cout << "Enter task: ";
        getline(cin, newTask);
        task.push_back(newTask);
        completed.push_back(false);
        cout << "Task added successfully!\n";
    }

    void viewTask() {
        if (task.empty()) {
            cout << "\nNo tasks available.\n";
            return;
        }

        cout << "\n========== TASK LIST ==========\n";

        for (int i = 0; i < task.size(); i++) {
            cout << i + 1 << ". " << task[i] << " ";

            if (completed[i])
                cout << "[COMPLETED]";
            else
                cout << "[PENDING]";

            cout << endl;
        }
    }

    void markCompleted() {
        if (task.empty()) {
            cout << "\nNo tasks available.\n";
            return;
        }

        int num;

        viewTask();

        cout << "\nEnter task number to mark completed: ";
        cin >> num;

        if (num >= 1 && num <= task.size()) {
            completed[num - 1] = true;
            cout << "Task marked as completed.\n";
        } else {
            cout << "Invalid task number.\n";
        }
    }

    void deleteTask() {
        if (task.empty()) {
            cout << "\nNo tasks available.\n";
            return;
        }

        int num;

        viewTask();

        cout << "\nEnter task number to delete: ";
        cin >> num;

        if (num >= 1 && num <= task.size()) {
            task.erase(task.begin() + num - 1);
            completed.erase(completed.begin() + num - 1);

            cout << "Task deleted successfully.\n";
        } else {
            cout << "Invalid task number.\n";
        }
    }
};

int main() {
    TaskList t;

    int choice=0;

    while (choice!=5) {
        cout << "\n========== TO-DO LIST ==========\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            t.addTask();
            break;

        case 2:
            t.viewTask();
            break;

        case 3:
            t.markCompleted();
            break;

        case 4:
            t.deleteTask();
            break;

        case 5:
            cout << "\nThank you for using the To-Do List!\n";
            return 0;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}