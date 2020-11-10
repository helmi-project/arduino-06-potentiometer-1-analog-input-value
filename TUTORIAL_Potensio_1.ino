/*
 * TUTORIAL POTENSIOMETER PADA ARDUINO
 * 
 * Pinout (dari kiri ke kanan potensiometer) :
 * GND,A0,VCC
 * 
 * Untuk membaca nilai dari pin analog (nilai 0 - 1023)
 */

void setup() {
  pinMode(A0,INPUT); //set A0 menjadi input
  Serial.begin(115200); //memulai komunikasi serial pada baud rate 115200
  Serial.println("Mencoba potensiometer pada Arduino");
}

void loop() {
  int hasil = analogRead(A0); //ambil data nilai A0 dan simpan ke variabel hasil 
  Serial.println("Nilai dari potensio : " + String(hasil)); //tampilkan pada serial monitor
  delay(500);  //jeda waktu 500 mS
}
