#Start
Check = True 
while Check:
    #Load function for calculations
    def Calculate(num1, num2, oper):
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
                return 9999999999999999999999999999999999999999999999999999999999
        else:
            print (Error)
            return 0
    print ("Calc_v0.1")
    print ("Write first number: ")
    # Catch input
    num1 = input("Enter: ")
    print ("Write second number: ")
    num2 = input("Enter: ")
    # Check numbers
    try:
        num1 = int(num1)
        num2 = int(num2)
    except:
        print("Error, please try again!")
        break
    #Operation
    Checking = True # Wait right name of operations
    while Checking:
        print ("Write operation: + - * /")
        oper = input("Enter: ")
        if oper == "-" or oper == "+" or oper == "*" or oper == "/": #
            Checking = False         
        else:
            print ("Error, try again")      
    answer = Calculate(num1, num2, oper)
    print (f"Answer: {answer}")

print ("Program closed due to Error or something other...")