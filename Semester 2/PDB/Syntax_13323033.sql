-- Nama: Agus Pranata Marpaung
-- NIM: 13323033

-- Membuat Database Baru
CREATE DATABASE `HemmaBeautySalon`;

-- Menggunakan Database Hemma Beauty Salon
USE `HemmaBeautySalon`;

-- Membuat tabel Pelanggan
CREATE TABLE `Pelanggan` (
    `ID_Pelanggan` INT NOT NULL,
    `Nama` VARCHAR(255) NOT NULL,
    `Alamat` VARCHAR(255) NOT NULL,
    PRIMARY KEY (`ID_Pelanggan`)
);

-- Membuat tabel Produk
CREATE TABLE `Produk` (
    `Produk_id` INT NOT NULL,
    `Kategori_id` INT,
    `Nama` VARCHAR(255) NOT NULL,
    `Harga` INT,
    PRIMARY KEY (`Produk_id`)
);

-- Membuat tabel Karyawan
CREATE TABLE `Karyawan` (
    `Karyawan_id` INT NOT NULL,
    `Nama` VARCHAR(255) NOT NULL,
    `Posisi` VARCHAR(255),
    `Tanggal_masuk` DATE,
    PRIMARY KEY (`Karyawan_id`)
);

-- Membuat tabel Layanan
CREATE TABLE `Layanan` (
    `Layanan_id` INT NOT NULL,
    `Nama` VARCHAR(255) NOT NULL,
    `Harga` INT,
    PRIMARY KEY (`Layanan_id`)
);

-- Membuat tabel Transaksi Penjualan
CREATE TABLE `Transaksi_Penjualan` (
    `Transaksi_id` INT NOT NULL,
    `Pelanggan_id` INT,
    `Produk_id` INT,
    `Tanggal` DATE,
    `Total_harga` INT,
    PRIMARY KEY (`Transaksi_id`),
    FOREIGN KEY (`Pelanggan_id`) REFERENCES `Pelanggan`(`ID_Pelanggan`),
    FOREIGN KEY (`Produk_id`) REFERENCES `Produk`(`Produk_id`)
);

-- Data Dummy Masing Masing Tabel
INSERT INTO `Pelanggan` (`ID_Pelanggan`, `Nama`, `Alamat`) VALUES
(1, 'Aisyah', 'Jl. Durian'),
(2, 'Budi', 'Jl. Mangga'),
(3, 'Citra', 'Jl. Apel'),
(4, 'James', 'Jl. Sutomo'),
(5, 'Karen', 'Jl.Simpang Mansur'),
(6, 'Lini', 'Jl. Pangandaran'),
(7, 'Kesya', 'Jl. Belawan'),
(8, 'Winner', 'Jl. Pahlawan'),
(9, 'Juna', 'Jl. Prismatama'),
(10, 'Hana', 'Jl. Mulia'),
(11, 'Tina', 'Jl. Bintaro');

INSERT INTO `Produk` (`Produk_id`, `Kategori_id`, `Nama`, `Harga`) VALUES
(1, 101, 'Cream', 10000),
(2, 102, 'Shampoo', 10000),
(3, 103, 'Conditioner', 20000),
(4, 104, 'Face Wash', 10000),
(5, 105, 'Body Wash', 10000),
(6, 106, 'Minyak Rambut', 25000),
(7, 107, 'Semir Bigen', 30000),
(8, 108, 'Anti Aging', 20000),
(9, 109, 'Conditioner + Minyak Rambut', 20000),
(10, 110, 'Face Wash + Body Wash', 20000),
(11, 111, 'Shampoo Anti Rontok', 30000);

INSERT INTO `Karyawan` (`Karyawan_id`, `Nama`, `Posisi`, `Tanggal_masuk`) VALUES
(1, 'Dewi', 'Kasir', '2022-01-01'),
(2, 'Ani', 'Karyawati', '2022-01-02'),
(3, 'Lini', 'Karyawati', '2022-01-03');

INSERT INTO `Layanan` (`Layanan_id`, `Nama`, `Harga`) VALUES
(1, 'Manikur', 100000),
(2, 'Makeup Untuk Acara Khusus', 250000),
(3, 'Facial Perawatan Jerawat', 100000);

INSERT INTO `Transaksi_Penjualan` (`Transaksi_id`, `Pelanggan_id`, `Produk_id`, `Tanggal`, `Total_harga`) VALUES 
(1001, 1, 1, '2022-03-01', 100000), 
(1002, 2, 2, '2022-03-02', 250000), 
(1003, 3, 3, '2022-03-03', 100000), 
(1004, 4, 4, '2022-03-04', 120000), 
(1005, 5, 5, '2022-03-05', 260000), 
(1006, 6, 6, '2022-03-07', 140000), 
(1007, 7, 7, '2022-03-09', 130000), 
(1008, 8, 8, '2022-03-11', 210000), 
(1009, 9, 9, '2022-03-12', 112000), 
(1010, 10, 10, '2022-03-13', 101000), 
(1011, 11, 11, '2022-03-14', 190000);

