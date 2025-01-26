<?php 
// buat koneksi dengan MySQL, gunakan database: universitas 
$link = mysqli_connect("localhost", "root", "", 
"universitas"); 
// jalankan query 
$result = mysqli_query($link, "SELECT * FROM mahasiswa_ilkom"); 
// tampilkan query 
while ($row=mysqli_fetch_object($result)) 
{ 
echo $row->nim." ".$row->nama." ".$row->umur." "; 
echo $row->tempat_lahir." ".$row->IPK; 
echo "<br />"; 
} 
?>
