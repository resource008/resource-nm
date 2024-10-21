<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
    $nama = "\t \t andi \n \r";
    $nama_juga = "  andi \t";
    if (trim($nama) == trim($nama_juga)) {
        echo "Nama Sama";
    }
    else {
        echo "Nama Beda";
    }
    // hasil: Nama Sama
?>