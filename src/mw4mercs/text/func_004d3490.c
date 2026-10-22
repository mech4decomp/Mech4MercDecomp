/* func_004d3490.c - inline-asm transcription of FUN_004d3490 (66 B) */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);
extern int g_007dc69c;    /* DAT_007dc69c */
extern int g_007dc110;    /* DAT_007dc110 */

__declspec(naked) void func_004d3490(void)
{
    __asm {
        push 0x24
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz loc_34c7
        mov ecx, dword ptr [g_007dc69c]
        push 0x0
        push 0x0
        push 0x772660
        push 0x7
        push ecx
        push 0x7727bc
        push 0x1e8
        mov ecx, eax
        call FUN_004dd270
        mov dword ptr [g_007dc110], eax
        ret
    loc_34c7:
        mov dword ptr [g_007dc110], 0x0
        ret
    }
}
