N = int(input())
S = [input() for _ in range(N)]
wins = [s.count("o") for s in S]
pairs = [(w, i + 1) for i, w in enumerate(wins)]
pairs.sort(key=lambda x: (-x[0], x[1]))
rank = [p[1] for p in pairs]
print(*rank)
