# include  <iostream>
# include <cstdlib>
using namespace std;

// FUnction prototypes
void add(float x, float y);
void subtract(float x, float y);
void divide(float x, float y);
void multiply(float x, float y);

// Homepage
void homepage(){
    char userInput;
    float a, b;

    cout<<endl;
    cout<<"1. Enter '+' for addition"<<endl;
    cout<<"2. Enter '-' for subtraction"<<endl;
    cout<<"3. Enter '*' for multiplication"<<endl;
    cout<<"4. Enter '/' for division"<<endl;
    cout<<"5. Enter 1 to exit the calculator"<<endl;

    cout<<endl;
    cout<<"Choose your option: ";
    cin>>userInput;

    switch(userInput){
        case '+':
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
        add(a, b);
        homepage();

        case '-':
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
        subtract(a, b);
        homepage();

        case '*':
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
        multiply(a, b);
        homepage();

        case '/':
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
        divide(a, b);
        homepage();

        case '1':
        cout<<"Thanks for using our calculator!!";
        exit(0);

        default:
        cout<<"Invalid input!!!";
        homepage();

    }

}

int main(){

    homepage();

    return 0;
}

// Function definition
void add(float x, float y){
    cout<<"Sum: "<<x+y;
    cout<<endl;
}
void subtract(float x, float y){
    cout<<"Difference: "<<x-y;
    cout<<endl;
}
void divide(float x, float y){
    cout<<"Quotient: "<<x/y;
    cout<<endl;
}
void multiply(float x, float y){
    cout<<"Product: "<<x*y;
    cout<<endl;
}
