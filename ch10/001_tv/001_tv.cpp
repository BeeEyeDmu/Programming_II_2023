// 001_tv.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class TV {
private:
  bool powerOn;
  int channel;
  int volume;
public:
  void on() { powerOn = true; }
  void off() { powerOn = false; }
  void setChannel(int ch) { if (ch >= 1 && ch <= 999) channel = ch; }
  int getChannel() { return channel; }
  void setVolume(int vol) { if (vol >= 0 && vol <= 100) volume = vol;  }
  int getVolume() { return volume; }
};

int main()
{
  TV mytv;
   
  mytv.on();               // mytv.powerOn = true;
  mytv.setChannel(10);  //  mytv.channel = 10;
  mytv.setVolume(50);  //  mytv.getVolume = 50;

  cout << "현재 채널은 " << mytv.getChannel() << endl;
  cout << "현재 볼륨은 " << mytv.getVolume() << endl;
}
