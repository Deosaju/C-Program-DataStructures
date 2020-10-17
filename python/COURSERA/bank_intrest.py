principal = eval(input("enter the principal amount : "))
rate = eval(input("enter the intrest rate :"))
for i in range(10):
    principal= principal(1+rate)
print("value after 10 years : ",principal)


