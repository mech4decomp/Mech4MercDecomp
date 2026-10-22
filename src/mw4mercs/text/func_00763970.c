/*
 * FUN_00763970 (extent 0x763970-0x763998, 40 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_00763ec0;
extern void __cdecl FUN_00763CC0(void);

__declspec(naked) void FUN_00763970(void)
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
        push   offset g_00763ec0
        push   0
        call   FUN_00763CC0
        add    esp, 0x10
        /* __emit: jmp rel8 to 0x76399C (outside fn extent, into data block) */
        __emit 0xEB
        __emit 0x04
    }
}
