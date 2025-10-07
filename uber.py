#program untuk mengecek apakah suatu string merupakan huruf pertama dari string lainnya
#e.g phrase = "mnid", sentence = "my name is draco". expected output == True.
#uber interview bullshit

sentence = input("masukkan kalimat\t: ")
phrase = input("masukkan kata\t\t: ")
check = ""


sen_list = sentence.split(" ")
for word in sen_list :
	first_letter = word[0]
	check = check + first_letter

if check == phrase:
	print(True)
else :
	print(False)
