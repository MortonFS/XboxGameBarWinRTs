//
// Widget1.xaml.h
// Declaration of the Widget1 class.
//

#pragma once

#include "Widget1.g.h"

namespace Cheat
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public ref class Widget1 sealed
    {
    public:
        Widget1();
        void canvasSwapChainPanel_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}

class Globals {
public:
    bool should_display_menu{};
    Microsoft::Gaming::XboxGameBar::XboxGameBarWidget^ m_widget_stored{ nullptr };
};

extern Globals g_menu;
