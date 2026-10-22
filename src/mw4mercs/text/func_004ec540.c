/*
 * FUN_004ec540 (87 B) — MLR/Adept audio sample init. Allocates an
 * AudioSample object (FUN_004084d0(0x14)); on success constructs it via
 * __thiscall FUN_004151c0(0x228, "Adept::AudioSample", g_007b8c10) and
 * stores in g_007dc7e0, else stores 0. Then zeroes g_007dc7dc and calls
 * FUN_0070f090(0x77475c, FUN_004ec5a0, FUN_004ec5b0, 0, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int);
extern int g_007b8c10;
extern int __cdecl FUN_004151c0(int, int, int);
extern int g_007dc7e0;
extern char g_007dc7dc;
extern void __stdcall FUN_0070f090(int, int, int, int, int);

__declspec(naked) void FUN_004ec540(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_56d
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x774784
        push    0x228
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc7e0], eax
        jmp     L_577
    L_56d:
        mov     dword ptr [g_007dc7e0], 0
    L_577:
        push    0
        push    0
        push    0x4ec5b0
        push    0x4ec5a0
        push    0x77475c
        mov     byte ptr [g_007dc7dc], 0
        call    FUN_0070f090
        ret
    }
}
