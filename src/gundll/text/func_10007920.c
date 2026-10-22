/*
 * FUN_10007920 (47 B) - __stdcall, RET 0x10. Copies two dwords into a
 * local 8-byte buffer and forwards to FUN_10007950.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10007950(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10007920(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        __emit 0x8D   /* __emit: lea edx,[esp+0] - MSVC6 drops the 00 disp byte (8D 14 24) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        mov     dword ptr [esp + 4], eax
        mov     eax, dword ptr [esp + 0x14]
        push    8
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        call    FUN_10007950
        add     esp, 8
        ret     0x10
    }
}
