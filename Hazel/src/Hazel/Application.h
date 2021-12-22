#pragma once

#include "Core.h"
#include "Window.h"
#include "Hazel/Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		virtual ~Application();
		Application();

		void OnEvent(Event&);

		void Run();
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_window;
		bool m_runing;
	};

	// To be defined in client
	Application* CreateApplicaton();
}

