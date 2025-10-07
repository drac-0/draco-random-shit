#program untuk mengecek apakah suatu string merupakan huruf pertama dari string lainnya
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
