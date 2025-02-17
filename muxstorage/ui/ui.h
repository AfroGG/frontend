// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: muxstorage

#ifndef _MUXSTORAGE_UI_H
#define _MUXSTORAGE_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "../../lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_scrStorage
void ui_scrStorage_screen_init(void);
extern lv_obj_t * ui_scrStorage;
extern lv_obj_t * ui_pnlWall;
extern lv_obj_t * ui_imgWall;
extern lv_obj_t * ui_pnlBox;
extern lv_obj_t * ui_imgBox;
extern lv_obj_t * ui_pnlHeader;
extern lv_obj_t * ui_lblDatetime;
extern lv_obj_t * ui_lblTitle;
extern lv_obj_t * ui_conGlyphs;
extern lv_obj_t * ui_staBluetooth;
extern lv_obj_t * ui_staNetwork;
extern lv_obj_t * ui_staCapacity;
extern lv_obj_t * ui_pnlContent;
extern lv_obj_t * ui_lblBIOS;
extern lv_obj_t * ui_lblConfig;
extern lv_obj_t * ui_lblCatalogue;
extern lv_obj_t * ui_lblFav;
extern lv_obj_t * ui_lblMusic;
extern lv_obj_t * ui_lblSave;
extern lv_obj_t * ui_lblScreenshot;
extern lv_obj_t * ui_lblTheme;
extern lv_obj_t * ui_pnlGlyph;
extern lv_obj_t * ui_icoBIOS;
extern lv_obj_t * ui_icoConfig;
extern lv_obj_t * ui_icoCatalogue;
extern lv_obj_t * ui_icoFav;
extern lv_obj_t * ui_icoMusic;
extern lv_obj_t * ui_icoSave;
extern lv_obj_t * ui_icoScreenshot;
extern lv_obj_t * ui_icoTheme;
extern lv_obj_t * ui_pnlHighlight;
extern lv_obj_t * ui_droBIOS;
extern lv_obj_t * ui_droConfig;
extern lv_obj_t * ui_droCatalogue;
extern lv_obj_t * ui_droFav;
extern lv_obj_t * ui_droMusic;
extern lv_obj_t * ui_droSave;
extern lv_obj_t * ui_droScreenshot;
extern lv_obj_t * ui_droTheme;
extern lv_obj_t * ui_pnlFooter;
extern lv_obj_t * ui_lblNavAGlyph;
extern lv_obj_t * ui_lblNavA;
extern lv_obj_t * ui_lblNavBGlyph;
extern lv_obj_t * ui_lblNavB;
extern lv_obj_t * ui_lblNavCGlyph;
extern lv_obj_t * ui_lblNavC;
extern lv_obj_t * ui_lblNavXGlyph;
extern lv_obj_t * ui_lblNavX;
extern lv_obj_t * ui_lblNavYGlyph;
extern lv_obj_t * ui_lblNavY;
extern lv_obj_t * ui_lblNavZGlyph;
extern lv_obj_t * ui_lblNavZ;
extern lv_obj_t * ui_lblNavMenuGlyph;
extern lv_obj_t * ui_lblNavMenu;
extern lv_obj_t * ui_pnlMessage;
extern lv_obj_t * ui_lblMessage;
extern lv_obj_t * ui_pnlHelp;
extern lv_obj_t * ui_pnlHelpMessage;
extern lv_obj_t * ui_lblHelpHeader;
extern lv_obj_t * ui_lblHelpContent;
extern lv_obj_t * ui_pnlProgressBrightness;
extern lv_obj_t * ui_icoProgressBrightness;
extern lv_obj_t * ui_barProgressBrightness;
extern lv_obj_t * ui_pnlProgressVolume;
extern lv_obj_t * ui_icoProgressVolume;
extern lv_obj_t * ui_barProgressVolume;
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
LV_FONT_DECLARE(ui_font_JGS_Ascii);
LV_FONT_DECLARE(ui_font_NotoSans);
LV_FONT_DECLARE(ui_font_NotoSansBig);
LV_FONT_DECLARE(ui_font_NotoSansSmall);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
