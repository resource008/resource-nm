<?php 
 // buat koneksi dengan MySQL, gunakan database: universitas 
 $link = mysqli_connect('localhost', 'root', '','universitas'); 
 
 // buat prepared statements 
 $stmt = mysqli_prepare($link, "INSERT INTO mahasiswa_ilkom VALUES (?, ?, ?, ?, ?)"); 
 
 // hubungkan "data" dengan prepared statements 
 mysqli_stmt_bind_param($stmt, "ssisd",$nim_mhs, $nama_mhs, $umur_mhs , $tempat_lahir_mhs,$ipk_mhs); 
 
 // siapkan "data" query 1 
 $nim_mhs="089023023"; 
 $nama_mhs="Alika Shanum"; 
 $umur_mhs=21; 
 $tempat_lahir_mhs="Medan"; 
 $ipk_mhs=3.8; 
 
 // jalankan query 1 
 mysqli_stmt_execute($stmt); 
 
 // cek hasil query 1 
 if (!$stmt) { 
  die('Query Error : '.mysqli_errno($link).' '.mysqli_error($link)); 
 }else { 
  echo "Penambahan ".mysqli_stmt_affected_rows($stmt)."data berhasil<br />"; 
 } 
 
 // siapkan "data" query 2 
 $nim_mhs="089023026"; 
 $nama_mhs="Rina Melita"; 
 $umur_mhs=22; 
 $tempat_lahir_mhs="Lampung"; 
 $ipk_mhs=3.5; 
 
 // jalankan query 2 
 mysqli_stmt_execute($stmt); 
 
 // cek hasil query 2 
 if (!$stmt) { 
  die('Query Error : ' .mysqli_errno($link).' 
'.mysqli_error($link)); 
 }else { 
  echo "Penambahan 
".mysqli_stmt_affected_rows($stmt)."data berhasil<br />"; 
 } 
 
 // siapkan "data" query 3 
 $nim_mhs="089023031"; 
 $nama_mhs="Joni Halim"; 
 $umur_mhs=21; 
 $tempat_lahir_mhs="Palembang"; 
 $ipk_mhs=3.6; 
 
 // jalankan query 3 
 mysqli_stmt_execute($stmt); 
 
 // cek hasil query 3 
 if (!$stmt) { 
  die('Query Error : '.mysqli_errno($link).' 
'.mysqli_error($link)); 
 }else { 
  echo "Penambahan 
".mysqli_stmt_affected_rows($stmt)."data berhasil<br />"; 
 } 
 
 // jalankan query untuk memeriksa hasil inputan 
 $result = mysqli_query($link, "SELECT * FROM 
mahasiswa_ilkom"); 
 
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