<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
    $nama = " andi ";

    $rtrim_nama = rtrim($nama);
    echo $rtrim_nama; // " andi"
    echo "<br>";

    $ltrim_nama = ltrim($nama);
    echo $ltrim_nama; // "andi"
    echo "<br>";

    $nama1 = "___andi___";

    $rtrim_nama1 = rtrim($nama1,"_");
    echo $rtrim_nama1; // "___andi"
    echo "<br>";

    $ltrim_nama1 = ltrim($nama1,"_");
    echo $ltrim_nama1; // "andi___"
?>