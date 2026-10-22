/*
 * FUN_00765690 (extent 0x765690-0x7656AE, 30 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_008bd500;
extern void __cdecl FUN_00765C50(void);

__declspec(naked) void FUN_00765690(void)
{
    __asm {
        mov    eax, dword ptr [g_008bd500]
        test   eax, eax
        jne    L1
        mov    eax, 0xb
        ret
    L1:
        push   7
        push   0x24
        push   eax
        call   FUN_00765C50
        add    esp, 0xc
        /* __emit: jmp rel8 to 0x7656B2 (outside fn extent, into data block) */
        __emit 0xEB
        __emit 0x04
    }
}
