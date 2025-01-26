<?php 
// buat koneksi dengan MySQL, gunakan database: universitas 
$link = mysqli_connect('localhost', 'root', '','universitas'); 
 
// cek koneksi 
if (!$link) { 
 die('Koneksi Error : '.mysqli_connect_errno().' - 
'.mysqli_connect_error()); 
} 
 
// buat prepared statements 
$stmt = mysqli_prepare($link, "SELECT * FROM mahasiswa_ilkom 
WHERE nama=?"); 
 
// siapkan "data" query 
$nama_mhs="Neil Situmorang"; 
 
// hubungkan "data" dengan prepared statements: bind 
mysqli_stmt_bind_param($stmt, "s", $nama_mhs); 
 
// jalankan query: execute 
mysqli_stmt_execute($stmt); 
 
// cek hasil query 
if (!$stmt) { die('Query Error : '.mysqli_errno($link).' - 
'.mysqli_error($link)); 
} 
 
// ambil hasil query 
$result=mysqli_stmt_get_result($stmt); 
 
// tampilkan hasil query 
while ($row= mysqli_fetch_row($result)) { 
 echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
echo "<br />"; 
} 
// tutup statements 
mysqli_stmt_close($stmt); 
// tutup koneksi 
mysqli_close($link); 
?> 