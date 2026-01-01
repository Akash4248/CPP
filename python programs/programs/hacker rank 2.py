if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    s=set(a)
    m=max(s)
    s.remove(m)
    print(max(s))
