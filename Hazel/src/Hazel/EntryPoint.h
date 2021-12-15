#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplicaton();

int main(int argc, char** argv) {
	
	Hazel::Log::Init();
	HZ_CORE_ERROR("Hello Jcq");
	int a = 10;
	HZ_INFO("a == {0}", a);

	auto app = Hazel::CreateApplicaton();
	app->Run();
	delete app;
}

#endif