-- 10 query menampilkan data dari tabel Pelanggan

-- 1. Menampilkan semua data pelanggan
SELECT * FROM `Pelanggan`;

-- 2. Menampilkan nama dan alamat pelanggan dengan ID 1
SELECT `Nama`, `Alamat` FROM `Pelanggan` WHERE `ID_Pelanggan` = 1;

-- 3. Menampilkan semua data pelanggan dengan nama 'Aisyah'
SELECT * FROM `Pelanggan` WHERE `Nama` = 'Aisyah';

-- 4. Menampilkan ID dan nama pelanggan yang alamatnya di 'Jl. Mangga'
SELECT `ID_Pelanggan`, `Nama` FROM `Pelanggan` WHERE `Alamat` = 'Jl. Mangga';

-- 5. Menampilkan semua pelanggan yang ID_Pelanggan lebih besar dari 10
SELECT * FROM `Pelanggan` WHERE `ID_Pelanggan` > 10;

-- 6. Menampilkan nama semua pelanggan yang alamatnya mengandung kata 'Jl.'
SELECT `Nama` FROM `Pelanggan` WHERE `Alamat` LIKE '%Jl.%';

-- 7. Menampilkan ID dan nama semua pelanggan yang namanya diawali dengan 'A'
SELECT `ID_Pelanggan`, `Nama` FROM `Pelanggan` WHERE `Nama` LIKE 'A%';

-- 8. Menampilkan ID dan nama semua pelanggan yang namanya diakhiri dengan 'i'
SELECT `ID_Pelanggan`, `Nama` FROM `Pelanggan` WHERE `Nama` LIKE '%i';

-- 9. Menampilkan jumlah total pelanggan
SELECT COUNT(*) FROM `Pelanggan`;

-- 10. Menampilkan nama pelanggan dengan alamat terpanjang
SELECT `Nama` FROM `Pelanggan` ORDER BY LENGTH(`Alamat`) DESC LIMIT 1;

-- Buat 10 query untuk menampilkan data dari beberapa tabel (harus mencakup contoh inner JOIN, left/right JOIN)

-- 1. INNER JOIN
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
INNER JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`;

-- 2. LEFT JOIN
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
LEFT JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`;

-- 3. RIGHT JOIN
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
RIGHT JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`;

-- 4. INNER JOIN dengan kondisi
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
INNER JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`
WHERE `T`.`Total_harga` > 100000;

-- 5. LEFT JOIN dengan kondisi
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
LEFT JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`
WHERE `P`.`Nama` LIKE 'A%';


-- 6. RIGHT JOIN dengan kondisi
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
RIGHT JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`
WHERE `T`.`Total_harga` > 100000;

-- 7. INNER JOIN dengan pengurutan hasil
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
INNER JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`
ORDER BY `T`.`Total_harga` DESC;

-- 8. LEFT JOIN dengan pengurutan hasil
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
LEFT JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`
ORDER BY `P`.`Nama`;

-- 9. RIGHT JOIN dengan pengurutan hasil
SELECT `P`.`Nama`, `T`.`Total_harga`
FROM `Pelanggan` AS `P`
RIGHT JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`
ORDER BY `T`.`Total_harga`;

-- 10. INNER JOIN dengan pengelompokan hasil
SELECT `P`.`Nama`, COUNT(`T`.`Transaksi_id`) AS `Jumlah_Transaksi`
FROM `Pelanggan` AS `P`
INNER JOIN `Transaksi_Penjualan` AS `T` ON `P`.`ID_Pelanggan` = `T`.`Pelanggan_id`
GROUP BY `P`.`Nama`;

-- Buat 5 penggunaan subquery

-- 1. Menampilkan nama pelanggan yang melakukan transaksi dengan total harga tertinggi
SELECT `Nama` FROM `Pelanggan` WHERE `ID_Pelanggan` = (SELECT `Pelanggan_id` FROM `Transaksi_Penjualan` ORDER BY `Total_harga` DESC LIMIT 1);

-- 2. Menampilkan nama produk yang memiliki harga lebih rendah dari harga produk tertinggi
SELECT `Nama` FROM `Produk` WHERE `Harga` < (SELECT MAX(`Harga`) FROM `Produk`);

-- 3. Menampilkan nama karyawan yang tidak melakukan layanan
SELECT `Nama` FROM `Karyawan` WHERE `Karyawan_id` NOT IN (SELECT DISTINCT `Karyawan_id` FROM `Layanan`);

-- 4. Menampilkan nama layanan yang harganya lebih tinggi dari rata-rata harga layanan
SELECT `Nama` FROM `Layanan` WHERE `Harga` > (SELECT AVG(`Harga`) FROM `Layanan`);

-- 5. Menampilkan nama pelanggan yang tidak melakukan transaksi penjualan
SELECT `Nama` FROM `Pelanggan` WHERE `ID_Pelanggan` NOT IN (SELECT DISTINCT `Pelanggan_id` FROM `Transaksi_Penjualan`);
