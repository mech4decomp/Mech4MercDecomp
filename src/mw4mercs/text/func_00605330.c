/*
 * FUN_00605330 (64 B) — allocates an Animation-BlendBuffer object (0x2c bytes),
 * initializes it via FUN_00415d70, and stores it in global g_007f27a8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849304;
extern int g_007f27a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);

__declspec(naked) void FUN_00605330(void)
{
    __asm {
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_ret0
        mov     eax, dword ptr [g_00849304]
        push    eax
        push    0x78b96c
        push    2
        push    0xa
        push    0xf9c
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_007f27a8], esi
        pop     esi
        ret
L_ret0:
        mov     dword ptr [g_007f27a8], 0
        pop     esi
        ret
    }
}
