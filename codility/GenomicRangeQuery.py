# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")
def solution(S, P, Q):
    def convert(x):
        if x == 'A':
            return 1
        if x == 'C':
            return 2
        if x == 'G':
            return 3
        if x == 'T':
            return 4
        return 5
    
    S = list(map(convert, S))
    n = len(S)
    tree = build(S, n)

    # print(S)
    # print(tree)

    res = []
    for (p, q) in zip(P, Q):
        # print((p, q), (p, q+1), (p+n, q+1+n))
        # print(tree[p+n:q+1+n])
        res.append(query(tree, p+n, q+1+n))

    return res

def build(S, n):
    tree = [5] * 2 * n

    for i in range(n):
        tree[i + n] = S[i]

    for i in range(n - 1, 0, -1):
        tree[i] = min(tree[2 * i], tree[2 * i + 1])

    return tree

def query(tree, l, r):
    res = 5

    while l < r:
        if l % 2 == 1:
            res = min(res, tree[l])
            l += 1

        if r % 2 == 1:
            r -= 1
            res = min(res, tree[r])

        l //= 2
        r //= 2

    return res