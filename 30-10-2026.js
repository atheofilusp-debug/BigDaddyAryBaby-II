// CATATAN:

let buah = ["mangga", "jeruk"];

console.log(buah[0]);

buah.unshift("apel");
buah.splice(2, 0, "semangka");
buah.push("pisang");
console.log("setelah ditambah:", buah);

buah.shift();
buah.splice(1, 1);
buah.pop();
console.log("setelah dihapus:", buah);


// 1)
let orang = ["budi", "siti"];

console.log(orang[0]);

orang.unshift("roni");
orang.push("dewi");
orang.shift();
console.log("hasil akhir:", orang);


// 2)
let daftarlagu = ["ini abadi", "monokrom"];

console.log(daftarlagu[0]);

daftarlagu.splice(1, 0, "everything u are");
daftarlagu.push("aitakatta (eww)");
daftarlagu.shift();
console.log("hasil akhir:", daftarlagu);