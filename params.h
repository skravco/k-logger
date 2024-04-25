#ifndef PARAMS_H
#define PARAMS_H

#include <map>
#include <string>

namespace params {
const std::string filename = "keystrokes.txt";
const int max_keystrokes = 20;
const int newline_limit = 2;
const std::map<int, std::string> key_map = { { 30, "a" },
                                             { 48, "b" },
                                             { 46, "c" },
                                             { 32, "d" },
                                             { 18, "e" },
                                             { 33, "f" },
                                             { 34, "g" },
                                             { 35, "h" },
                                             { 23, "i" },
                                             { 36, "j" },
                                             { 37, "k" },
                                             { 38, "l" },
                                             { 50, "m" },
                                             { 49, "n" },
                                             { 24, "o" },
                                             { 25, "p" },
                                             { 16, "q" },
                                             { 19, "r" },
                                             { 31, "s" },
                                             { 20, "t" },
                                             { 22, "u" },
                                             { 47, "v" },
                                             { 17, "w" },
                                             { 45, "x" },
                                             { 21, "y" },
                                             { 44, "z" },
                                             { 2, "1" },
                                             { 3, "2" },
                                             { 4, "3" },
                                             { 5, "4" },
                                             { 6, "5" },
                                             { 7, "6" },
                                             { 8, "7" },
                                             { 9, "8" },
                                             { 10, "9" },
                                             { 11, "0" },
                                             { 28, "[Enter]" },
                                             { 57, "[Space]" },
                                             { 14, "[Backspace]" },
                                             { 15, "[Tab]" },
                                             { 12, "[Minus]" },
                                             { 13, "[Equal]" },
                                             { 26, "[LeftBracket]" },
                                             { 27, "[RightBracket]" },
                                             { 43, "[Semicolon]" },
                                             { 39, "[Apostrophe]" },
                                             { 40, "[Grave]" },
                                             { 51, "[Comma]" },
                                             { 52, "[Period]" },
                                             { 53, "[Slash]" },
                                             { 41, "[Backslash]" },
                                             { 86, "[KP_Enter]" },
                                             { 29, "[LeftCtrl]" },
                                             { 42, "[LeftShift]" },
                                             { 56, "[LeftAlt]" },
                                             { 125, "[LeftSuper]" },
                                             { 97, "[RightCtrl]" },
                                             { 54, "[RightShift]" },
                                             { 100, "[RightAlt]" },
                                             { 126, "[RightSuper]" },
                                             { 58, "[CapsLock]" },
                                             { 1, "[Esc]" },
                                             { 59, "[F1]" },
                                             { 60, "[F2]" },
                                             { 61, "[F3]" },
                                             { 62, "[F4]" },
                                             { 63, "[F5]" },
                                             { 64, "[F6]" },
                                             { 65, "[F7]" },
                                             { 66, "[F8]" },
                                             { 67, "[F9]" },
                                             { 68, "[F10]" },
                                             { 87, "[F11]" },
                                             { 88, "[F12]" },
                                             { 69, "[PrintScreen]" },
                                             { 70, "[ScrollLock]" },
                                             { 71, "[Pause]" },
                                             { 72, "[Insert]" },
                                             { 73, "[Home]" },
                                             { 74, "[PageUp]" },
                                             { 75, "[Delete]" },
                                             { 76, "[End]" },
                                             { 77, "[PageDown]" },
                                             { 78, "[Right]" },
                                             { 79, "[End]" },
                                             { 80, "[Down]" },
                                             { 81, "[Left]" },
                                             { 82, "[Up]" },
                                             { 83, "[NumLock]" },
                                             { 84, "[KP_Divide]" },
                                             { 85, "[KP_Multiply]" },
                                             { 86, "[KP_Subtract]" },
                                             { 89, "[KP_7]" },
                                             { 90, "[KP_8]" },
                                             { 91, "[KP_9]" },
                                             { 92, "[KP_Add]" },
                                             { 93, "[KP_4]" },
                                             { 94, "[KP_5]" },
                                             { 95, "[KP_6]" },
                                             { 96, "[KP_1]" },
                                             { 97, "[KP_2]" },
                                             { 98, "[KP_3]" },
                                             { 99, "[KP_0]" },
                                             { 100, "[KP_Decimal]" },
                                             { 102, "[F13]" },
                                             { 103, "[F14]" },
                                             { 104, "[F15]" },
                                             { 105, "[F16]" },
                                             { 106, "[F17]" },
                                             { 107, "[F18]" },
                                             { 108, "[F19]" },
                                             { 109, "[F20]" },
                                             { 110, "[F21]" },
                                             { 111, "[F22]" },
                                             { 112, "[F23]" },
                                             { 113, "[F24]" },
                                             { 114, "[Execute]" },
                                             { 115, "[Help]" },
                                             { 116, "[Menu]" },
                                             { 117, "[Select]" },
                                             { 118, "[Stop]" },
                                             { 119, "[Again]" },
                                             { 120, "[Undo]" },
                                             { 121, "[Cut]" },
                                             { 122, "[Copy]" },
                                             { 123, "[Paste]" },
                                             { 124, "[Find]" },
                                             { 125, "[Mute]" },
                                             { 126, "[VolumeUp]" },
                                             { 127, "[VolumeDown]" },
                                             { 128, "[LockingCapsLock]" },
                                             { 129, "[LockingNumLock]" },
                                             { 130, "[LockingScrollLock]" },
                                             { 131, "[KP_Comma]" },
                                             { 132, "[KP_EqualsAs400]" },
                                             { 133, "[International1]" },
                                             { 134, "[International2]" },
                                             { 135, "[International3]" },
                                             { 136, "[International4]" },
                                             { 137, "[International5]" },
                                             { 138, "[International6]" },
                                             { 139, "[International7]" },
                                             { 140, "[International8]" },
                                             { 141, "[International9]" },
                                             { 142, "[Lang1]" },
                                             { 143, "[Lang2]" },
                                             { 144, "[Lang3]" },
                                             { 145, "[Lang4]" },
                                             { 146, "[Lang5]" },
                                             { 147, "[Lang6]" },
                                             { 148, "[Lang7]" },
                                             { 149, "[Lang8]" },
                                             { 150, "[Lang9]" },
                                             { 151, "[AltErase]" },
                                             { 152, "[SysReq]" },
                                             { 153, "[Cancel]" },
                                             { 154, "[Clear]" },
                                             { 155, "[Prior]" },
                                             { 156, "[Return]" },
                                             { 157, "[Separator]" },
                                             { 158, "[Out]" },
                                             { 159, "[Oper]" },
                                             { 160, "[ClearAgain]" },
                                             { 161, "[CrSel]" },
                                             { 162, "[ExSel]" },
                                             { 163, "[KP_00]" },
                                             { 164, "[KP_000]" },
                                             { 165, "[ThousandsSeparator]" },
                                             { 166, "[DecimalSeparator]" },
                                             { 167, "[CurrencyUnit]" },
                                             { 168, "[CurrencySubUnit]" },
                                             { 169, "[KP_LeftParen]" },
                                             { 170, "[KP_RightParen]" },
                                             { 171, "[KP_LeftBrace]" },
                                             { 172, "[KP_RightBrace]" },
                                             { 173, "[KP_Tab]" },
                                             { 174, "[KP_Backspace]" },
                                             { 175, "[KP_A]" },
                                             { 176, "[KP_B]" },
                                             { 177, "[KP_C]" },
                                             { 178, "[KP_D]" },
                                             { 179, "[KP_E]" },
                                             { 180, "[KP_F]" },
                                             { 181, "[KP_XOR]" },
                                             { 182, "[KP_Power]" },
                                             { 183, "[KP_Percent]" },
                                             { 184, "[KP_Less]" },
                                             { 185, "[KP_Greater]" },
                                             { 186, "[KP_Ampersand]" },
                                             { 187, "[KP_DBLAmpersand]" },
                                             { 188, "[KP_VerticalBar]" },
                                             { 189, "[KP_DBLVerticalBar]" },
                                             { 190, "[KP_Colon]" },
                                             { 191, "[KP_Hash]" },
                                             { 192, "[KP_Space]" },
                                             { 193, "[KP_At]" },
                                             { 194, "[KP_Exclam]" },
                                             { 195, "[KP_MemStore]" },
                                             { 196, "[KP_MemRecall]" },
                                             { 197, "[KP_MemClear]" },
                                             { 198, "[KP_MemAdd]" },
                                             { 199, "[KP_MemSubtract]" },
                                             { 200, "[KP_MemMultiply]" },
                                             { 201, "[KP_MemDivide]" },
                                             { 202, "[KP_PlusMinus]" },
                                             { 203, "[KP_Clear]" },
                                             { 204, "[KP_ClearEntry]" },
                                             { 205, "[KP_Binary]" },
                                             { 206, "[KP_Octal]" },
                                             { 207, "[KP_Decimal]" },
                                             { 208, "[KP_Hexadecimal]" },
                                             { 209, "[LeftControl]" },
                                             { 210, "[LeftShift]" },
                                             { 211, "[LeftAlt]" },
                                             { 212, "[LeftGUI]" },
                                             { 213, "[RightControl]" },
                                             { 214, "[RightShift]" },
                                             { 215, "[RightAlt]" },
                                             { 216, "[RightGUI]" },
                                             { 224, "[Mode]" },
                                             { 225, "[AudioNext]" },
                                             { 226, "[AudioPrev]" },
                                             { 227, "[AudioStop]" },
                                             { 228, "[AudioPlay]" },
                                             { 229, "[AudioMute]" },
                                             { 230, "[MediaSelect]" },
                                             { 231, "[WWW]" },
                                             { 232, "[Mail]" },
                                             { 233, "[Calculator]" },
                                             { 234, "[Computer]" },
                                             { 235, "[AC_Search]" },
                                             { 236, "[AC_Home]" },
                                             { 237, "[AC_Back]" },
                                             { 238, "[AC_Forward]" },
                                             { 239, "[AC_Stop]" },
                                             { 240, "[AC_Refresh]" },
                                             { 241, "[AC_Bookmarks]" },
                                             { 242, "[BrightnessDown]" },
                                             { 243, "[BrightnessUp]" },
                                             { 244, "[DisplaySwitch]" },
                                             { 245, "[KBDIllumToggle]" },
                                             { 246, "[KBDIllumDown]" },
                                             { 247, "[KBDIllumUp]" },
                                             { 248, "[Eject]" },
                                             { 249, "[Sleep]" },
                                             { 250, "[App1]" },
                                             { 251, "[App2]" },
                                             { 0, "[Unknown]" } };
} // namespace params
#endif
