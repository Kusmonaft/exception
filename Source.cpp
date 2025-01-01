#include"List.h"

int main() {
    List list;
    try {
        list.remove(); // Try to remove from empty list
    }
    catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << '\n';
    }

    try {
        for (int i = 0; i < 10; i++) {
            list.insert(i);
        }
    }
    catch (const runtime_error& e) {
        cerr << "Exception: " << e.what() << '\n';
    }

    return 0;
}