/*
 * FUN_004dd0c0 (72 B) — cdecl Adept::StateEngine singleton constructor.
 * Allocates a 0x24-byte object (FUN_004084d0) and constructs it via
 * FUN_004dd270, storing the result in global 0x007dc69c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);
extern int g_007b8c10;
extern int g_007dc69c;

__declspec(naked) void FUN_004dd0c0(void)
{
    __asm {
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fail
        mov     ecx, dword ptr [g_007b8c10]
        push    0x5052a0
        push    0x4dd140
        push    0x7737d8
        push    0x1
        push    ecx
        push    0x7737f4
        push    0x1c0
        mov     ecx, eax
        call    FUN_004dd270
        mov     dword ptr [g_007dc69c], eax
        ret
L_fail:
        mov     dword ptr [g_007dc69c], 0x0
        ret
    }
}
