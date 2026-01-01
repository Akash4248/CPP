if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    avg=0
    s=0
    c=0
    if (query_name in student_marks):
        for i in student_marks[query_name]:
            s+=i
            c+=1
        avg=s/c
        print("{:.2f}".format(avg))
