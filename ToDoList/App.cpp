#include "App.h"
#include "MainFrame.h"

bool App::OnInit()
{
    MainFrame* mainFrame = new MainFrame("To-Do List");

    return false;
}
