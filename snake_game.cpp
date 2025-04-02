#include <iostream>
#include <string>

using namespace std;

void displayMenu() {
    cout << "====================================" << endl;
    cout << "          SNAKE GAME               " << endl;
    cout << "====================================" << endl;
    cout << "- Use W, A, S, D keys to move the snake" << endl;
    cout << "  W: Up" << endl;
    cout << "  A: Left" << endl;
    cout << "  S: Down" << endl;
    cout << "  D: Right" << endl;
    cout << "- Press Q for quit the game" << endl;
    cout << "====================================" << endl;
}

int main() {
    char userChoice;
    bool validChoice = false;
    
    cout << " SSSSSnake! " << endl;
    displayMenu();
    
    // game loop
    while (!validChoice) {
        cout << "\nPress S to start or Q to quit: ";
        cin >> userChoice;
        
        // always to uppercase
        userChoice = toupper(userChoice);
        
        switch (userChoice) {
            case 'S':
                cout << " ++++ game in progress +++" << endl;
                validChoice = true;
                break;
                
            case 'Q':
                cout << " Bye!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
        
    return 0;
}