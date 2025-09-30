// avtars singh
// 24070123027

#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Avtar");
    u.show("Avtar", 19);
    u.show("Avtar", "Pune");
    u.show("Avtar", 19, "Pune");

    return 0;
}

// OUTPUT
// Name: Avtar
// Name: Avtar, Age: 19
// Name: Aditya, City: Pune
// Name: Aditya, Age: 19, City: Pune
