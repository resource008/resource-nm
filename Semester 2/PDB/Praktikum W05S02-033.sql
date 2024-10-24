-- Nama: Agus Pranata Marpaung
-- NIM : 13323033
-- Soal: 9

SELECT 
	MIN(amount) AS min_amount, 
	MAX(amount) AS max_amount
FROM payments WHERE customerNumber LIKE '_0%0';

