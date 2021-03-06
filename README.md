# Serial-Protocol-With-Unity

### 1. 개요
- 유니티와 센서간의 시리얼 통신 방법을 학습하기 위해 간단한 토이 프로젝트를 기획해 시도해보고, 시리얼 통신 방식 구현에 대해서 학습하도록 한다. 
- 아두이노와 UNITY 간의 통신을 가능하게 한다 .


### 2. 과정 설명
- 아두이노와 컴퓨터를 연결하여 특정 키를 누르면, 신호가 전달되어 특정 액션이 일어나게 한다.
- 컴퓨터에서 LED를 키고 끌 수 있는 단방향 통신을 먼저 구현해보도록 한다. (First Step)
- 거꾸로 아두이노에서 유니티로 데이터를 보내려면 어떻게 해야하는지에 대해서 학습하고 구현한다. (Second Step)
- 이후, 블루투스 모듈을 이용하여 센서를 통해 값을 받으면 UGUI를 통해 값을 확인하고, 특정 키를 누르면 
다시 블루투스 모듈을 이용해 값을 전송해 특정 액션이 일어나도록 한다.


### 3. 각 단계로 이동하기 
 1. 유니티에서 특정 입력을 넣으면 LED를 키고 끌 수 있게 하기 (USB 포트를 통한 통신)
 2. 거리센서를 이용해 Reflect 되어오는 파장이 기준시보다 짧으면 빨간색을, 길면 초록색을 UGUI에 띄워줌 (USB 포트를 통한 통신)
 3. c#에서 아두이노와 양방향 통신( Read Thread, Write Thread)를 활성화 시키는 방식 
 4. 유니티 내에서 Object의 Transform 정보 (위치, 회전 정도)가 변하면, 이를 JSON으로  Serialize 해서 아두이노로 전송, 이를
    아두이노가 처리할 수 있도록 함수 만들기 



※ Reference 사이트 
- 1. 유니티 ROS# 프로젝트 참고 사이트 
- https://forum.unity.com/threads/ros-ros-ros-unity-communication-package.508725/ 

- 2. Arduino JSON 과정 참고 사이트 (아두이노가 받을 때!) 
- https://github.com/bblanchon/ArduinoJson
