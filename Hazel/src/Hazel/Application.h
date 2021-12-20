#pragma once

#include "Core.h"
#include "Window.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		virtual ~Application();
		Application();
		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_runing;
	};

	// To be defined in client
	Application* CreateApplicaton();
}

