# Well...

def Calcs():
    nums = []
    print ("# Calc 0.1 python.")
    while True:
        ans = 0
        text = ""
        print ("# Write an expression: ")
        text = str(input()) # taking this shit
        try:
            ans = eval(text)
        except:
            print ("# You write something wrong.") # If we get error
            return
        print ("ANSWER: ", ans)
        print ("# Write 'ex' to exit or something else to miss:")
        text = str(input())
        if text == "ex":
                return
                
        
        
        
      

