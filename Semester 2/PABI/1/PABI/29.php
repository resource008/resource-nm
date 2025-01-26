<?php 
// hubungkan "data" dengan prepared statements 
mysqli_stmt_bind_param($stmt, "ssisd", $nim_mhs, $nama_mhs, $umur_mhs , $tempat_lahir_mhs, $ipk_mhs); 
// siapkan "data" query 
$nim_mhs="089023020"; 
$nama_mhs="Naira Alika"; 
$umur_mhs=20; 
$tempat_lahir_mhs="Padang"; 
$ipk_mhs=3.9; 
?>