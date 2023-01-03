#pragma once

#include "../sdk/includes.h"
#include "../sdk/unreal/color.h"

class CMenu : public Singleton<CMenu>
{

public:

	void Render();
	bool Initialize();

    ImFont* combo_arrow;
    ImFont* medium_bigger;
    ImFont* weapons;
    ImFont* medium;
    ImFont* bold;

    Color AccentColor = Color{};

    float anim_speed = 0.05f, m_alpha = 1.f;

    bool opened = true;
    ImVec2 screen_res{ 000, 000 };
    ImVec2 window_pos{ 0, 0 };
    ImVec2 window_size{ 400, 300 };
    DWORD  window_flags = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollWithMouse;

};