#include "Animation.h"

#include <iostream>
#include <thread>
#include <chrono> 

Animation::Animation(std::string_view animFile) {
	using namespace std;
	// commented out using namespace std::chrono_literals;
	std::cout << "[Animation] Loading:" << animFile << ' ';
	for (int i = 0; i < 10; ++i) {
		std::cout << '.';
		std::this_thread::sleep_for(200ms);
	}
	std::cout << '\n';
	m_AnimationData.assign("^^^^^^");
}
