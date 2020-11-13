#include "controller.h"

controller DLL_EXPORT controlIns()
{
    controller temp = controller();
    return temp;
}

DLL_EXPORT controller::controller()
{
    controllerkey = {0,0,0,0,0,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,};
}

void DLL_EXPORT controller::updateKey()
{
    SDL_PollEvent(&event);

    if(event.type == SDL_KEYDOWN){
        switch(event.key.keysym.sym){
        case SDLK_0:
            controllerkey.key_n0 = true;
            break;
        case SDLK_1:
            controllerkey.key_n1 = true;
            break;
        case SDLK_2:
            controllerkey.key_n2 = true;
            break;
        case SDLK_3:
            controllerkey.key_n3 = true;
            break;
        case SDLK_4:
            controllerkey.key_n4 = true;
            break;
        case SDLK_5:
            controllerkey.key_n5 = true;
            break;
        case SDLK_6:
            controllerkey.key_n6 = true;
            break;
        case SDLK_7:
            controllerkey.key_n7 = true;
            break;
        case SDLK_8:
            controllerkey.key_n8 = true;
            break;
        case SDLK_9:
            controllerkey.key_n9 = true;
            break;
        case SDLK_a:
            controllerkey.key_A = true;
            break;
        case SDLK_b:
            controllerkey.key_B = true;
            break;
        case SDLK_c:
            controllerkey.key_C = true;
            break;
        case SDLK_d:
            controllerkey.key_D = true;
            break;
        case SDLK_e:
            controllerkey.key_E = true;
            break;
        case SDLK_f:
            controllerkey.key_F = true;
            break;
        case SDLK_g:
            controllerkey.key_G = true;
            break;
        case SDLK_h:
            controllerkey.key_H = true;
            break;
        case SDLK_i:
            controllerkey.key_I = true;
            break;
        case SDLK_j:
            controllerkey.key_J = true;
            break;
        case SDLK_k:
            controllerkey.key_K = true;
            break;
        case SDLK_l:
            controllerkey.key_L = true;
            break;
        case SDLK_m:
            controllerkey.key_M = true;
            break;
        case SDLK_n:
            controllerkey.key_N = true;
            break;
        case SDLK_o:
            controllerkey.key_O = true;
            break;
        case SDLK_p:
            controllerkey.key_P = true;
            break;
        case SDLK_q:
            controllerkey.key_Q = true;
            break;
        case SDLK_r:
            controllerkey.key_R = true;
            break;
        case SDLK_s:
            controllerkey.key_S = true;
            break;
        case SDLK_t:
            controllerkey.key_T = true;
            break;
        case SDLK_u:
            controllerkey.key_U = true;
            break;
        case SDLK_v:
            controllerkey.key_V = true;
            break;
        case SDLK_w:
            controllerkey.key_W = true;
            break;
        case SDLK_x:
            controllerkey.key_X = true;
            break;
        case SDLK_y:
            controllerkey.key_Y = true;
            break;
        case SDLK_z:
            controllerkey.key_Z = true;
            break;
        case SDLK_PERIOD:
            controllerkey.key_period = true;
            break;
        case SDLK_COMMA:
            controllerkey.key_coma = true;
            break;
        case SDLK_SEMICOLON:
            controllerkey.key_semicolon = true;
            break;
        case SDLK_SLASH:
            controllerkey.key_slash = true;
            break;
        case SDLK_BACKSLASH:
            controllerkey.key_bslash = true;
            break;
        case SDLK_QUOTE:
            controllerkey.key_quote = true;
            break;
        case SDLK_EQUALS:
            controllerkey.key_equal = true;
            break;
        case SDLK_MINUS:
            controllerkey.key_minus = true;
            break;
        case SDLK_BACKQUOTE:
            controllerkey.key_bquote = true;
            break;
        case SDLK_SPACE:
            controllerkey.key_space = true;
            break;
        case SDLK_TAB:
            controllerkey.key_tab = true;
            break;
        case SDLK_LSHIFT:
        case SDLK_RSHIFT:
            controllerkey.key_shift = true;
            break;
        case SDLK_LCTRL:
        case SDLK_RCTRL:
            controllerkey.key_ctrl = true;
            break;
        case SDLK_RETURN:
        case SDLK_RETURN2:
            controllerkey.key_enter = true;
            break;
        case SDLK_BACKSPACE:
            controllerkey.key_backspace = true;
            break;
        case SDLK_DELETE:
            controllerkey.key_delete = true;
            break;
        case SDLK_LALT:
        case SDLK_RALT:
            controllerkey.key_alt = true;
            break;
        case SDLK_HOME:
            controllerkey.key_home = true;
            break;
        case SDLK_END:
            controllerkey.key_end = true;
            break;
        case SDLK_INSERT:
            controllerkey.key_insert = true;
            break;
        case SDLK_ESCAPE:
            controllerkey.key_escape = true;
            break;
        case SDLK_PAGEUP:
            controllerkey.key_pgup = true;
            break;
        case SDLK_PAGEDOWN:
            controllerkey.key_pgdn = true;
            break;
        case SDLK_UP:
            controllerkey.key_arrup = true;
            break;
        case SDLK_DOWN:
            controllerkey.key_arrdn = true;
            break;
        case SDLK_LEFT:
            controllerkey.key_arrlf = true;
            break;
        case SDLK_RIGHT:
            controllerkey.key_arrrg = true;
            break;
        case SDLK_LEFTBRACKET:
            controllerkey.key_bracket = true;
            break;
        case SDLK_RIGHTBRACKET:
            controllerkey.key_bbracket = true;
            break;
        }
    }
    if(event.type == SDL_KEYUP){
        switch(event.key.keysym.sym){
        case SDLK_0:
            controllerkey.key_n0 = false;
            break;
        case SDLK_1:
            controllerkey.key_n1 = false;
            break;
        case SDLK_2:
            controllerkey.key_n2 = false;
            break;
        case SDLK_3:
            controllerkey.key_n3 = false;
            break;
        case SDLK_4:
            controllerkey.key_n4 = false;
            break;
        case SDLK_5:
            controllerkey.key_n5 = false;
            break;
        case SDLK_6:
            controllerkey.key_n6 = false;
            break;
        case SDLK_7:
            controllerkey.key_n7 = false;
            break;
        case SDLK_8:
            controllerkey.key_n8 = false;
            break;
        case SDLK_9:
            controllerkey.key_n9 = false;
            break;
        case SDLK_a:
            controllerkey.key_A = false;
            break;
        case SDLK_b:
            controllerkey.key_B = false;
            break;
        case SDLK_c:
            controllerkey.key_C = false;
            break;
        case SDLK_d:
            controllerkey.key_D = false;
            break;
        case SDLK_e:
            controllerkey.key_E = false;
            break;
        case SDLK_f:
            controllerkey.key_F = false;
            break;
        case SDLK_g:
            controllerkey.key_G = false;
            break;
        case SDLK_h:
            controllerkey.key_H = false;
            break;
        case SDLK_i:
            controllerkey.key_I = false;
            break;
        case SDLK_j:
            controllerkey.key_J = false;
            break;
        case SDLK_k:
            controllerkey.key_K = false;
            break;
        case SDLK_l:
            controllerkey.key_L = false;
            break;
        case SDLK_m:
            controllerkey.key_M = false;
            break;
        case SDLK_n:
            controllerkey.key_N = false;
            break;
        case SDLK_o:
            controllerkey.key_O = false;
            break;
        case SDLK_p:
            controllerkey.key_P = false;
            break;
        case SDLK_q:
            controllerkey.key_Q = false;
            break;
        case SDLK_r:
            controllerkey.key_R = false;
            break;
        case SDLK_s:
            controllerkey.key_S = false;
            break;
        case SDLK_t:
            controllerkey.key_T = false;
            break;
        case SDLK_u:
            controllerkey.key_U = false;
            break;
        case SDLK_v:
            controllerkey.key_V = false;
            break;
        case SDLK_w:
            controllerkey.key_W = false;
            break;
        case SDLK_x:
            controllerkey.key_X = false;
            break;
        case SDLK_y:
            controllerkey.key_Y = false;
            break;
        case SDLK_z:
            controllerkey.key_Z = false;
            break;
        case SDLK_PERIOD:
            controllerkey.key_period = false;
            break;
        case SDLK_COMMA:
            controllerkey.key_coma = false;
            break;
        case SDLK_SEMICOLON:
            controllerkey.key_semicolon = false;
            break;
        case SDLK_SLASH:
            controllerkey.key_slash = false;
            break;
        case SDLK_BACKSLASH:
            controllerkey.key_bslash = false;
            break;
        case SDLK_QUOTE:
            controllerkey.key_quote = false;
            break;
        case SDLK_EQUALS:
            controllerkey.key_equal = false;
            break;
        case SDLK_MINUS:
            controllerkey.key_minus = false;
            break;
        case SDLK_BACKQUOTE:
            controllerkey.key_bquote = false;
            break;
        case SDLK_SPACE:
            controllerkey.key_space = false;
            break;
        case SDLK_TAB:
            controllerkey.key_tab = false;
            break;
        case SDLK_LSHIFT:
        case SDLK_RSHIFT:
            controllerkey.key_shift = false;
            break;
        case SDLK_LCTRL:
        case SDLK_RCTRL:
            controllerkey.key_ctrl = false;
            break;
        case SDLK_RETURN:
        case SDLK_RETURN2:
            controllerkey.key_enter = false;
            break;
        case SDLK_BACKSPACE:
            controllerkey.key_backspace = false;
            break;
        case SDLK_DELETE:
            controllerkey.key_delete = false;
            break;
        case SDLK_LALT:
        case SDLK_RALT:
            controllerkey.key_alt = false;
            break;
        case SDLK_HOME:
            controllerkey.key_home = false;
            break;
        case SDLK_END:
            controllerkey.key_end = false;
            break;
        case SDLK_INSERT:
            controllerkey.key_insert = false;
            break;
        case SDLK_ESCAPE:
            controllerkey.key_escape = false;
            break;
        case SDLK_PAGEUP:
            controllerkey.key_pgup = false;
            break;
        case SDLK_PAGEDOWN:
            controllerkey.key_pgdn = false;
            break;
        case SDLK_UP:
            controllerkey.key_arrup = false;
            break;
        case SDLK_DOWN:
            controllerkey.key_arrdn = false;
            break;
        case SDLK_LEFT:
            controllerkey.key_arrlf = false;
            break;
        case SDLK_RIGHT:
            controllerkey.key_arrrg = false;
            break;
        case SDLK_LEFTBRACKET:
            controllerkey.key_bracket = false;
            break;
        case SDLK_RIGHTBRACKET:
            controllerkey.key_bbracket = false;
            break;
        }
    }
}

key* DLL_EXPORT controller::get()
{
    return &controllerkey;
}

SDL_Event* DLL_EXPORT controller::gEvent()
{
    return &event;
}

// a sample exported function

extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
