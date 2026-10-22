/*
 * FUN_00677360 (25 B) — HUD map/hud4 family. Calls virtual method
 * (vtable+0x14) with 0x44, then FUN_00674770(param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00674770(void);

__declspec(naked) void FUN_00677360(int** param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x44
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00674770
        add     esp, 0x4
        pop     esi
        ret
    }
}
