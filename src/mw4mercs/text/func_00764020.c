/*
 * FUN_00764020 (extent 0x764020-0x76403E, 30 B) - .text data block.
 * True function code ends at the jmp into the following data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_008bd4f0;
extern void __cdecl FUN_007646F0(void);

__declspec(naked) void FUN_00764020(void)
{
    __asm {
        mov    eax, dword ptr [g_008bd4f0]
        test   eax, eax
        jne    L1
        mov    eax, 0xb
        ret
    L1:
        push   7
        push   0x24
        push   eax
        call   FUN_007646F0
        add    esp, 0xc
        /* __emit: jmp rel8 to 0x764042 (outside fn extent, into data block) */
        __emit 0xEB
        __emit 0x04
    }
}
