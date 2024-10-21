<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
    $kalimat = "<b>Tebal</b>";
    echo $kalimat. "<br><br>";
    pakai_strip_tags();
    pakai_htmlentites();

    function pakai_strip_tags()
    {
        GLOBAL $kalimat;
        $filter1 = strip_tags($kalimat);
        echo $filter1."<br><br>";
    }
    function pakai_htmlentites()
    {
        GLOBAL $kalimat;
        $filter2 = htmlentities($kalimat);
        echo $filter2;
    }
?>