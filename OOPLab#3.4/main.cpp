#include "Factory.h"
#include "T2.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void showMenu() {
    cout << "Menu:\n"
        << "1. Create object\n"
        << "2. Delete object\n"
        << "3. Show objects\n"
        << "4. Move object\n"
        << "5. Compare objects\n"
        << "6. Is intersect\n"
        << "7. Is include\n"
        << "8. Exit\n"
        << "Enter your choice: ";
}

int main() {
    vector<T1*> objects;
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            string type;
            cout << "Enter object type (Triangle or Rectangle): ";
            cin >> type;
            if (type == "Triangle" || type == "Rectangle") {
                string id = to_string(objects.size() + 1);
                T1* newObj = Factory::createObject(id, type);
                objects.push_back(newObj);
                cout << "Object created successfully." << endl;
            }
            else {
                cout << "Invalid object type. Please enter either 'Triangle' or 'Rectangle'." << endl;
            }
            break;
        }
        case 2: {
            if (!objects.empty()) {
                cout << "Enter index of the object to delete: ";
                int index;
                cin >> index;
                if (index >= 1 && index <= objects.size()) {
                    Factory::deleteObject(objects[index - 1]); 
                    objects.erase(objects.begin() + index - 1);
                    cout << "Object deleted successfully." << endl;
                }
                else {
                    cout << "Invalid index." << endl;
                }
            }
            else {
                cout << "No objects to delete." << endl;
            }
            break;
        }
        case 3: {
            if (!objects.empty()) {
                for (T1* obj : objects) {
                    obj->show(); 
                }
            }
            else {
                cout << "No objects to show." << endl;
            }
            break;
        }
        case 4: {
            if (!objects.empty()) {
                cout << "Enter index of the object to move: ";
                int index;
                cin >> index;
                if (index >= 1 && index <= objects.size()) {
                    objects[index - 1]->Move();
                }
                else {
                    cout << "Invalid index." << endl;
                }
            }
            else {
                cout << "No objects to move." << endl;
            }
            break;
        }
        case 5: {
            if (objects.size() >= 2) {
                int index1, index2;
                cout << "Enter indices of the two objects to compare: ";
                cin >> index1 >> index2;
                if (index1 >= 1 && index1 <= objects.size() && index2 >= 1 && index2 <= objects.size()) {
                    if (objects[index1 - 1]->Compare(*objects[index2 - 1])) { 
                        cout << "Objects are equal." << endl;
                    }
                    else {
                        cout << "Objects are not equal." << endl;
                    }
                }
                else {
                    cout << "Invalid indices." << endl;
                }
            }
            else {
                cout << "At least two objects are required for comparison." << endl;
            }
            break;
        }
        case 6: {
            if (objects.size() >= 2) {
                int index1, index2;
                cout << "Enter indices of the two objects: ";
                cin >> index1 >> index2;
                if (index1 >= 1 && index1 <= objects.size() && index2 >= 1 && index2 <= objects.size()) {
                    if (objects[index1 - 1]->IsIntersect(*objects[index2 - 1])) { 
                        cout << "Objects intersect." << endl;
                    }
                    else {
                        cout << "Objects do not intersect." << endl;
                    }
                }
                else {
                    cout << "Invalid indices." << endl;
                }
            }
            else {
                cout << "At least two objects are required for intersection check." << endl;
            }
            break;
        }
        case 7: {
            if (objects.size() >= 2) {
                int index1, index2;
                cout << "Enter indices of the two objects: ";
                cin >> index1 >> index2;
                if (index1 >= 1 && index1 <= objects.size() && index2 >= 1 && index2 <= objects.size()) {
                    if (objects[index1 - 1]->IsInclude(*objects[index2 - 1])) {
                        cout << "Object 2 is included in object 1." << endl;
                    }
                    else {
                        cout << "Object 2 is not included in object 1." << endl;
                    }
                }
                else {
                    cout << "Invalid indices." << endl;
                }
            }
            else {
                cout << "At least two objects are required for inclusion check." << endl;
            }
            break;
        }
        case 8: {
            cout << "Exiting program." << endl;
            break;
        }
        default: {
            cout << "Invalid choice. Please try again." << endl;
        }
        }
    } while (choice != 8);

    for (T1* obj : objects) {
        Factory::deleteObject(obj);
    }

    return 0;
}
