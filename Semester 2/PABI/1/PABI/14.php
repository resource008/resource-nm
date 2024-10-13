<?php 
    // buat koneksi dengan MySQL, gunakan database: universitas 
    $link = new mysqli("localhost", "root", "qwerty","universitas"); 
 
    // jalankan query 
    $result = $link->query("SELECT * FROM mahasiswa_ilkom"); 
 
    // tampilkan query 
    while ($row= $result->fetch_row()) 
    { 
        echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
        echo "<br />"; 
    } 
?>
