#pragma once

#include "Application.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplicaton();

int main(int argc, char** argv) {
	auto app = Hazel::CreateApplicaton();
	app->Run();
	delete app;
}

#endif
