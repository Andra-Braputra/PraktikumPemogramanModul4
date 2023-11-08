while True:
    print("Pilih operasi:")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pil = input("Masukkan pilihan : ")

    if pil in ['1', '2', '3', '4']:
        a = float(input("Masukkan angka pertama: "))
        b = float(input("Masukkan angka kedua: "))

        if pil == '1':
            print(f"Hasil pertambahan antara {a:.2f} dengan {b:.2f} adalah {a + b:.2f}")
        elif pil == '2':
            print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {a - b:.2f}")
        elif pil == '3':
            print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {a * b:.2f}")
        elif pil == '4':
            print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {a / b:.2f}")
    elif pil == '5':
        print("Terimakasih, telah menggunakan kalkulator Andra.")
        break
    else:
        print("Input anda salah, silahkan coba lagi.")