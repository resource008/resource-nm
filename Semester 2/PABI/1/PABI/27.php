<?php 
// buat koneksi dengan MySQL, gunakan database: universitas 
$mysqli = new mysqli("localhost", "root","","universitas"); 

// cek koneksi 
if ($mysqli->connect_errno) { 
die('Koneksi gagal: ' .$mysqli->connect_errno.' - 
'.$mysqli->connect_error); 
} 

// buat prepared statements 
$stmt = $mysqli->prepare("SELECT * FROM mahasiswa_ilkom WHERE nama=?"); 

// cek query 
if (!$stmt) { 
die('Query Error : '.$mysqli->errno.' - '.$mysqli->error); 
} 

// siapkan "data" query 
$nama_mhs="Neil Situmorang"; 

// tutup koneksi 
$mysqli->close(); 

// hubungkan "data" dengan prepared statements 
$stmt->bind_param("s", $nama_mhs); 

// jalankan query 
$stmt->execute(); 

// hubungkan hasil query 
$result = $stmt->get_result(); 

// tampilkan query 
while ($row= $result->fetch_row()) { 
echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
echo "<br />"; 
} 

// tutup statements 
$stmt->close(); 
?>