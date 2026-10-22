/*
 * func_00515ED0 - Error/log dispatch
 * Loads global, calls a function, calls through import thunk, returns boolean
 */
__declspec(naked) void __stdcall func_00515ED0()
{
    

extern int DAT_00896c88;
extern void __cdecl FUN_0072d828(void);
extern int DAT_0076b2ac;
__asm {
        mov eax, dword ptr [DAT_00896c88]
        push 0x779d48
        push 0
        push eax
        call FUN_0072d828
        push eax
        call dword ptr [DAT_0076b2ac]
        add  esp, 8
        neg  eax
        sbb  eax, eax
        inc  eax
        ret  8
    }


}
