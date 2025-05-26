cmake_minimum_required(VERSION 3.10)
project(SoftwareEngineeringAssignment)

set(CMAKE_CXX_STANDARD 17)

add_executable(SoftwareEngineeringAssignment main.cpp
        AddBicycleControl.cpp
        AddBicycleUI.cpp
        Bicycle.cpp
        BicycleCollection.cpp
        CurrentUser.cpp
        LoginControl.cpp
        LoginUI.cpp
        LogoutControl.cpp
        LogoutUI.cpp
        RegisterControl.cpp
        RegisterUI.cpp
        RentalBicycleControl.cpp
        RentalBicycleUI.cpp
        ShowRentedBicyclesControl.cpp
        ShowRentedBicyclesUI.cpp
        User.cpp
        UserCollection.cpp
        QuitUI.cpp
        QuitControl.cpp)