/*
 * FUN_004dd4d0 (55 B) — cdecl Adept::DirectControlsInstance singleton ctor.
 * Allocates a 0x14-byte object (FUN_004084d0), constructs it via
 * FUN_004151c0, and stores the result in global 0x007dc6a4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007dc6a0;
extern int g_007dc6a4;

__declspec(naked) void FUN_004dd4d0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fail
        mov     ecx, dword ptr [g_007dc6a0]
        push    ecx
        push    0x773840
        push    0x1dc
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc6a4], eax
        ret
L_fail:
        mov     dword ptr [g_007dc6a4], 0x0
        ret
    }
}
