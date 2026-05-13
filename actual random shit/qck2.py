from random import sample

def partition(list1,start,end):

    pivot = list1[end]
    i = start - 1
    

    for j in range(start,end):
        if list1[j] < pivot :
            i += 1
            list1[j], list1[i] = list1[i], list1[j]

    i += 1 
    list1[end], list1[i] = list1[i], list1[end]


    return i
        

def quicksort(list1, start,end):
    if (start >= end):return
    
    pivot = partition(list1,start,end)
    quicksort(list1,start,pivot -1)
    quicksort(list1,pivot + 1,end)



for i in range(10):
    list1 = [sample(range(11,100),1) for i in range(10)]
    print("\n\n")
    print(i)
    print(list1)
    quicksort(list1,0, len(list1) - 1)
    print(list1)
