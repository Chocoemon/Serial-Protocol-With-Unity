void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);// 전원이 들어옴 유무를 보여주는 led 
  pinMode(7,OUTPUT);// 연결이 성공적으로 이루어졌음을 보여주는 led 
  pinMode(6,OUTPUT);// 키보드를 누르면 켜지고 꺼지는 led 
  digitalWrite(8,HIGH); // 전원이 들어와있으면, 상시전원 공급 
}

void loop() {
   delay(5);
   if(Serial.available()){
      char data = Serial.read();
      switch(data){
        case 'o':
          digitalWrite(6, HIGH);
          break;

        case 'c':
         digitalWrite(6, LOW);
          break;

        case 's':
          digitalWrite(7, HIGH);
          break;
      }
   }
}
