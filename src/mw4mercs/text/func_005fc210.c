/*
 * FUN_005fc210 (77 B) — allocates a 0x24-byte object, initializes it via
 * FUN_004dd270 (a state-engine ctor), and stores it in global 0x007f26a0.
 * On alloc failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8c4;
extern int g_007f26a0;

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005fc210(void)
{
    __asm {
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      loc_5fc251
        mov     eax, dword ptr [g_007dc8c4]
        push    0x5052a0
        push    0x5fc290
        push    0x78ad78
        push    0x2
        push    eax
        push    0x78ad9c
        push    0x422
        mov     ecx, esi
        call    FUN_004dd270
        mov     dword ptr [g_007f26a0], esi
        pop     esi
        ret
loc_5fc251:
        mov     dword ptr [g_007f26a0], 0x0
        pop     esi
        ret
    }
}
