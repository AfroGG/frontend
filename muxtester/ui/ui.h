// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: muxtester

#ifndef _MUXTESTER_UI_H
#define _MUXTESTER_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "../../lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_scrTester
void ui_scrTester_screen_init(void);
extern lv_obj_t * ui_scrTester;
extern lv_obj_t * ui_pnlWall;
extern lv_obj_t * ui_imgWall;
extern lv_obj_t * ui_pnlHeader;
extern lv_obj_t * ui_lblDatetime;
extern lv_obj_t * ui_lblTitle;
extern lv_obj_t * ui_conGlyphs;
extern lv_obj_t * ui_staBluetooth;
extern lv_obj_t * ui_staNetwork;
extern lv_obj_t * ui_staCapacity;
extern lv_obj_t * ui_pnlContent;
extern lv_obj_t * ui_lblButton;
extern lv_obj_t * ui_lblFirst;
extern lv_obj_t * ui_pnlFooter;
extern lv_obj_t * ui_lblMessage;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_nothing_png);    // assets/nothing.png
LV_IMG_DECLARE(ui_img_muoskofi_png);    // assets/muoskofi.png


LV_FONT_DECLARE(ui_font_Awesome);
LV_FONT_DECLARE(ui_font_AwesomeBig);
LV_FONT_DECLARE(ui_font_AwesomeBrand);
LV_FONT_DECLARE(ui_font_AwesomeBrandSmall);
LV_FONT_DECLARE(ui_font_AwesomeSmall);
LV_FONT_DECLARE(ui_font_Gamepad);
LV_FONT_DECLARE(ui_font_GamepadNav);
LV_FONT_DECLARE(ui_font_NotoSans);
LV_FONT_DECLARE(ui_font_NotoSansBig);
LV_FONT_DECLARE(ui_font_NotoSansSmall);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
