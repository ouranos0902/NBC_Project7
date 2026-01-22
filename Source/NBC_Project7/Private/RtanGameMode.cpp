#include "RtanGameMode.h"
#include "RtanPawn.h"
#include "RtanPlayerController.h"

ARtanGameMode::ARtanGameMode()
{
	DefaultPawnClass = ARtanPawn::StaticClass();
	PlayerControllerClass = APlayerController::StaticClass();
}

