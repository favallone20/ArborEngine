#include "Arbor_Engine.h"

class Sandbox : public ArborEngine::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{
	}
};

ArborEngine::Application* ArborEngine::CreateApplication()
{
	return new Sandbox();
}

