#include <iostream>
#include <string>

using namespace std;

bool isValidTag(string tag) {
    int sum = 0;
    for (int i = 0; i < tag.size(); i++) {
        if (isdigit(tag[i])) {
            if (i < tag.size() - 1 && isdigit(tag[i+1])) {
                sum += (tag[i] - '0') + (tag[i+1] - '0');
                i++;
            } else {
                return false;
            }
        } else if (tag[i] == 'A' || tag[i] == 'E' || tag[i] == 'I' || tag[i] == 'O' || tag[i] == 'U' || tag[i] == 'Y') {
            return false;
        }
    }
    return sum % 2 == 0;
}

int main() {
    string tag;
    cin >> tag;
    if (isValidTag(tag)) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }
    return 0;
}
