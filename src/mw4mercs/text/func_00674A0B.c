/*
 * FUN_00674A0B (46 bytes) - .text data block: jump table + code.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00674770(void);

__declspec(naked) void FUN_00674A0B(void)
{
    __asm {
        nop
        /* __emit: in-function jump-table DATA (5 relocated dword entries) */
        __emit 0xD4
        __emit 0x48
        __emit 0x67
        __emit 0x00
        __emit 0x0A
        __emit 0x49
        __emit 0x67
        __emit 0x00
        __emit 0x62
        __emit 0x49
        __emit 0x67
        __emit 0x00
        __emit 0xA9
        __emit 0x49
        __emit 0x67
        __emit 0x00
        __emit 0xEB
        __emit 0x49
        __emit 0x67
        __emit 0x00
        push   esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push   0x38
        call   dword ptr [eax + 0x14]
        push   esi
        call   FUN_00674770
        add    esp, 4
        pop    esi
        ret
    }
}
