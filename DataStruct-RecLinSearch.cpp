#include "Search.h"

int main()
{
    vector<int> items = { 1, 2, 3, 5, 4, 5, 4, 3, 2, 1 };
    cout << "The data vector: " << endl;
    for (int i = 0; i < items.size(); ++i) {
        cout << "Index " << i << ": " << items.at(i) << endl;
    }
    cout << "\nSearching for 3:" << endl;
    int loc = linear_search(items, 3, items.size() -1);
    cout << "Result: " << loc << endl;
    cout << "Searching for 5:" << endl;
    loc = linear_search(items, 5, items.size() - 1);
    cout << "Result: " << loc << endl;
    cout << "Searching for 7:" << endl;
    loc = linear_search(items, 7, items.size() - 1);
    cout << "Result: " << loc << endl;
}


