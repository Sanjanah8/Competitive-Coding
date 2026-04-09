n, m = map(int, input().split())
start = input().strip()
arrivals = input().split()

def to_min(t):
    h, mins = map(int, t.split(':'))
    return h * 60 + mins

start_min = to_min(start)
on_time_count = sum(1 for t in arrivals if to_min(t) <= start_min)

print("No" if on_time_count >= m else "Yes")
