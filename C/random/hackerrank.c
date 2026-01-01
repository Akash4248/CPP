if __name__ == '__main__':
    s = input()
    for i in range(0,5):
        if s.isalnum():
            print("True")
        elif s.isalpha():
            print("True")
        elif s.isdigit():
            print("True")
        elif s.islower():
            print("True")
        elif s.isupper():
            print("True")
        else:
            print("False")
        