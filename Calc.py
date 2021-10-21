import time
import math
#Start
print ("\n" * 40)
def main():
        Check = True 
        while Check:
            #Load function for calculations
            def Calculate(num1, num2, oper):
                while True:
                    if oper == "+":
                        ans = num1 + num2
                        return ans
                    elif oper == "-":
                        ans = num1 - num2
                        return ans
                    elif oper == "*":
                        ans = num1 * num2
                        return ans
                    elif oper == "/":
                        try:
                            ans = num1 / num2
                            return ans
                        except:
                            print ("Null Division Error!!")
                            return math.e
                    else:
                        print ("Uncorrect type of operation! Try again:") #Type error
            print ("Calc_v0.1")   
            while True:
                try:
                    print ("Write first number: ") # Catch input
                    num1 = input("Enter: ")
                    print ("Write second number: ")
                    num2 = input("Enter: ") # Check numbers
                    num1 = float(num1)
                    num2 = float(num2)
                    break
                except:
                    print("Error, please try again!")
            print ("Please, White type of operation: \n + \n - \n * \n / \n")
            oper = input()
            answer = Calculate(num1, num2, str(oper))
            print (f"Answer: {answer}")
            print ("Wait, It will update in some time!")
            time.sleep(4) # Wait, Show answer
            print ("\n" * 40)
        # If we catch error, We begin function again( Nope )       
main() # Start function
print ("Program closed due to Error or something other... If you get that message rebort program.")


