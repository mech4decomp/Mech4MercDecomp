/* func_0070f980: gosScript final-region. Scan buffer 0x85b614 for '\n',
   wrapping index at 0x20000. */

extern int g_0087b614;

__declspec(naked) void func_0070f980(void)
{
    __asm {
        mov eax, dword ptr [g_0087b614]
loop_top:
        mov cl, byte ptr [eax + 0x85b614]
        inc eax
        cmp eax, 0x20000
        jnz skip
        xor eax, eax
skip:
        cmp cl, 0xa
        jnz loop_top
        mov dword ptr [g_0087b614], eax
        ret
    }
}
