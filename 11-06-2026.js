// 1) Array

const angka = [10, 20, 30, 40];

const ada20 = angka.includes(20);
console.log("apakah 20 ada?", ada20);

const posisi30 = angka.indexOf(30);
console.log("index angka 30 adalah:", posisi30);

const hasilFilter = angka.filter(x => x > 20);
console.log("hasil filter (>20):", hasilFilter);

// 2) Sorting

const angkaAsc = [5, 2, 9, 1];
const angkaDesc = [5, 2, 9, 1];

angkaAsc.sort((a, b) => a - b);
console.log("Ascending:", angkaAsc);

angkaDesc.sort((a, b) => b - a);
console.log("Descending:", angkaDesc);

// 3) Latihan

// a) 

const nilaiSiswa = [60, 85, 40, 90, 75, 50, 95];

if (nilaiSiswa.includes(85)) {
  const posisi85 = nilaiSiswa.indexOf(85);
  console.log(`nilai 85 ada di-${posisi85}`);
} else {
  console.log("data tidak ditemukan");
}

const hasil_Filter = nilaiSiswa.filter(x => x > 75);
console.log(hasil_Filter);

// b)

const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

if (produk.includes("Keyboard")) {
  console.log("Keyboard ditemukan");
} else {
  console.log("Keyboard tidak ditemukan");
}

const hasil__Filter = produk.filter(x => x.length > 5);
console.log(hasil__Filter);

// c)

const suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

if (suhu.includes(0)) {
  console.log("Nilai 0 ditemukan");
} else {
  console.log("Nilai 0 tidak ditemukan");
}

const hasil___Filter = suhu.filter(x => x > 0);
console.log(hasil___Filter);