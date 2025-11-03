class MyError(Exception):
    pass

try:
    raise MyError("This is a custom exception.")
except MyError as e:
    print(e)
