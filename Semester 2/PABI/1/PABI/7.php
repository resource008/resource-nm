<?php 
    // buat koneksi dengan MySQL, gunakan database: universitas 
    $link = mysqli_connect("localhost", "root", "", 
    "universitas"); 
 
    // jalankan query 
    $result = mysqli_query($link, "SELECT * FROM mahasiswa_ilkom"); 
 
    // tampilkan query 
    while ($row=mysqli_fetch_row($result)) 
    { 
        echo "$row[0] $row[1] $row[2] $row[3] $row[4]"; 
        echo "<br />"; 
    } 
?>
