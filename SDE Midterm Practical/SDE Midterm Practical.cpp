
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    cout << " This is a multiple choice test\n";
    cout << " \nInput your answer and hope for the best!\n";
    cout << " \nPress Enter to continue... \n";

    cin.get();
    system("cls");

    string
        q1 = "\n What gets wet while drying?\n\n"
        " a) A Dog\n"
        " b) A Car\n"
        " c) A Towel\n"
        " d) Sonic The Hedgehog\n"
        " \n Input your choice: ",
        q2 = "\n What kind of band doesn't play music?\n\n"
        " a) A Jazz Band\n"
        " b) A Metal Band\n"
        " c) A Pop Band\n"
        " d) A Rubber Band\n"
        " \n Input your choice: ",
        q3 = " \n What has four wheels and flies?\n\n"
        " a) Mosquitos\n"
        " b) Tesla Model S\n"
        " c) A Garbage Truck\n"
        " d) Hot Wheels\n"
        " \n Input your choice: ",
        q4 = "\n What five letter word becomes shorter when you add two letters to it?\n\n"
        " a) NASA\n"
        " b) Short\n"
        " c) Long\n"
        " d) Steve\n"
        " \n Input your choice: ";

    vector <string> testQuestions;
    testQuestions.push_back(q1);
    testQuestions.push_back(q2);
    testQuestions.push_back(q3);
    testQuestions.push_back(q4);

    string tQuestion = "";
    string choice = "";
    bool loop = true;

    while (loop)
    {

        srand(static_cast<unsigned  int>(time(0)));
        std::random_shuffle(testQuestions.begin(), testQuestions.end());

        for (int i = 0; i <= 1; i++)
        {
            tQuestion = testQuestions[i];
            cout << testQuestions[i];
            i++;
        }

        cin >> choice;

        if (tQuestion == q1)
        {
            if (choice == "c")
            {
                cout << "\nCORRECT! YOU WIN!\n";
            }
            else if (choice != "c")
            {
                cout << "\nWRONG ANSWER! TRY AGAIN!\n";
                cin.get();
                loop = false;
            }
            cin.get();
        }
        else if (tQuestion == q2)
        {
            if (choice == "d")
            {
                cout << "\nCORRECT! YOU WIN!\n";
            }
            else if (choice != "d")
            {
                cout << "\nWRONG ANSWER! TRY AGAIN!\n";
                cin.get();
                loop = false;
            }
            cin.get();
        }
        else if (tQuestion == q3)
        {
            if (choice == "c")
            {
                cout << "\nCORRECT! YOU WIN!\n";
            }
            else if (choice != "c")
            {
                cout << "\nWRONG ANSWER! TRY AGAIN!\n";
                cin.get();
                loop = false;
            }
            cin.get();
        }
        else if (tQuestion == q4)
        {
            if (choice == "b")
            {
                cout << "\nCORRECT! YOU WIN!\n";
            }
            else if (choice != "b")
            {
                cout << "\nWRONG ANSWER! TRY AGAIN!\n";
                cin.get();
                loop = false;
            }
            cin.get();
        }
        system("cls");
    }   

}
