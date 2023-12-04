def Fibonacci_sum(n):
    if n==0:
        return 0
    elif n==1 or n==2:
        return 1
    else:
        return (Fibonacci_sum(n-1)+Fibonacci_sum(n-2))
n=int(input("Enter limit:"))
print("Fibonacci Sum:",Fibonacci_sum(n))
    
