class MyIterator:
    def __init__(self, numbers):
        self.numbers = numbers
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.index < len(self.numbers):
            value = self.numbers[self.index]
            self.index += 1
            return value
        else:
            raise StopIteration

# List of integers
numbers_list = [10, 20, 30, 40, 50]

# Creating iterator object
iterator = MyIterator(numbers_list)

# Iterating using the custom iterator
for num in iterator:
    print(num)
