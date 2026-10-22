/*
 * FUN_00406840 (19 bytes) - .text data block 0x4060CC.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b7eac;
extern int    g_007b7ea8;
extern void __cdecl FUN_006fe4c0(void);

__declspec(naked) void FUN_00406840(void)
{
    __asm {
        mov    eax, dword ptr [g_007b7eac]
        push   eax
        push   offset g_007b7ea8
        call   FUN_006fe4c0
        ret    0xc
    }
}
