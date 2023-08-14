cmake_minimum_required(VERSION 3.16)
PROJECT(helloworld C CXX)
find_package(Boost COMPONENTS thread REQUIRED)

add_executable(helloworld 
	main.cpp)


	target_link_libraries(
		helloworld
		Boost::thread
	  )