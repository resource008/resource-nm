<?php 
    // buat koneksi dengan MySQL, gunakan database: universitas 
    $link = new mysqli("localhost", "root", "qwerty", 
    "universitas"); 
 
    // jalankan query 
    $result = $link->query("SELECT * FROM mahasiswa_ilkom"); 
 
    // tampilkan query 
    while ($row=$result->fetch_array(MYSQLI_ASSOC)) 
    { 
        echo $row['nim']." ".$row['nama']." ".$row['umur'].""; 
        echo $row['tempat_lahir']." ".$row['IPK']; 
        echo "<br />"; 
    } 
?>
