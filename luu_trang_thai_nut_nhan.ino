//khai báo biến
int nutnhan = 2; // định nghĩa chân số 0 là button
int t = 0; // khai báo led và biến
int status1;// biến lưu các trạng thái nút nhấn
// viết hàm chống dội
boolean chong_doi()// int char float ngoại trừ void
{
  int sta =!digitalRead(nutnhan); // đọc trạng thái nút nhấn
  return sta;// khi co nhan nut la true
}
// khởi tạo
void setup()
{
    Serial.begin(9600);
    pinMode(nutnhan,INPUT); // in
  
}
void loop() // vong lap
{
  int buttonState = digitalRead(nutnhan);
  //Serial.println(buttonState);
  status1 = chong_doi();
  if(status1==true)
  {
    {
      t=!t;// đảo trạng thái
    }
    while(status1==true){status1=chong_doi();}
  }
  Serial.println(t);
}
