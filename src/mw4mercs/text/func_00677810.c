/*
 * FUN_00677810 (25 B) — HUD map/hud4 family. Calls virtual method
 * (vtable+0x14) with 0x7c, then FUN_00675620(param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00675620(void);

__declspec(naked) void FUN_00677810(int** param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x7c
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00675620
        add     esp, 0x4
        pop     esi
        ret
    }
}
