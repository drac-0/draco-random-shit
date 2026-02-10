# mat = [[0,2,0,0,3],
#        [2,0,5,0,1],
#        [0,5,0,1,0],
#        [0,0,1,0,2],
#        [3,1,0,2,0]
#        ]

mat = [[0,5,0,2,0,0,0,0,0],
       [5,0,4,3,5,6,0,0,0],
       [0,4,0,0,0,3,0,0,0],
       [2,3,0,0,7,0,6,8,0],
       [0,5,0,7,0,1,0,3,0],
       [0,6,3,0,1,0,0,4,4],
       [0,0,0,6,0,0,0,4,0],
       [0,0,0,8,3,4,4,0,2],
       [0,0,0,0,0,4,0,2,0],
       ]
new = []

"""MENENTUKAN DAN MENGURUTKAN SISI DENGAN BOBOT PALING KECIL"""
print(new)
for baris, i in enumerate(mat):
    for kolom, j in enumerate(i[0:baris]):
       if j != 0:
              new.append((j, str(baris) + str(kolom)))

new.sort()

print("Sisi terkecil ke terbesar:", new)

ortu = []



"""LOGIC UNTUK MENENTUKAN PE"""
for i in range(len(mat[1])):
    ortu.append(i)
    print(ortu)

def cariortu(simpul):
    if ortu[simpul] != simpul:
        ortu[simpul] = cariortu(ortu[simpul])

    return ortu[simpul]

def union(simpul1,simpul2):
    ortu1 = cariortu(simpul1)
    ortu2 = cariortu(simpul2)

    if ortu1 == ortu2 :
        return False
    
    ortu[ortu1] = ortu2
    return True

mst = []
for panjang, simpul in new:
    awal = simpul[0]
    ujung = simpul[1]

    if union(int(awal)-1,int(ujung)-1) :
        print(f"Sisi {awal} - {ujung} ditambahkan dengan bobot {panjang}")
        mst.append(panjang)

    else:
        print(f"Sisi {awal} - {ujung} tidak boleh ditambahkan karena membentuk simpul")
        continue


print(sum(mst))
