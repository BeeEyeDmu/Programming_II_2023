// 02_Message.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

class Image {
public:
  operator string() {
    return "사진";
  }
};

class Message {
private:
  int sendTime;
  string sendName;
public:
  Message(int sendTime, string sendName) {
    this->sendTime = sendTime;
    this->sendName = sendName;  
  }
  int GetSendTime() const { return sendTime; }
  string GetSendName() const { return sendName; }
};

class TextMessage : public Message {
private:
  string text;
public:
  TextMessage(int sendTime, string sendName, string text) 
    : Message(sendTime, sendName) { // 부모 클래스 생성자를 호출
    this->text = text;
  }
  string GetText() const {
    return text;
  }
};

class ImageMessage : public Message {
private:
  Image* image;
public:
  ImageMessage(int sendTime, string sendName, Image* image)
    : Message(sendTime, sendName) {
    this->image = image;
  }
  Image* GetImage() const {
    return image;
  }
};

int main()
{
  Image* dogImage = new Image;
  TextMessage* hello = new TextMessage(10, "강병익", "안녕");
  ImageMessage* dog = new ImageMessage(20, "강병익", dogImage);

  cout << "보낸 시간 : " << hello->GetSendTime() << endl;
  cout << "보낸 사람 : " << hello->GetSendName() << endl;
  cout << "내용 : " << hello->GetText() << endl;

  cout << "보낸 시간 : " << dog->GetSendTime() << endl;
  cout << "보낸 사람 : " << dog->GetSendName() << endl;
  cout << "내용 : " << (string)*dog->GetImage() << endl;

  delete dogImage;
  delete hello;
  delete dog;
}

