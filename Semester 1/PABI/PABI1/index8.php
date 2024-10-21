<!--
Nama    : Agus Pranata Marpaung
NIM     : 13323033
Kelas   : 31TK2
-->

<?php
require_once ('header.php');
?>

    <main>
        Selamat datang di mata kuliah PABI, tempat belajar PABI yang happy
    </main>

    <?php
    $pekerjaan =["guru", "penyihir", "pencuri", "pendeta", "ustadz"];
    echo implode(" | ", $pekerjaan) . '<br>';
    var_dump(implode(" | ", $pekerjaan));
    echo '<br>';

    $pelajaran = "PABI SISOP SISTAN PLSJ ANJAR";
    print_r(explode(" ",$pelajaran,3));
    ?>

    <h2>Fungsi Date </h2>

    <?php
    echo date('d - M - Y');
    ?>

<?php
require_once ('footer1.php');
?>