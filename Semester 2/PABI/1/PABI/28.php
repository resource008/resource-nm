<?php 
// buat koneksi dengan MySQL, gunakan database: universitas 
$link = mysqli_connect('localhost', 'root', '','universitas'); 
// buat prepared statements 
$stmt = mysqli_prepare($link, "INSERT INTO mahasiswa_ilkom VALUES (?, ?, ?, ?, ?)"); 
?>