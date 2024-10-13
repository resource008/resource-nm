<?php 
// buat koneksi dengan MySQL, gunakan database: universitas 
$link = mysqli_connect('localhost', 'root', '','universitas'); 
 
// buat prepared statements 
$stmt = mysqli_prepare($link, "INSERT INTO mahasiswa_ilkom 
VALUES (?, ?, ?, ?, ?)"); 
 
// hubungkan "data" dengan prepared statements 
mysqli_stmt_bind_param($stmt, "ssisd",$nim_mhs, $nama_mhs, 
$umur_mhs , $tempat_lahir_mhs, $ipk_mhs); 
 
// siapkan "data" query 
$nim_mhs="089023020"; 
$nama_mhs="Naira Alika"; 
$umur_mhs=20; 
$tempat_lahir_mhs="Padang"; 
$ipk_mhs=3.9; 
 
// jalankan query 
mysqli_stmt_execute($stmt); 
 
// cek hasil query 
if (!$stmt) { die('Query Error : '.mysqli_errno($link).' 
'.mysqli_error($link)); 
}else { 
 echo "Penambahan ".mysqli_stmt_affected_rows($stmt)." data 
berhasil<br />"; 
} 
 
// jalankan query untuk memeriksa hasil inputan 
$result = mysqli_query($link, "SELECT * FROM mahasiswa_ilkom"); 
 
// tampilkan query 
while ($row=mysqli_fetch_row($result)) { 
 echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
 echo "<br />"; 
} 
 
// tutup statements 
mysqli_stmt_close($stmt); 
 
// tutup koneksi 
mysqli_close($link); 
?>