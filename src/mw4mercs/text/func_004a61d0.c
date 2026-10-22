/*
 * FUN_004a61d0 (74 B) — MLR singleton factory.
 * Allocates a 0x1c-byte object, initializes it via FUN_004151c0, sets two
 * vtable-ish pointers, and stores it in global g_007da98c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007da998;
extern int g_007da98c;

__declspec(naked) void FUN_004a61d0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1
        mov     eax, dword ptr [g_007da998]
        push    eax
        push    0x7b3034
        push    0x525
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x4a6370
        mov     dword ptr [esi+0x18], 0x4a5da0
        mov     dword ptr [g_007da98c], esi
        pop     esi
        ret
L1:
        mov     dword ptr [g_007da98c], 0
        pop     esi
        ret
    }
}
