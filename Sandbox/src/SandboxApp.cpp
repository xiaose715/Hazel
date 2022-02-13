#include <Hazel.h>
#include <imgui/imgui.h>

class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer() 
		:Layer("Example") 
	{
	
	}

	void OnUpdate() override 
	{
		if (Hazel::Input::IsKeyPressed(HZ_KEY_TAB)) 
			HZ_INFO("TAB PRESSED!");
	}

	virtual void OnImGuiRender() override 
	{
		ImGui::Begin("Example");
		ImGui::Text("Test");
		ImGui::End();
	}

	void OnEvent(Hazel::Event& event) override 
	{

	}

};

class Sandbox : public Hazel::Application 
{
public:
	Sandbox() 
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox() 
	{
	
	}
};

Hazel::Application* Hazel::CreateApplicaton() 
{
	return new Sandbox();
}