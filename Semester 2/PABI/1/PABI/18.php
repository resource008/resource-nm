<?php 
 // buat koneksi dengan MySQL, gunakan database: 
universitas 
 $link = mysqli_connect('localhost', 'root', '','universitas'); 
 
 // cek koneksi 
 if (!$link) { 
  die('Koneksi Error : '.mysqli_connect_errno().' - 
'.mysqli_connect_error()); 
 } 
 
 // koneksi berhasil 
 echo 'Koneksi Berhasil :'.mysqli_get_host_info($link)."<br 
/>"; 
 
 // jalankan query 
 $result = mysqli_query($link,"SELECT * FROM 
mahasiswa_ilkom"); 
 
 // cek hasil query 
 if (!$result) { 
  die('Query Error : '.mysqli_errno($link). ' - 
'.mysqli_error($link)); 
 } 
// tampilkan query 
while ($row=mysqli_fetch_row($result)) { 
echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
echo "<br />"; 
} 
// tutup koneksi 
mysqli_close($link); 
?> 