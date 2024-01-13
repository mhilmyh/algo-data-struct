# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(N, A):
    a = len(A)
    start = -1

    for i in range(a-1, -1, -1):
        if A[i] == N+1:
            start = i
            break

    counter = {}
    maximum_previous = 0
    maximum_index = -1

    for i in range(0, start+1):
        if A[i] == N+1:
            if maximum_index != -1:
                maximum_previous = counter[maximum_index]
                counter = {maximum_index: maximum_previous}
        else:
            counter[A[i]-1] = counter.get(A[i]-1, maximum_previous) + 1
            if maximum_index == -1:
                maximum_index = A[i]-1
            elif counter[maximum_index] < counter[A[i]-1]:
                maximum_index = A[i]-1
    res = None
    if maximum_index in counter:
        res = [counter[maximum_index]] * N
    else:
        res = [0] * N
    
    for i in range(start+1, a):
        res[A[i]-1] += 1

    return res