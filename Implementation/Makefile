# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./boundary -I./control -I./entity

# 실행 파일 이름
TARGET = bike_app

# 소스 파일 정의
SRCS = \
    main.cpp \
    boundary/SignUpUI/SignUpUI.cpp \
    boundary/LoginUI/LoginUI.cpp \
    boundary/LogoutUI/LogoutUI.cpp \
    boundary/RegisterBicycleUI/RegisterBicycleUI.cpp \
    boundary/RentalBicycleUI/RentalBicycleUI.cpp \
    boundary/ViewRentalInfoUI/ViewRentalInfoUI.cpp \
    control/SignUp/SignUp.cpp \
    control/Login/Login.cpp \
    control/Logout/Logout.cpp \
    control/RegisterBicycle/RegisterBicycle.cpp \
    control/RentalBicycle/RentalBicycle.cpp \
    control/ViewRentalInfo/ViewRentalInfo.cpp \
    entity/User/User.cpp \
    entity/UserCollection/UserCollection.cpp \
    entity/Bicycle/Bicycle.cpp \
    entity/BicycleCollection/BicycleCollection.cpp

# 객체 파일은 .o로
OBJS = $(SRCS:.cpp=.o)

# 기본 빌드
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

# 개별 .o 파일 빌드 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 정리용
clean:
	rm -f $(OBJS) $(TARGET)

# 강제 재컴파일
rebuild: clean all