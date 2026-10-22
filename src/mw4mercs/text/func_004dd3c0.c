/*
 * FUN_004dd3c0 (91 B) — cdecl Adept::ControlsInstance singleton ctor.
 * Allocates a 0x14-byte object (FUN_004084d0), constructs it via
 * FUN_004151c0, stores the result in global 0x007dc6a0, and registers
 * two control handlers via FUN_00704820.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00704820(void);
extern int g_007b8c10;
extern int g_007dc6a0;

__declspec(naked) void FUN_004dd3c0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fail
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773810
        push    0x1db
        mov     ecx, eax
        call    FUN_004151c0
        push    0x1
        push    0x9
        mov     dword ptr [g_007dc6a0], eax
        call    FUN_00704820
        push    0x0
        push    0xb
        call    FUN_00704820
        ret
L_fail:
        push    0x1
        push    0x9
        mov     dword ptr [g_007dc6a0], 0x0
        call    FUN_00704820
        push    0x0
        push    0xb
        call    FUN_00704820
        ret
    }
}
