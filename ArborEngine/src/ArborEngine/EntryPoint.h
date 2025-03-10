 #pragma once

#ifdef AE_PLATFORM_WINDOWS

extern ArborEngine::Application* ArborEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = ArborEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // AE_PLATFORM_WINDOWS
