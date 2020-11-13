#ifndef CONTROLLER___
#define CONTROLLER___

#include <windows.h>
#include <SDL.h>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

struct key{
    bool key_n1, key_n2, key_n3, key_n4, key_n5, key_n6, key_n7, key_n8, key_n9, key_n0;
    bool key_A, key_B, key_C, key_D, key_E, key_F, key_G, key_H, key_I, key_J, key_K, key_L, key_M;
    bool key_N, key_O, key_P, key_Q, key_R, key_S, key_T, key_U, key_V, key_W, key_X, key_Y, key_Z;
    bool key_period, key_coma, key_semicolon, key_slash, key_bslash, key_bracket;
    bool key_bbracket, key_quote, key_equal, key_minus, key_bquote, key_space;
    bool key_tab, key_shift, key_ctrl, key_enter, key_backspace, key_delete;
    bool key_alt, key_home, key_end, key_insert, key_escape, key_pgup, key_pgdn;
    bool key_arrup, key_arrdn, key_arrlf, key_arrrg;
};

#ifdef __cplusplus
extern "C"
{
#endif

class controller{
    private:
        key controllerkey;
        SDL_Event event;
    public:
        controller();
        void DLL_EXPORT updateKey();
        key* DLL_EXPORT get();
        SDL_Event* DLL_EXPORT gEvent();
};

controller DLL_EXPORT controlIns();

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
