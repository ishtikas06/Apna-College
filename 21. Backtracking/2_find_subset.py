def print_subset(strng, subset):
    if len(strng) == 0:
        print(subset)
        return

    ch = strng[0]
    print_subset(strng[1:], subset+ch) #yes
    print_subset(strng[1:], subset) #no


strng = "abc"
subset = ""

print_subset(strng, subset)