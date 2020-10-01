fact=1

x=int(input("enter a no.:"))
def fact(x):
        for i in range(1,x):        
              if x==0:
                  return 1
              return(x*fact(x-1))  
print("factorial is:",fact(x))                
