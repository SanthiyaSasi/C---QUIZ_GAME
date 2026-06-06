#include <iostream>
using namespace std;

int main()
{
    string questions[51];
    string option_A[51];
    string option_B[51];
    string option_C[51];
    string option_D[51]; 
    char Correct_answers[51];

questions[1] = "Which header file is used for input/output in C++?";
option_A[1] = "A) <stdio.h>";
option_B[1] = "B) <iostream>";
option_C[1] = "C) <inputoutput>";
option_D[1] = "D) <stream>";
Correct_answers[1] = 'B';

questions[2] = "What is the size of a char in C++?";
option_A[2] = "A) 2 bytes";
option_B[2] = "B) 4 bytes";
option_C[2] = "C) 1 byte";
option_D[2] = "D) Depends on compiler";
Correct_answers[2] = 'C';

questions[3] = "Which keyword is used to define a class in C++?";
option_A[3] = "A) struct";
option_B[3] = "B) class";
option_C[3] = "C) object";
option_D[3] = "D) define";
Correct_answers[3] = 'B';

questions[4] = "Which operator is used to allocate memory dynamically in C++?";
option_A[4] = "A) malloc";
option_B[4] = "B) new";
option_C[4] = "C) alloc";
option_D[4] = "D) create";
Correct_answers[4] = 'B';

questions[5] = "Which of the following is not a valid C++ data type?";
option_A[5] = "A) int";
option_B[5] = "B) float";
option_C[5] = "C) real";
option_D[5] = "D) char";
Correct_answers[5] = 'C';

questions[6] = "Which concept allows function overloading in C++?";
option_A[6] = "A) Polymorphism";
option_B[6] = "B) Encapsulation";
option_C[6] = "C) Abstraction";
option_D[6] = "D) Inheritance";
Correct_answers[6] = 'A';

questions[7] = "Which keyword is used to inherit a class in C++?";
option_A[7] = "A) extends";
option_B[7] = "B) inherits";
option_C[7] = "C) base";
option_D[7] = "D) : (colon)";
Correct_answers[7] = 'D';

questions[8] = "Which function is called automatically when an object is created?";
option_A[8] = "A) Destructor";
option_B[8] = "B) Constructor";
option_C[8] = "C) Init()";
option_D[8] = "D) Start()";
Correct_answers[8] = 'B';

questions[9] = "Which symbol is used for single-line comments in C++?";
option_A[9] = "A) //";
option_B[9] = "B) /*";
option_C[9] = "C) #";
option_D[9] = "D) --";
Correct_answers[9] = 'A';

questions[10] = "Which header file is required for string functions in C++?";
option_A[10] = "A) <string>";
option_B[10] = "B) <cstring>";
option_C[10] = "C) <strings>";
option_D[10] = "D) <str>";
Correct_answers[10] = 'B';

questions[11] = "Which operator is used to access members of a class using a pointer?";
option_A[11] = "A) . (dot)";
option_B[11] = "B) -> (arrow)";
option_C[11] = "C) :: (scope)";
option_D[11] = "D) [] (index)";
Correct_answers[11] = 'B';

questions[12] = "Which loop is guaranteed to execute at least once?";
option_A[12] = "A) for";
option_B[12] = "B) while";
option_C[12] = "C) do-while";
option_D[12] = "D) foreach";
Correct_answers[12] = 'C';

questions[13] = "Which keyword is used to prevent a class from being inherited?";
option_A[13] = "A) final";
option_B[13] = "B) sealed";
option_C[13] = "C) private";
option_D[13] = "D) static";
Correct_answers[13] = 'A';

questions[14] = "Which operator is overloaded for output in C++?";
option_A[14] = "A) <<";
option_B[14] = "B) >>";
option_C[14] = "C) ::";
option_D[14] = "D) &&";
Correct_answers[14] = 'A';

questions[15] = "Which of the following is used to define inline functions?";
option_A[15] = "A) inline";
option_B[15] = "B) define";
option_C[15] = "C) macro";
option_D[15] = "D) static";
Correct_answers[15] = 'A';

questions[16] = "Which keyword is used to handle exceptions in C++?";
option_A[16] = "A) try";
option_B[16] = "B) catch";
option_C[16] = "C) throw";
option_D[16] = "D) All of the above";
Correct_answers[16] = 'D';

questions[17] = "Which of the following is not an access specifier in C++?";
option_A[17] = "A) public";
option_B[17] = "B) private";
option_C[17] = "C) protected";
option_D[17] = "D) internal";
Correct_answers[17] = 'D';

questions[18] = "Which operator is used to compare two values in C++?";
option_A[18] = "A) =";
option_B[18] = "B) ==";
option_C[18] = "C) !=";
option_D[18] = "D) >=";
Correct_answers[18] = 'B';

questions[19] = "Which function is called when an object is destroyed?";
option_A[19] = "A) Destructor";
option_B[19] = "B) Constructor";
option_C[19] = "C) delete()";
option_D[19] = "D) free()";
Correct_answers[19] = 'A';

questions[20] = "Which keyword is used to define a namespace in C++?";
option_A[20] = "A) package";
option_B[20] = "B) namespace";
option_C[20] = "C) module";
option_D[20] = "D) space";
Correct_answers[20] = 'B';

questions[21] = "Which of the following is used to terminate a loop in C++?";
option_A[21] = "A) stop";
option_B[21] = "B) break";
option_C[21] = "C) exit";
option_D[21] = "D) return";
Correct_answers[21] = 'B';

questions[22] = "Which of the following is not a loop in C++?";
option_A[22] = "A) for";
option_B[22] = "B) while";
option_C[22] = "C) repeat-until";
option_D[22] = "D) do-while";
Correct_answers[22] = 'C';

questions[23] = "Which of the following is used to define a macro in C++?";
option_A[23] = "A) #macro";
option_B[23] = "B) #define";
option_C[23] = "C) macro()";
option_D[23] = "D) const";
Correct_answers[23] = 'B';

questions[24] = "Which keyword is used to return control to the calling function?";
option_A[24] = "A) break";
option_B[24] = "B) return";
option_C[24] = "C) exit";
option_D[24] = "D) continue";
Correct_answers[24] = 'B';

questions[25] = "Which of the following is not a storage class in C++?";
option_A[25] = "A) auto";
option_B[25] = "B) register";
option_C[25] = "C) static";
option_D[25] = "D) volatile";
Correct_answers[25] = 'D';

questions[26] = "Which operator is used to allocate memory for arrays in C++?";
option_A[26] = "A) malloc";
option_B[26] = "B) calloc";
option_C[26] = "C) new[]";
option_D[26] = "D) alloc";
Correct_answers[26] = 'C';

questions[27] = "Which of the following is used to release dynamically allocated memory in C++?";
option_A[27] = "A) free";
option_B[27] = "B) delete";
option_C[27] = "C) remove";
option_D[27] = "D) release";
Correct_answers[27] = 'B';

questions[28] = "Which keyword is used to declare an abstract class in C++?";
option_A[28] = "A) abstract";
option_B[28] = "B) virtual";
option_C[28] = "C) pure";
option_D[28] = "D) base";
Correct_answers[28] = 'B';

questions[29] = "Which of the following is used to overload operators in C++?";
option_A[29] = "A) operator";
option_B[29] = "B) overload";
option_C[29] = "C) function";
option_D[29] = "D) define";
Correct_answers[29] = 'A';

questions[30] = "Which of the following is not a valid C++ loop control statement?";
option_A[30] = "A) break";
option_B[30] = "B) continue";
option_C[30] = "C) goto";
option_D[30] = "D) stop";
Correct_answers[30] = 'D';

questions[31] = "Which keyword is used to define a template in C++?";
option_A[31] = "A) template";
option_B[31] = "B) generic";
option_C[31] = "C) define";
option_D[31] = "D) class";
Correct_answers[31] = 'A';

questions[32] = "Which of the following is used to access a global variable when a local variable has the same name?";
option_A[32] = "A) this";
option_B[32] = "B) :: (scope resolution)";
option_C[32] = "C) global";
option_D[32] = "D) extern";
Correct_answers[32] = 'B';

questions[33] = "Which of the following is used to declare a pointer in C++?";
option_A[33] = "A) *";
option_B[33] = "B) &";
option_C[33] = "C) ->";
option_D[33] = "D) %";
Correct_answers[33] = 'A';

questions[34] = "Which keyword is used to make a function pure virtual in C++?";
option_A[34] = "A) virtual = 0";
option_B[34] = "B) abstract";
option_C[34] = "C) pure";
option_D[34] = "D) base";
Correct_answers[34] = 'A';

questions[35] = "Which of the following is used to define multiple constructors in a class?";
option_A[35] = "A) Constructor overloading";
option_B[35] = "B) Function overriding";
option_C[35] = "C) Operator overloading";
option_D[35] = "D) Encapsulation";
Correct_answers[35] = 'A';

questions[36] = "Which operator is used to access members of a structure in C++?";
option_A[36] = "A) . (dot)";
option_B[36] = "B) -> (arrow)";
option_C[36] = "C) :: (scope)";
option_D[36] = "D) [] (index)";
Correct_answers[36] = 'A';

questions[37] = "Which of the following is used to define a constant pointer in C++?";
option_A[37] = "A) const *ptr";
option_B[37] = "B) *const ptr";
option_C[37] = "C) const ptr";
option_D[37] = "D) static ptr";
Correct_answers[37] = 'B';

questions[38] = "Which keyword is used to declare a friend function in C++?";
option_A[38] = "A) friend";
option_B[38] = "B) buddy";
option_C[38] = "C) companion";
option_D[38] = "D) helper";
Correct_answers[38] = 'A';

questions[39] = "Which of the following is used to define a destructor in C++?";
option_A[39] = "A) ~ClassName()";
option_B[39] = "B) ClassName()";
option_C[39] = "C) delete()";
option_D[39] = "D) destroy()";
Correct_answers[39] = 'A';

questions[40] = "Which of the following is used to overload the assignment operator in C++?";
option_A[40] = "A) operator=";
option_B[40] = "B) operator==";
option_C[40] = "C) operator->";
option_D[40] = "D) operator[]";
Correct_answers[40] = 'A';

questions[41] = "Which of the following is used to define a copy constructor in C++?";
option_A[41] = "A) ClassName(const ClassName &obj)";
option_B[41] = "B) ClassName(ClassName obj)";
option_C[41] = "C) ClassName()";
option_D[41] = "D) ClassName(int x)";
Correct_answers[41] = 'A';

questions[42] = "Which of the following is used to terminate a program in C++?";
option_A[42] = "A) break";
option_B[42] = "B) exit()";
option_C[42] = "C) stop()";
option_D[42] = "D) end()";
Correct_answers[42] = 'B';

questions[43] = "Which of the following is used to declare a reference variable in C++?";
option_A[43] = "A) &";
option_B[43] = "B) *";
option_C[43] = "C) ->";
option_D[43] = "D) %";
Correct_answers[43] = 'A';

questions[44] = "Which of the following is used to overload the increment operator in C++?";
option_A[44] = "A) operator++";
option_B[44] = "B) operator+";
option_C[44] = "C) operator--";
option_D[44] = "D) operator+=";
Correct_answers[44] = 'A';

questions[45] = "Which of the following is used to define multiple functions with the same name but different parameters?";
option_A[45] = "A) Function overloading";
option_B[45] = "B) Function overriding";
option_C[45] = "C) Operator overloading";
option_D[45] = "D) Encapsulation";
Correct_answers[45] = 'A';

questions[46] = "Which keyword is used to declare a constant member function in C++?";
option_A[46] = "A) const";
option_B[46] = "B) static";
option_C[46] = "C) final";
option_D[46] = "D) immutable";
Correct_answers[46] = 'A';

questions[47] = "Which of the following is used to define runtime polymorphism in C++?";
option_A[47] = "A) Virtual functions";
option_B[47] = "B) Inline functions";
option_C[47] = "C) Friend functions";
option_D[47] = "D) Static functions";
Correct_answers[47] = 'A';

questions[48] = "Which of the following is used to declare a static data member in C++?";
option_A[48] = "A) static";
option_B[48] = "B) const";
option_C[48] = "C) final";
option_D[48] = "D) global";
Correct_answers[48] = 'A';

questions[49] = "Which of the following is used to define multiple inheritance in C++?";
option_A[49] = "A) class A : public B, public C";
option_B[49] = "B) class A extends B, C";
option_C[49] = "C) class A inherits B, C";
option_D[49] = "D) class A base B, C";
Correct_answers[49] = 'A';

questions[50] = "Which of the following is used to declare a virtual destructor in C++?";
option_A[50] = "A) virtual ~ClassName()";
option_B[50] = "B) ClassName()";
option_C[50] = "C) delete()";
option_D[50] = "D) destroy()";
Correct_answers[50] = 'A';

char play_again='Y';
while(play_again=='Y' || play_again=='y')
{
int total_questions;
    cout<<"How many questions would you like to answer (1-50)?: ";
    cin>>total_questions;

    int score=0;
    char answer;
    int i=1;

    while(i<=total_questions) 
    {
        cout<<"\nQ"<<i<<": "<<questions[i]<<endl;
        cout<<option_A[i]<<endl;
        cout<<option_B[i]<<endl;
        cout<<option_C[i]<<endl;
        cout<<option_D[i]<<endl;

        cout<<"Enter your answer (A/B/C/D): ";
        cin>>answer;
        answer=toupper(answer);

        if(answer == Correct_answers[i])
        {
            cout << "Correct!\n";
            score++;
        } 
        else 
        {
            cout << "Wrong! Correct answer is " << Correct_answers[i] << "\n";
        }

        i++;
    }

    cout << "\nYou attempted " << (i-1) << " questions." << endl;
    cout << "Your score: " << score << "/" << (i-1) << endl;
    cout << "Do you want to play again? (Y/N): ";
    cin >> play_again;
}
     cout<<"Thanks for Playing"<<endl;
    return 0;

}
