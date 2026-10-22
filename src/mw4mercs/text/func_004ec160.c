/*
 * FUN_004ec160 (55 B) — MLR/Adept audio channel init. Allocates an
 * AudioChannel object (FUN_004084d0(0x14)); on success constructs it
 * via __thiscall FUN_004151c0(0x229, "Adept::AudioChannel", g_007b8c10)
 * and stores the result in g_007dc7d8; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int);
extern int g_007b8c10;
extern int __cdecl FUN_004151c0(int, int, int);
extern int g_007dc7d8;

__declspec(naked) void FUN_004ec160(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x774734
        push    0x229
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc7d8], eax
        ret
    L1:
        mov     dword ptr [g_007dc7d8], 0
        ret
    }
}
