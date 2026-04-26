start = [0,1,2]
end = [9,2,4]

activity = list(zip(start, end))

print(activity)

activity.sort(key = lambda x : x[1])

print(activity)