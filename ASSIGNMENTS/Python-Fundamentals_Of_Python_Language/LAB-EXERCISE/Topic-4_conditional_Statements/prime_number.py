n=int(input("enter number : "))

if n%2!=0:
    for i in range(3,int(n/2)+1,2):
        if n%i==0:
            print(n, "isn't prime Number.")
    else:
        print(n, "is Prime Number.")

else:
    print(n, "isn't Prime Number.")
