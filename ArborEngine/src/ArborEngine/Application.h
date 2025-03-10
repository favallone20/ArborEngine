#pragma once

#include "Core.h"

namespace ArborEngine
{
	class ARBOR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}