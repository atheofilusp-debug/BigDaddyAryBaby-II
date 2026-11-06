# 1) Array

angka = [10, 20, 30, 40]

ada_20 = 20 in angka
print("apakah 20 ada?", ada_20)

posisi_30 = angka.index(30)
print("index angka 30 adalah:", posisi_30)

hasil_filter = [x for x in angka if x > 20]
print("hasil filter (> 20):", hasil_filter)

# 2) Sorting

angka = [5, 2, 9, 1]

angka.sort()
print("Ascending:", angka)

angka.sort(reverse=True)
print("Descending:", angka)

# 3) Latihan

nilai_siswa = [60, 85, 40, 90, 75, 50, 95]
if 85 in nilai_siswa:
  posisi_85 = nilai_siswa.index(85)
  print(f"nilai 85 ada di-{posisi_85}")
else:
  print("data tidak ditemukan")

hasil_filter = [x for x in nilai_siswa if x > 75]
print(hasil_filter)