/*
 * FUN_00677240 (28 B) — HUD map/hud4 family. Calls virtual method
 * (vtable+0x14) with 0x300, then FUN_0066a150(param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066a150(void);

__declspec(naked) void FUN_00677240(int** param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x300
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_0066a150
        add     esp, 0x4
        pop     esi
        ret
    }
}
