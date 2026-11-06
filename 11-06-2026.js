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

