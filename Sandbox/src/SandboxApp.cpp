#include <Hazel.h>

class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer() 
		:Layer("Example") {
	
	}

	void OnUpdate() override {
		if (Hazel::Input::IsKeyPressed(HZ_KEY_TAB)) {
			HZ_INFO("TAB PRESSED!");
		}
	}

	void OnEvent(Hazel::Event& event) override {

	}

};

class Sandbox : public Hazel::Application 
{
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new Hazel::ImGuiLayer());
	}

	~Sandbox() {
	
	}
};

Hazel::Application* Hazel::CreateApplicaton() {
	return new Sandbox();
}