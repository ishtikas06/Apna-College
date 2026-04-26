pairs = [(5,24), (39,60), (5,28), (27,40), (50,90)]

pairs.sort(key=lambda x:x[1])

# select A0
count = 1
curr_end = pairs[0][1]
for i in range(1, len(pairs)):
    if pairs[i][0] > curr_end:
        count += 1
        curr_end = pairs[i][1]

print(count)
