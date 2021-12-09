#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		virtual ~Application();
		Application();
		void Run();
	};

	// To be defined in client
	Application* CreateApplicaton();
}

