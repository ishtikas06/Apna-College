def max_activity(start, end):
    # sort on end time
    # select A0
    count = 1
    curr_end_time = end[0]

    for i in range(1, len(start)):
        if start[i] >= curr_end_time:
            count += 1
            curr_end_time = end[i]

    return count


start =  [1,3,0,5,8,5]
end = [2,4,6,7,9,9]

print(max_activity(start, end))