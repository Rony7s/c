//Rony Ahmmed EdTech-BDU
//Smart Quiz by c++
#include <iostream>
#include <string>

using namespace std;

// Function to display the question and options
void displayQuestion(int i, string question, string option1, string option2, string option3, string option4) {
    cout << i+1 <<" "<<question << endl;
    cout << "a) " << option1 << endl;
    cout << "b) " << option2 << endl;
    cout << "c) " << option3 << endl;
    cout << "d) " << option4 << endl;
}

// Function to get user's answer and check if it's correct
bool isAnswerCorrect(string userAnswer, string correctAnswer) {
    return userAnswer == correctAnswer;
}

// Function to conduct the quiz
void conductQuiz() {
    string questionBank[10][6] = {
        {"What is the capital of Bangladesh?", "Dhaka", "Chittagong", "Rajshahi", "Khulna", "a"},
        {"Which river is the longest in Bangladesh?", "Padma", "Meghna", "Jamuna", "Rupsha", "c"},
        {"In which year did Bangladesh gain independence?", "1971", "1965", "1980", "1990", "a"},
        {"Which is the largest city in Bangladesh?", "Dhaka", "Chittagong", "Rajshahi", "Khulna", "a"},
        {"What is the official language of Bangladesh?", "Bengali", "English", "Hindi", "Urdu", "a"},
        {"Which famous mangrove forest is located in Bangladesh?", "Sundarbans", "Amazon Rainforest", "Borneo Rainforest", "Congo Rainforest", "a"},
        {"What is the currency of Bangladesh?", "Taka", "Rupee", "Dollar", "Yen", "a"},
        {"Who is the national poet of Bangladesh?", "Kazi Nazrul Islam", "Rabindranath Tagore", "Jibanananda Das", "Shamsur Rahman", "b"},
        {"Which traditional boat is often associated with Bangladesh?", "Rickshaw", "Sailboat", "Sampan", "Coracle", "c"},
        {"Which festival is celebrated widely in Bangladesh to mark the end of Ramadan?", "Eid-ul-Fitr", "Durga Puja", "Diwali", "Christmas", "a"}
    };

    int score = 0;

    for (int i = 0; i < 10; ++i) {
        displayQuestion(i, questionBank[i][0], questionBank[i][1], questionBank[i][2], questionBank[i][3], questionBank[i][4]);

        cout << "Your answer: ";
        string userAnswer;
        cin >> userAnswer;

        if (isAnswerCorrect(userAnswer, questionBank[i][5])) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect. The correct answer is: " << questionBank[i][5] << endl;
        }

        cout << endl;
    }

    cout << "Your final score is: " << score << " out of 10." << endl;
}


int main() {
    do{
        cout << "Welcome to the C++ Quiz App!" << endl;
        cout << "Test your knowledge about Bangladesh." << endl;
        cout << "-------------------------------" << endl;

        conductQuiz();

        cout << "Do Again press 1\n" <<"Do exit press 0" <<endl;
        int startNow;
        cin >>startNow;
        if(startNow==0){
            break;
        }
    }while(1);


    return 0;
}
