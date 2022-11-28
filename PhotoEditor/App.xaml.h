// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "App.xaml.g.h"

namespace winrt::PhotoEditor::implementation
{
    struct App : AppT<App>
    {
        App();
        Microsoft::UI::Xaml::Controls::Frame CreateRootFrame();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);
        static winrt::Microsoft::UI::Xaml::Window Window() { return window; };
        void OnNavigationFailed(IInspectable const&, Microsoft::UI::Xaml::Navigation::NavigationFailedEventArgs const&);

    private:
        static winrt::Microsoft::UI::Xaml::Window window;
        //winrt::Microsoft::UI::Xaml::Window window{ nullptr };
    };
}
