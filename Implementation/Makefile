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

# # 컴파일러 설정
# CXX = g++
# CXXFLAGS = -std=c++17 -Wall -I./boundary -I./control -I./entity

# # 실행 파일 이름
# TARGET = bike_app

# # 소스 파일 정의
# SRCS = \
#     main.cpp \
#     boundary/SignUpUI/SignUpUI.cpp \
#     boundary/LoginUI/LoginUI.cpp \
#     boundary/LogoutUI/LogoutUI.cpp \
#     boundary/RegisterBicycleUI/RegisterBicycleUI.cpp \
#     boundary/RentalBicycleUI/RentalBicycleUI.cpp \
#     boundary/ViewRentalInfoUI/ViewRentalInfoUI.cpp \
#     control/SignUp/SignUp.cpp \
#     control/Login/Login.cpp \
#     control/Logout/Logout.cpp \
#     control/RegisterBicycle/RegisterBicycle.cpp \
#     control/RentalBicycle/RentalBicycle.cpp \
#     control/ViewRentalInfo/ViewRentalInfo.cpp \
#     entity/User/User.cpp \
#     entity/UserCollection/UserCollection.cpp \
#     entity/Bicycle/Bicycle.cpp \
#     entity/BicycleCollection/BicycleCollection.cpp

# HEADERS = \
#     boundary/SignUpUI/SignUpUI.h \
#     boundary/LoginUI/LoginUI.h \
#     boundary/LogoutUI/LogoutUI.h \
#     boundary/RegisterBicycleUI/RegisterBicycleUI.h \
#     boundary/RentalBicycleUI/RentalBicycleUI.h \
#     boundary/ViewRentalInfoUI/ViewRentalInfoUI.h \
#     control/SignUp/SignUp.h \
#     control/Login/Login.h \
#     control/Logout/Logout.h \
#     control/RegisterBicycle/RegisterBicycle.h \
#     control/RentalBicycle/RentalBicycle.h \
#     control/ViewRentalInfo/ViewRentalInfo.h \
#     entity/User/User.h \
#     entity/UserCollection/UserCollection.h \
#     entity/Bicycle/Bicycle.h \
#     entity/BicycleCollection/BicycleCollection.h

# OBJS = $(SRCS:.cpp=.o)

# # 기본 빌드
# all: $(TARGET)

# $(TARGET): $(OBJS)
# 	$(CXX) -o $@ $^

# # 개별 .o 파일 빌드 규칙
# %.o: %.cpp $(HEADERS)
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# # 정리용
# clean:
# 	rm -f $(OBJS) $(TARGET)

# # 강제 재컴파일
# rebuild: clean all