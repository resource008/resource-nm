<?php 
// buat koneksi dengan MySQL, gunakan database: universitas 
 $link = mysqli_connect('localhost', 'root', 
'','universitas'); 
 
 // cek koneksi 
 if (!$link) { 
  die('Koneksi Error : '.mysqli_connect_errno() .' - 
'.mysqli_connect_error()); 
 } 
 
 // koneksi berhasil 
 echo 'Koneksi Berhasil :'.mysqli_get_host_info($link)."<br 
/>"; 
 
 // tutup koneksi 
 mysqli_close($link); 
?>