#include <iostream>
using namespace std;


void catch_(double *nums);
void calculate(double *nums);

int main(){
	cout << "Loading..." << endl;
    cout << "Calc1 v0.2!" << endl;
    char d;
    do{
	    double *nums = new double[2];
	    catch_(nums);
	    calculate(nums);
	    cout << "Again? y/n" << endl;
	    cin >> d;
	}while(d != 'n');
    return 0;
}

void catch_(double* nums){
    bool succ;
    succ = false;
    cout << "Write first number: " << endl;
    do{ // First num
        cin >> nums[0];
	    if (cin.fail()){
	            cin.clear();
	            cin.ignore(32767, '\n');
	            cout << "ERROR, Wrong type!" << endl;
	        }
	    else{
	    	succ = true;
	    }

    } while(succ == false);
    succ = false; // Second num
    cout << "Write second number: " << endl;
	do{
        cin >> nums[1];
	    if (cin.fail()){
	            cin.clear();
	            cin.ignore(32767, '\n');
	            cout << "ERROR, Wrong type!" << endl;
	        }
	    else{
	    	succ = true;
	    }
    } while(succ == false);
}



void calculate(double *nums){
	bool succ;
	char op;
	double ans;
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
    if (op == '+'){ans = nums[0] + nums[1];}
    else if (op == '-'){ans = nums[0] - nums[1];}
    else if (op == '*'){ans = nums[0] * nums[1];}
    else if (op == '/' && nums[1] != 0){ans = nums[0] / nums[1];}
    else{ans = 0;}
    cout << ans << endl;
}

