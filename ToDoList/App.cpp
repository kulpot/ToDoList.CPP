#include "App.h"
#include "MainFrame.h"

bool App::OnInit()
{
    MainFrame* mainFrame = new MainFrame("To-Do List");
    mainFrame->SetClientSize(800, 600);
    mainFrame->Center();
    mainFrame->Show();
    return true;
    //return false;
}
