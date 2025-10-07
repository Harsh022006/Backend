def even_numbers():
    evens = []
    for i in range(1, 11):
        evens.append(i * 2)
    return evens

numbers = even_numbers()
for num in numbers:
    print(num)
