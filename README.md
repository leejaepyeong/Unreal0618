# Unreal0618

### 애니메이션 만들기

![image](https://user-images.githubusercontent.com/80494367/122491338-c2c1a900-d01e-11eb-9f1b-678203cc2d7f.png)


##### state scene



![image](https://user-images.githubusercontent.com/80494367/122491993-f5b86c80-d01f-11eb-91d8-5c96313fc22b.png)

### 블랜드 스페이스 Bland Space

가로축  디렉션
세로축  스피드


![image](https://user-images.githubusercontent.com/80494367/122492803-6ca23500-d021-11eb-8f99-d62378e5d138.png)

walk Run 스피드 값  Get 하기
![image](https://user-images.githubusercontent.com/80494367/122495506-20f18a80-d025-11eb-879b-69ec9012046d.png)

![image](https://user-images.githubusercontent.com/80494367/122495527-28189880-d025-11eb-9f92-56ef270985e6.png)


![image](https://user-images.githubusercontent.com/80494367/122493653-0a4a3400-d023-11eb-88e4-d02f9f7bc15c.png)



ThirdPersonCharacter 형변환

GetPlayer Character : 플레이어 캐릭터 구하기

Get Velocity  : 속도

Get Actor Rotation : 회전 값

Vector Length Squard  :  벡터 값의 제곱을 반환

Calculate Direction:  바라보는 방향  계산하기

set Speed : 

set Direction :





## 06/23

### 랜드스케이프
#### 부양 만들기


![image](https://user-images.githubusercontent.com/80494367/123016686-26284e00-d406-11eb-84c4-1c18c54da52d.png)

플러그인 뷰 체크 한 후  water 찾기


![image](https://user-images.githubusercontent.com/80494367/123016817-5ec82780-d406-11eb-8b69-de194cc2d30e.png)


![image](https://user-images.githubusercontent.com/80494367/123017516-b5823100-d407-11eb-8d9a-54455a9ed274.png)

워터 엑터


![image](https://user-images.githubusercontent.com/80494367/123024739-81613d00-d414-11eb-8e7a-466d9e78fb1e.png)

부양 만들기



## 06/25

### 언리얼  

#### 에픽게임즈 라이브러리에서  Blade grass Land 프로젝트에 추가

![image](https://user-images.githubusercontent.com/80494367/123350902-ecd31800-d596-11eb-8904-472136b7d059.png)

![image](https://user-images.githubusercontent.com/80494367/123363542-b94fb800-d5ad-11eb-8917-00f25e69084a.png)


![image](https://user-images.githubusercontent.com/80494367/123363507-a9d06f00-d5ad-11eb-89c7-b6a2af50bbba.png)

![image](https://user-images.githubusercontent.com/80494367/123363483-9c1ae980-d5ad-11eb-9402-2734b0fb5530.png)


헤더파일 + 씨피피 파일

![image](https://user-images.githubusercontent.com/80494367/124677300-17a85f00-defb-11eb-8d39-d9ea7ad09ada.png)

경로를 복사한 이후 코드에서 다음과 같이 경로 참조가능

![image](https://user-images.githubusercontent.com/80494367/124677270-06f7e900-defb-11eb-9b1a-783a9db494a2.png)



0707

![image](https://user-images.githubusercontent.com/80494367/124707529-e6985080-df33-11eb-8a53-80fb2ae90086.png)

![image](https://user-images.githubusercontent.com/80494367/124707377-b51f8500-df33-11eb-82fe-ebe5a75fc11e.png)
헤더구현 및 c++ 필요 함수 구현

![image](https://user-images.githubusercontent.com/80494367/124707419-c36da100-df33-11eb-9a3e-ca4d5fe3c91b.png)

로그 띄우기

![image](https://user-images.githubusercontent.com/80494367/124707457-d08a9000-df33-11eb-91a3-2f77f3138be9.png)



![image](https://user-images.githubusercontent.com/80494367/124707281-915c3f00-df33-11eb-982b-91fc09364655.png)

![image](https://user-images.githubusercontent.com/80494367/124707322-a1741e80-df33-11eb-95cf-0a86dea41706.png)
![image](https://user-images.githubusercontent.com/80494367/124707354-ad5fe080-df33-11eb-8825-a1784e9aaba9.png)


플레이어의 입장

플레이어 컨트롤 : 플레이어를 대변하는 무형의 액터

폰 : 플레이어에게 조종당하는 액터 , 다른 폰으로도 조작 가능

순서 : 컨트롤 생성 > 폰 생성 > 폰에 빙의 > 게임 시작

플레이어가 로그인 완료 시 PostLogin 이벤트 함수가 호출되어 폰 생성및 빙의 작업

![image](https://user-images.githubusercontent.com/80494367/124711650-4e04cf00-df39-11eb-8595-ff328d371958.png)

![image](https://user-images.githubusercontent.com/80494367/124711706-5f4ddb80-df39-11eb-8e73-261fd8228d56.png)

![image](https://user-images.githubusercontent.com/80494367/124711691-5a892780-df39-11eb-9b6c-3572dd72ca0d.png)

![image](https://user-images.githubusercontent.com/80494367/124711731-65dc5300-df39-11eb-80c3-aaa62e97518d.png)
![image](https://user-images.githubusercontent.com/80494367/124711749-6b399d80-df39-11eb-868e-748fa669109d.png)



폰의 제작과 조작

폰 변형
![image](https://user-images.githubusercontent.com/80494367/124715030-78588b80-df3d-11eb-9847-ce4d2fc6acf2.png)

![image](https://user-images.githubusercontent.com/80494367/124715075-85757a80-df3d-11eb-9b73-69815eee3d41.png)

![image](https://user-images.githubusercontent.com/80494367/124715110-91613c80-df3d-11eb-851b-245d130bd54e.png)

해당 메쉬 스켈리탈  카메라 위치로  폰 형성

폰 조작

![image](https://user-images.githubusercontent.com/80494367/124715275-c3729e80-df3d-11eb-8789-0e6fa2239cbe.png)

액션 매핑 : 조이스틱 버튼 같은 액션
축 매핑 : 조이스틱 레버의미 ( -1 0 1 사이의 값토대)
![image](https://user-images.githubusercontent.com/80494367/124715599-2401db80-df3e-11eb-9ed5-696945689151.png)

매핑 추가

InputCompinent를 통해 입력설정 처리

![image](https://user-images.githubusercontent.com/80494367/124717030-b48ceb80-df3f-11eb-8678-a3f3c2aba30e.png)
![image](https://user-images.githubusercontent.com/80494367/124717062-bb1b6300-df3f-11eb-8555-0651c660e284.png)



애니메이션 설정



0709

게임 조정 카메라

카메라 2개 전환 방법
![image](https://user-images.githubusercontent.com/80494367/125013214-621a0f00-e0a6-11eb-99b4-92115619caf0.png)

![image](https://user-images.githubusercontent.com/80494367/125013140-4151b980-e0a6-11eb-9db9-09b73ca3cba8.png)
![image](https://user-images.githubusercontent.com/80494367/125013149-49115e00-e0a6-11eb-90d5-fe92d05dfa53.png)



콜라이더






