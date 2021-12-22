#pragma once

#include "Core.h"
#include "Window.h"
#include "LayerStack.h"
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

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);

		inline Window& GetWindow() { return *m_window; }

		inline static Application& Get() { return *s_Instance; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_window;
		bool m_runing;
		LayerStack m_layerStack;

	private:
		static Application* s_Instance;
	};

	// To be defined in client
	Application* CreateApplicaton();
}

