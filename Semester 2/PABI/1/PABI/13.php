<?php 
    // buat koneksi dengan MySQL, gunakan database: universitas 
    $link = new mysqli("localhost", "root", "qwerty","universitas"); 
 
    // jalankan query 
    $result = $link->query("SELECT * FROM mahasiswa_ilkom"); 
?>
