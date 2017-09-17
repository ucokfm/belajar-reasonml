/* Ini adalah format penulisan komentar */

/* Memberi penanda title pada nilai "Saur Sepuh" */
let title = "Saur Sepuh";

/* Menyatakan tipe value "Wiro Sableng" sebagai tipe String secara langsung */
let name: string = "Wiro Sableng";
Js.log name;

/* Menggabungkan dua penanda bertipe String */
let street: string = "Jl. Utama Raya";
let city: string = "Kota Tangerang";
let address = street ^ ", " ^ city;
Js.log address;

/* Menjumlahkan dua nilai bertipe Integer dan mencetak hasilnya */
let priceA = 10000;
let priceB = 25000;
let totalPrice = priceA + priceB;
Js.log {j|Total Harga: $totalPrice|j};
