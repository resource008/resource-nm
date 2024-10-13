<?php 
 // buat koneksi dengan MySQL, gunakan database: universitas 
 $mysqli = new mysqli("localhost", "root", "","universitas"); 
 
 // cek koneksi 
 if ($mysqli->connect_errno) { 
  die('Koneksi gagal: ' .$mysqli->connect_errno.' - '.$mysqli->connect_error); 
 } 
 
 // buat prepared statements 
 $stmt = $mysqli->prepare("INSERT INTO mahasiswa_ilkom 
VALUES (?, ?, ?, ?, ?)"); 
 
 // hubungkan "data" dengan prepared statements 
 $stmt->bind_param("ssisd",$nim_mhs, $nama_mhs, $umur_mhs , 
$tempat_lahir_mhs,$ipk_mhs); 
 
 // siapkan "data" query 
 $nim_mhs="089023020"; 
 $nama_mhs="Naira Alika"; 
 $umur_mhs=20; 
 $tempat_lahir_mhs="Padang"; 
 $ipk_mhs=3.9; 
 
 // jalankan query 
 $stmt->execute(); 
 
 // cek query 
 if (!$stmt) { 
  die('Query Error : '.$mysqli->errno.' - '.$mysqli ->error); 
 }else { 
  echo "Penambahan ".$stmt->affected_rows. " data berhasil<br />"; 
 } 
 
 // jalankan query untuk memeriksa hasil inputan 
 $result = $mysqli->query("SELECT * FROM mahasiswa_ilkom"); 
 
 // tampilkan query 
while ($row= $result->fetch_row()) { 
echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
echo "<br />"; 
} 
// tutup statements 
$stmt->close(); 
// tutup koneksi 
$mysqli->close(); 
?>