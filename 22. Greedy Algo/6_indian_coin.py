def min_note(note, v):
    note.sort(reverse=False)
    ans = 0
    for i in range(len(note)-1, -1, -1):
        if v == 0:
            break
        if v >= note[i]:
            ans += v//note[i]
            v = v%note[i]

    return ans

note = [1,2,5,10,20,50,100,500,2000]
v = 1099

print(min_note(note, v))