<?php 
    // buat koneksi dengan MySQL, gunakan database: 
    $link = mysqli_connect("localhost", "root", "", 
    "universitas"); 
     
    // jalankan query 
    $result = mysqli_query($link, "SELECT * FROM mahasiswa_ilkom"); 
?>
