#program untuk mengecek apakah suatu string merupakan huruf pertama dari string lainnya
#e.g phrase = "mnid", sentence = "my name is draco". expected output == True.
#uber interview bullshit

sentence = input("masukkan kalimat\t: ")
phrase = input("masukkan kata\t\t: ")
check = []


sen_list = sentence.split(" ")
check = [a[0] for a in sen_list]

print(phrase.split(" "))
print(check)
actcheck = "".join(check)

if actcheck == phrase :
    print(True)
    
else :
    print(False)
