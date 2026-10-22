/*
 * FUN_007639E0 (extent 0x7639E0-0x763A08, 40 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_00764de0;
extern void __cdecl FUN_00763CC0(void);

__declspec(naked) void FUN_007639E0(void)
{
    __asm {
        push   ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 0xc]
        test   eax, eax
        je     L1
        mov    eax, 0xb
        pop    ebp
        ret
    L1:
        mov    eax, dword ptr [ebp + 8]
        push   0
        push   eax
        push   offset g_00764de0
        push   4
        call   FUN_00763CC0
        add    esp, 0x10
        /* __emit: jmp rel8 to 0x763A0C (outside fn extent, into data block) */
        __emit 0xEB
        __emit 0x04
    }
}
