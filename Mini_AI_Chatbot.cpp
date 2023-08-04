// By: Caesar R. Watts-Hall
// Date: August 04, 2023

#include <iostream>
#include <string>

using namespace std;

void advice() {
    cout << "You should try to get more sleep." << endl;
    cout << "You should drink more water." << endl;
    cout << "You should exercise more." << endl;
    while (true) {
        string choice;
        cout << "Enter 'yes' to continue or 'no' to exit: ";
        cin >> choice;
        if (choice == "no") {
            break;
        } else if (choice == "yes") {
            cout << "I'm here for you. What's on your mind?" << endl;
            string response;
            cin.ignore();
            getline(cin, response);
            cout << "I'm sorry to hear that. Would you like some advice or tips on how to feel better?" << endl;
            string choice2;
            getline(cin, choice2);
            if (choice2 == "yes") {
                cout << "Here are some things you can try:" << endl;
                cout << "- Take a walk outside" << endl;
                cout << "- Listen to some music" << endl;
                cout << "- Talk to a friend or family member" << endl;
            } else {
                cout << "That's okay. I'm here if you need me." << endl;
            }
        }
    }
}

void casual() {
    cout << "How's your day going?" << endl;
    cout << "What did you do today?" << endl;
    cout << "What are your plans for the weekend?" << endl;
    while (true) {
        string choice;
        cout << "Enter 'yes' to continue or 'no' to exit: ";
        cin >> choice;
        if (choice == "no") {
            break;
        } else if (choice == "yes") {
            cout << "I'm here for you. What's on your mind?" << endl;
            string response;
            cin.ignore();
            getline(cin, response);
            cout << "That sounds tough. Would you like some advice or tips on how to feel better?" << endl;
            string choice2;
            getline(cin, choice2);
            if (choice2 == "yes") {
                cout << "Here are some things you can try:" << endl;
                cout << "- Take a walk outside" << endl;
                cout << "- Listen to some music" << endl;
                cout << "- Talk to a friend or family member" << endl;
            } else {
                cout << "That's okay. I'm here if you need me." << endl;
            }
        }
    }
}

void informative() {
    cout << "Did you know that the Great Wall of China is the longest wall in the world?" << endl;
    cout << "Did you know that the Earth is not a perfect sphere?" << endl;
    cout << "Did you know that the human nose can detect over 1 trillion different scents?" << endl;
}

void creative() {
    cout << "Roses are red, violets are blue, sugar is sweet, and so are you." << endl;
    cout << "The sky is blue, the grass is green, and life is beautiful." << endl;
    cout << "The sun sets in the west, and rises in the east. What a beautiful world we live in." << endl;
}

int main() {
    int option;
    while (true) {
        cout << "Enter 1 for advice, 2 for casual conversation, 3 for informative topics, or 4 for creative content. Enter 5 to exit." << endl;
        cin >> option;
        if (option == 1) {
            advice();
        } else if (option == 2) {
            casual();
        } else if (option == 3) {
            informative();
        } else if (option == 4) {
            creative();
        } else if (option == 5) {
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }
    return 0;
}
