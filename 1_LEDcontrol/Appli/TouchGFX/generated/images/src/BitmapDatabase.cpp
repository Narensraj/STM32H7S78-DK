// 4.23.2 0x4668562e
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_dark_theme_images_backgrounds_800x480_stone[]; // BITMAP_DARK_THEME_IMAGES_BACKGROUNDS_800X480_STONE_ID = 0, Size: 800x480 pixels
extern const unsigned char image_dark_theme_images_widgets_togglebutton_large_round_text_off_normal[]; // BITMAP_DARK_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_LARGE_ROUND_TEXT_OFF_NORMAL_ID = 1, Size: 170x60 pixels
extern const unsigned char image_dark_theme_images_widgets_togglebutton_large_round_text_on_action[]; // BITMAP_DARK_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_LARGE_ROUND_TEXT_ON_ACTION_ID = 2, Size: 170x60 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_dark_theme_images_backgrounds_800x480_stone, 0, 800, 480, 0, 0, 800, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 480, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_dark_theme_images_widgets_togglebutton_large_round_text_off_normal, 0, 170, 60, 19, 12, 55, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_dark_theme_images_widgets_togglebutton_large_round_text_on_action, 0, 170, 60, 96, 12, 55, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
