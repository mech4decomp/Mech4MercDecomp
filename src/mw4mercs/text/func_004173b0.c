/*
 * FUN_004173b0 (68 B) - __cdecl "Stuff::SafeChainLink" allocator.
 * Allocates a 0x2c-byte node via FUN_004084d0, initializes it via
 * FUN_00415d70, stores it in g_007b8c1c; on failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00415d70(int a, int b, int c, const char *str, int d);
extern int  g_007b8c14;
extern int  g_007b8c1c;

__declspec(naked) void FUN_004173b0(void)
{
    __asm {
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_fail
        mov     eax, dword ptr [g_007b8c14]
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        push    0x76d550
        mov     ecx, eax
        shr     ecx, 0x2
        push    ecx
        push    eax
        push    0x18
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_007b8c1c], esi
        pop     esi
        ret
    L_fail:
        mov     dword ptr [g_007b8c1c], 0
        pop     esi
        ret
    }
}
