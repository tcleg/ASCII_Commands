//*********************************************************************************
// ASCII Terminal Commands - Platform Independent
// 
// Revision: 1.0
// 
// Description: Usually, this library is used for advanced communication with a
// computer terminal. It defines the special characters and strings used
// to alter the display of output in a terminal window on a computer such as
// Putty.
//
// Revisions can be found here:
// https://github.com/tcleg
// 
// Copyright (C) 2014 Trent Cleghorn , <trentoncleghorn@gmail.com>
// 
//                                  MIT License
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, andór sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//*********************************************************************************

// 
// Header Guard
// 
#ifndef ASCII_COMMANDS_H
#define ASCII_COMMANDS_H

// 
// C Binding for C++ Compilers
// 
#ifdef __cplusplus
extern "C"
{
#endif

//*********************************************************************************
// Macros
//*********************************************************************************

// 
// Advanced Display Features
// 
#define ESCAPE_SEQ          "\033"      // Escape character sequence
#define CLR_SCREEN          "\033[2J"   // Clear entire screen
#define CLR_SCREEN_CRSR_UP  "\033[1J"   // Clear screen from cursor up
#define CLR_SCREEN_CRSR_DN  "\033[0J"   // Clear screen from cursor down
#define CURSOR_UP_LEFT      "\033[H"    // Move cursor to upper left corner
#define CLR_LINE_CRSR_R     "\033[0K"   // Clear line from cursor right, cursor position unchanged
#define CLR_LINE_CRSR_L     "\033[1K"   // Clear line from cursor left, cursor position unchanged 
#define CLR_LINE            "\033[2K"   // Clear current line, cursor position unchanged
#define HIDE_CURSOR         "\033[?25l" // Hides the cursor
#define SHOW_CURSOR         "\033[?25h" // Unhides the cursor

// 
// Font and Text Attributes
// 
#define ATTRIBUTES_RST      "\033[0m"   // Attributes reset (such as the font)
#define BOLD_FONT           "\033[1m"
#define RED_FONT            "\033[31m"
#define GREEN_FONT          "\033[32m"
#define YELLOW_FONT         "\033[33m"
#define BLUE_FONT           "\033[34m"
#define MAGENTA_FONT        "\033[35m"
#define CYAN_FONT           "\033[36m"
#define WHITE_FONT          "\033[37m"
#define UNDERLINE_MODE      "\033[4m"

// 
// Character Specific Display Features
// 
#define BACKSPACE           "\b"
#define HORIZONTAL_TAB      "\t"
#define NEWLINE             "\n"      // Also called Linefeed
#define VERTICAL_TAB        "\v"
#define NEW_PAGE            "\f"      // Also called Formfeed            
#define CARRIAGE_RETURN     "\r"      // Returns to the beginning of the current line

// 
// End of C Binding
// 
#ifdef __cplusplus
}
#endif

#endif  // ASCII_COMMANDS_H
