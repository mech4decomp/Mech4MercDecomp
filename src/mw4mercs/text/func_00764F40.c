/*
 * FUN_00764F40 (extent 0x764F40-0x764F5E, 30 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_008bd4f8;
extern void __cdecl FUN_00765500(void);

__declspec(naked) void FUN_00764F40(void)
{
    __asm {
        mov    eax, dword ptr [g_008bd4f8]
        test   eax, eax
        jne    L1
        mov    eax, 0xb
        ret
    L1:
        push   7
        push   0x24
        push   eax
        call   FUN_00765500
        add    esp, 0xc
        /* __emit: jmp rel8 to 0x764F62 (outside fn extent, into data block) */
        __emit 0xEB
        __emit 0x04
    }
}
