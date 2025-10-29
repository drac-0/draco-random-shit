class perkontolan() :
	def __init__(self):
		pass

	def belahanpantat():
		for i in range(1, 19):
			if i == 1 or i == 18 :
				print("#", end='')

			else :
				print("=", end='')

		print()

		for i in range(1,8,2):
			print("|",end='')
			for j in range(1, 8-i):
				print(" ",end='')


			print("<>",end='')

			for j in range(1,i):
				print(".",end='')

			for j in range(1, i):
				print(".", end='')

			print("<>",end='')

			for j in range(1, 8-i):
				print(" ", end='')

			print("|",end='')

			print()

		for i in range(1,8,2):
			print("|",end='')
			for j in range(1,i):
				print(" ",end='')

			print("<>",end='')

			for j in range(1,8-i):
				print(".",end='')

			for j in range(1,8-i):
				print(".",end='')

			print("<>",end='')

			for j in range(1, i):
				print(" ", end='')

			print("|",end='')


			print()

		for i in range(1, 19):
			if i == 1 or i == 18 :
				print("#", end='')

			else :
				print("=", end='')

		print()
		



