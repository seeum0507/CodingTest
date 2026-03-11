import sys
from collections import deque

input = sys.stdin.readline

N, M, R = map(int, input().split())

graph = [[] for _ in range(N+1)]
visited = [0]*(N+1)

for _ in range(M):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

for i in range(1, N+1):
    graph[i].sort()

queue = deque([R])
visited[R] = 1
count = 2

while queue:
    node = queue.popleft()
    
    for next in graph[node]:
        if visited[next] == 0:
            visited[next] = count
            count += 1
            queue.append(next)

for i in range(1, N+1):
    print(visited[i])