#include "Engine.h"
#include <iostream>

namespace Craft
{
	Engine::Engine()
	{}
	Engine::~Engine()
	{}
	
	void Engine::Run()
	{
		// 엔진 루프.
		while (true)
		{
			// 종료 조건 처리.
			if (isQuit)
			{
				break;
			}

			// 프레임 처리.

			// 입력 처리.
			ProcessInput();

			// 게임 이벤트 함수 호출.
			OnInitialized();

			// 게임 이벤트의 초기화 함수(1번만 호출).
			BeginPlay();

			// 게임 업데이트.
			Tick(1.0f / setting.framerate);

			// 화면 그리기.
			Draw();

			// 입력 상태 저장.
			SavePreviousInputStates();
		}

		// 종료 처리 함수 호출.
		Shutdown();
	}

	void Engine::Quit()
	{
		// 엔진 종료 플래그 설정.
		isQuit = true;
	}

	void Engine::ProcessInput()
	{}
	void Engine::OnInitialized()
	{}
	void Engine::BeginPlay()
	{}
	
	void Engine::Tick(float deltaTime)
	{
		// Todo: deltaTime 출력.
		std::cout
			<< "Engine::Tick() - deltaTime: "
			<< deltaTime 
			<< "\n";
	}

	void Engine::Draw()
	{}
	void Engine::SavePreviousInputStates()
	{}
	void Engine::Shutdown()
	{}
}