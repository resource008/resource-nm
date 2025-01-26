CREATE TABLE mahasiswa(
	nim INT NOT NULL,
	nama CHAR(50) NOT NULL,
	gender CHAR(50) NOT NULL
);
ALTER TABLE mahasiswa
ADD CONSTRAINT mahasiswaPK PRIMARY KEY (nim);

CREATE TABLE dosen(
	nidn INT NOT NULL,
	kode_matkul INT NOT NULL,
	nama CHAR(50) NOT NULL
);
ALTER TABLE dosen ADD CONSTRAINT
dosenPK PRIMARY KEY(nidn);

ALTER TABLE dosen ADD CONSTRAINT 
dosenFK FOREIGN KEY(kode_matkul) REFERENCES matakuliah(kode_matkul);

CREATE TABLE matakuliah(
	kode_matkul INT NOT NULL,
	nama CHAR(50) NOT NULL,
	kelas CHAR(50) NOT NULL 
);

ALTER TABLE matakuliah 
ADD CONSTRAINT matakuliahPK PRIMARY KEY(kode_matkul);

CREATE TABLE matkul_mahasiswa(
	kode_matkul INT NOT NULL,
	nim INT NOT NULL,
	nilai INT NOT NULL
);

ALTER TABLE matkul_mahasiswa ADD CONSTRAINT
matkul_mahasiswaPK PRIMARY KEY(kode_matkul,nim);