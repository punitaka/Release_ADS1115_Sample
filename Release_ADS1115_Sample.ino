// ChatGPTの回答のままでは動かなかったのは、２行目のincrude文でした（更新しています）
#include <Adafruit_ADS1X15.h>
#include <Wire.h>

Adafruit_ADS1115 ads;  // ADS1115オブジェクトを作成

void setup(void) {
  Serial.begin(9600);
  Serial.println("Hello!");

  delay(5000);
  Serial.println("Go!");

  if (!ads.begin()) {
    Serial.println("ADS1115 not found!");
    while (1);
  }
}

void loop(void) {
  int16_t adc0, adc1, adc2, adc3;

  // A0しか使わないのでA0以外はコメントアウトしました
  adc0 = ads.readADC_SingleEnded(0);
  //adc1 = ads.readADC_SingleEnded(1);
  //adc2 = ads.readADC_SingleEnded(2);
  //adc3 = ads.readADC_SingleEnded(3);

  // A0しか使わないのでA0以外はコメントアウトしました
  Serial.print("ADC0: "); Serial.println(adc0);
  //Serial.print("ADC1: "); Serial.println(adc1);
  //Serial.print("ADC2: "); Serial.println(adc2);
  //Serial.print("ADC3: "); Serial.println(adc3);

  // 0.5秒に1回計測します。時間調整したければ”500”を変更してミリ秒を指定してください。
  delay(500);
}