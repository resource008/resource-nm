create database utsku
USE utsku;



CREATE TABLE mahasiswa(
  id_mhs varchar(50) primary key NOT NULL,
  namaMahasiswa varchar(50) NOT NULL,
  No_HP varchar(50) NOT NULL,
  alamat varchar(50) NOT NULL,
  tgl_lahir date NOT NULL,
  kode_pos varchar(15) DEFAULT NULL,
  negara varchar(50) NOT NULL,
)

CREATE TABLE barang(
  id_barang varchar(50) primary key NOT NULL,
  namaBarang varchar(50) NOT NULL,
  JenisBarang varchar(50) NOT NULL,
  Jumlah int NOT NULL,
)

select * from barang 

CREATE TABLE barang_mhs (
  id_mhs varchar(50) NOT NULL,
  id_barang varchar(50) NOT NULL,
  tanggal_pembelian date,
  supplier varchar(100) NOT NULL
  PRIMARY KEY (id_mhs,id_barang),
  FOREIGN KEY (id_mhs) REFERENCES mahasiswa (id_mhs),
  FOREIGN KEY (id_barang) REFERENCES barang (id_barang)
 )

 delete mahasiswa
-- Insert data into table mahasiswa
INSERT INTO mahasiswa VALUES ('M_01', 'Anggreni', '089921212311','Laguboti', '20000621', 063241003, 'Indonesia');
INSERT INTO mahasiswa VALUES ('M_02', 'Melita', '081321212311','Laguboti', '19990621', 063241003, 'Indonesia');
INSERT INTO mahasiswa VALUES ('M_03', 'Retno', '081411212311','Medan', '19990521', 063241003, 'Indonesia');
INSERT INTO mahasiswa VALUES ('M_04', 'Lamganda', '081321212311','Tebing Tinggi','19980621', 063241003, 'Indonesia');
INSERT INTO mahasiswa VALUES ('M_05', 'Tupado', '081222118855','Tebing Tinggi', '20010621', 063241003, 'Indonesia');
select * from barang
-- Insert data into table barang
INSERT INTO barang VALUES ('B-01', 'Apple', 'Laptop',800);
INSERT INTO barang VALUES ('B-02', 'Apple', 'HP',100);
INSERT INTO barang VALUES ('B-03', 'Samsung', 'HP',500);
INSERT INTO barang VALUES ('B-04', 'Nokia', 'HP',780);
INSERT INTO barang VALUES ('B-05', 'Qualcomm', 'Tablet',680);

-- Insert data into table barang_mhs
INSERT INTO barang_mhs VALUES ('M_01', 'B-01', '20210621','Medan'); 
INSERT INTO barang_mhs VALUES ('M_02', 'B-01', '20210621','Jakarta');
INSERT INTO barang_mhs VALUES ('M_03', 'B-02', '20210711','Surabaya');
INSERT INTO barang_mhs VALUES ('M_04', 'B-03', '20210713','Palangkaraya');
INSERT INTO barang_mhs VALUES ('M_05', 'B-02', '20210815','Maluku');
