
# Sistem Pendeteksi Komponen dalam Sumber Air dan Uji Kelayakan Konsumsi

## Deskripsi Singkat
Program C++ yang dirancang untuk mendeteksi kualitas air minum dan mengidentifikasi potensi pencemaran berdasarkan analisis parameter fisik, kimia, dan biologi. Sistem ini memberikan rekomendasi langkah pencegahan sesuai standar WHO dan Peraturan Menteri Kesehatan (Permenkes) RI.

## Latar Belakang
Saat ini, banyak wilayah di Indonesia mengalami permasalahan akses air bersih dan sanitasi yang layak. Pencemaran air dari limbah domestik dan industri menjadi tantangan utama yang berdampak pada kesehatan masyarakat. Program ini bertujuan memberikan solusi sederhana agar masyarakat dapat mengidentifikasi kualitas air sebelum dikonsumsi tanpa perlu melakukan pengujian di laboratorium.

## Fitur Utama

### 1. **Analisis Parameter Fisik**
   - Suhu Udara (standar: ±3°C)
   - Kondisi Warna (standar: ≤10 TCU)
   - Kekeruhan (standar: ≤3 NTU)
   - Rasa (standar: Tidak berasa)
   - Bau (standar: Tidak berbau)
   - Kandungan Bahan Padat Terlarut/TDS (standar: <300 mg/L)

### 2. **Analisis Parameter Kimia**
   - pH (standar: 6.5-8.5)
   - Kadar Nitrat (standar: <20 mg/L)
   - Kadar Nitrit (standar: <3 mg/L)

### 3. **Analisis Parameter Biologi**
   - Kadar Bakteri Escherichia Coli (standar: 0 CFU/100 ml)

### 4. **Deteksi Zat Pencemar (Logam Berat)**
   - Arsenik/As (standar: ≤0.01 mg/L)
   - Timbal/Pb (standar: ≤0.1 mg/L)
   - Kromium/Cr (standar: ≤0.05 mg/L)
   - Merkuri/Hg (standar: <0.001 mg/L)

### 5. **Sistem Rekomendasi**
   - Identifikasi sumber potensial pencemaran
   - Langkah pencegahan spesifik (filtrasi, perebusan, neutralisasi pH, disinfeksi)
   - Saran untuk pengelolaan limbah dan sanitasi

## Teknologi yang Digunakan
- **Bahasa Pemrograman**: C++
- **IDE**: Dev C++
- **Paradigma**: Pemrograman Prosedural

## Cara Penggunaan
1. Jalankan program di IDE Dev C++ atau kompilasi dengan compiler C++
2. Masukkan nilai-nilai parameter air sesuai hasil pengukuran
3. Program akan menampilkan hasil analisis dan rekomendasi penanganan

## Batasan Sistem
- Input data dilakukan secara manual oleh pengguna
- Tidak terintegrasi dengan sensor otomatis
- Analisis terbatas pada parameter standar (tidak mencakup pestisida, deterjen, atau polutan emergen lainnya)
- Menggunakan pendekatan rule-based sederhana, bukan machine learning
- Berfungsi sebagai alat bantu analisis awal, bukan pengganti uji laboratorium

## Manfaat
✓ Membantu masyarakat mengidentifikasi kualitas air minum  
✓ Memberikan edukasi tentang kelayakan air konsumsi  
✓ Mencegah penyakit bawaan air melalui deteksi dini  
✓ Mendukung peningkatan sanitasi dan kesehatan lingkungan  
✓ Dapat dijalankan pada perangkat komputer sederhana  

## Tim Pengembang
Ahmad Irfan Rizqi Muliawan, Arya Ghazi Wiratama, Fakhri Ahmad Yasir, Huga Alva Wira Atmadja, Najmi Firdaus Assidiqi, Sandya Indra Prayoga

**Dosen Pengampu**: Dr. Lukman Heryawan, S.T., M.T.  
**Institusi**: Universitas Gadjah Mada, Fakultas Matematika dan Ilmu Pengetahuan Alam  
**Tahun**: 2025

## Referensi
- World Health Organization (WHO)
- Peraturan Menteri Kesehatan RI No. 2 Tahun 2023
- Sustainable Development Goals (SDGs) Ke-6: Air Bersih dan Sanitasi Layak

