/*
 * FUN_004a4dd0 (74 B) — MLR subsystem. Allocates a CardCloud object,
 * initializes it, and stores it in a global singleton pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007da998;
extern int g_007da988;

__declspec(naked) void FUN_004a4dd0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_4e0e
        mov     eax, dword ptr [g_007da998]
        push    eax
        push    0x7b2fd4
        push    0x526
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4a4f70
        mov     dword ptr [esi + 0x18], 0x4a4950
        mov     dword ptr [g_007da988], esi
        pop     esi
        ret
L_4e0e:
        mov     dword ptr [g_007da988], 0x0
        pop     esi
        ret
    }
}
