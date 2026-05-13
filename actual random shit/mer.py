from random import sample

def merge(list1, list2, list3):
    l2len = len(list2)
    l3len = len(list3)
    i, l, r = 0, 0, 0
    print(list2, "   ", list3)
    

    while l < l2len and r < l3len:
        if list2[l] < list3[r]:
            list1[i] = list2[l]
            i += 1
            l += 1
        else:
            list1[i] = list3[r]
            i += 1
            r += 1

    while l < l2len:
        list1[i] = list2[l]
        i += 1
        l += 1

    while r < l3len:
        list1[i] = list3[r]
        i += 1
        r += 1

def mergesort(list1):
    lenl1 = len(list1)
    if lenl1 <= 1:
        return

    mid = lenl1 // 2
    list2 = []
    list3 = []

    for i in range(lenl1):
        if i < mid:
            list2.append(list1[i])
        else:
            list3.append(list1[i])

    mergesort(list2)
    mergesort(list3)
    merge(list1, list2, list3)

for i in range(10):
    list1 = [sample(range(11,100),1) for i in range(10)]
    print("\n\n")
    print(i)
    print(list1)
    mergesort(list1)
    print(list1)
