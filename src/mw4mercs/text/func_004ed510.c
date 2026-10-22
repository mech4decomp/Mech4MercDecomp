/*
 * FUN_004ed510 (59 B) — allocates a 0x20-byte object and constructs it
 * via FUN_004d5c10 (vtable 0x774910), storing the result in global
 * 0x007dc7f4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc140;
extern int g_007dc7f4;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004ed510(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [g_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x774910
        push    0x214
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc7f4], eax
        ret
L1:
        mov     dword ptr [g_007dc7f4], 0x0
        ret
    }
}
