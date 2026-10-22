/*
 * FUN_00763A50 (extent 0x763A50-0x763A78, 40 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_00765530;
extern void __cdecl FUN_00763CC0(void);

__declspec(naked) void FUN_00763A50(void)
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
        push   offset g_00765530
        push   2
        call   FUN_00763CC0
        add    esp, 0x10
        /* __emit: jmp rel8 to 0x763A7C (outside fn extent, into data block) */
        __emit 0xEB
        __emit 0x04
    }
}
