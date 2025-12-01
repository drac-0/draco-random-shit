#program untuk mengecek apakah suatu string merupakan huruf pertama dari string lainnya
#e.g phrase = "mnid", sentence = "my name is draco". expected output == True.
#uber interview bullshit

sentence = input("masukkan kalimat\t: ")
phrase = input("masukkan kata\t\t: ")
check = []

def uber(sentence, phrase, check) :
	sen_list = sentence.split(" ")
	check = [a[0] for a in sen_list]
	actcheck = "".join(check)

	if actcheck == phrase :
		return True
		
	else :
		return False

print(uber(sentence,phrase,check))


#O(N) time complexity i guess