#include <iostream>
using namespace std;

// int calculate(a, b, op);
int catch_(int a, int b);


int main(){
	cout << "Loading..." << endl;
	int num1(0);
	int num2(0);
	int answer;
    cout << "Calc1 v0.1!" << endl;
    num2, num1 = catch_(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}

int catch_(int a, int b){
    bool succ;
    cout << "Debag! \n";
    succ = false;
    cout << "Write first number: " << endl;
    do{ // First num
        cin >> a;
	    if (cin.fail()){
	            cin.clear();
	            cin.ignore(32767, '\n');
	            cout << "ERROR, Wrong type!" << endl;
	        }
	    else{
	    	succ = true;
	    }

    } while(succ == false);
    cout << "A:" << endl;
    cout << a << endl;
    succ = false; // Second num
    cout << "Write second number: " << endl;
	do{
        cin >> b;
	    if (cin.fail()){
	            cin.clear();
	            cin.ignore(32767, '\n');
	            cout << "ERROR, Wrong type!" << endl;
	        }
	    else{
	    	succ = true;
	    }
    } while(succ == false);
    
	return a, b;
}


/*
int calculate(int a, int b, char op){
	int ans;
    if (op == '+'){
    	ans = a + b;
    }
    // else if
	return ans;
}
succ = false;
    cout << "Write operation: " << endl; 
    do{
        cin >> op;
	    if (cin.fail()){
	            cin.clear();
	            cin.ignore(32767, '\n');
	            cout << "ERROR!" << endl;
	        }
	    else if(op == '+' || op == '-' || op == '*' || op == '/'){
	    	succ = true;
	    }
	    else{
	    	cout << "Chouse + - / *:" << endl;
	    }
    } while(succ == false);
*/