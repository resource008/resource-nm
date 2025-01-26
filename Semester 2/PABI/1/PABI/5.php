<?php 
    //buat koneksi dengan MySQL 
    $link=mysql_connect('localhost','root',''); 
     
    //gunakan database universitas 
    $result=mysql_query('USE universitas',$link); 
    
    //tampilkan tabel mahasiswa_ilkom 
    $result=mysql_query('SELECT * FROM mahasiswa_ilkom',$link); 
?>
