from random import sample
list1 = [8,2,4,7,1,3,9,6,5]



def qck(list1) :
    pivot = list1[-1]
    i,j = -1,0
    temp = 0
    while (j < len(list1)):
        if (list1[j] > pivot):
            j+=1
            continue

        else :
            i += 1
            list1[j], list1[i] = list1[i],list1[j]
            continue

    list1[i+1],list1[-1] = list1[-1], list1[i+1]




qck(list1)
print(list1)
