<?php 
 // buat koneksi dengan MySQL, gunakan database: universitas 
 $mysqli = new mysqli("localhost", "root", "","universitas"); 
 
 // cek koneksi 
 if ($mysqli->connect_errno) { 
  die('Koneksi Error: '.$mysqli->connect_errno.' - '. 
  $mysqli->connect_error); 
 } 
 
 // koneksi berhasil 
 echo 'Koneksi Berhasil : '.$mysqli->host_info."<br />"; 
 
 // jalankan query 
 $result = $mysqli->query("SELECT * FROM mahasiswa_ilkom"); 
 
 // cek hasil query 
 if ($mysqli->errno) { 
  die('Query Error : '.$mysqli->errno.'-'.$mysqli->error); 
 } 
 
 // tampilkan query 
 while ($row= $result->fetch_row()) { 
  echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
  echo "<br />"; 
 } 
 
 // tutup koneksi 
 $mysqli->close(); 
?>