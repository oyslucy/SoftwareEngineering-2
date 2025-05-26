# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./boundary -I./control -I./entity

# 실행 파일 이름
TARGET = bike_app

# 소스 파일 정의
SRCS = \
main.cpp \
SignUpUI.cpp \
LoginUI.cpp \
LogoutUI.cpp \
RegisterBicycleUI.cpp \
RentalBicycleUI.cpp \
ViewRentalInfoUI.cpp \
SignUp.cpp \
Login.cpp \
Logout.cpp \
RegisterBicycle.cpp \
RentalBicycle.cpp \
ViewRentalInfo.cpp \
User.cpp \
UserCollection.cpp \
Bicycle.cpp \
BicycleCollection.cpp \
ExitUI.cpp \
Exit.cpp

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
