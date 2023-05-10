const int solenoidPin = 2;

void setup() {
  // 솔레노이드 핀을 출력 모드로 설정하기
  pinMode(solenoidPin, OUTPUT);
}

void loop() {
  // 솔레노이드 활성화(고전압)
  digitalWrite(solenoidPin, HIGH);   
  delay(1000);                       // 1초 동안 활성화 상태로 유지
  
  // 솔레노이드 비활성화(저전압)
  digitalWrite(solenoidPin, LOW);    
  delay(1000);                       //  1초 동안 비활성화 상태로 유지
}
