/*
 * FUN_0061ef90 (42 B) — __cdecl, 1 arg. If [param+0x2c] is nonzero, call
 * FUN_00415230(DAT_007f26a4) with this = [[param+0x2c]+4]; if it returns 1,
 * return [[param+0x2c]+0x280], else return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26a4;
extern void __cdecl FUN_00415230(void);

__declspec(naked) void *__cdecl FUN_0061ef90(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [eax + 0x2c]
        test    esi, esi
        jz      L_ret0
        mov     eax, dword ptr [g_007f26a4]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_ret0
        mov     eax, dword ptr [esi + 0x280]
        pop     esi
        ret
    L_ret0:
        xor     eax, eax
        pop     esi
        ret
    }
}
