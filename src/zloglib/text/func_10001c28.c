/*
 * ZlogLib.dll - FUN_10001c28 (0x10001C28, 70 B, __cdecl)
 * GetExitCodeProcess wrapper: returns 2 if exit code 0x103, else
 * ((code>0)-1 & ~2)+3, or 0 on failure.
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern void *g_10003004;   /* IAT: GetExitCodeProcess */

__declspec(naked) int FUN_10001c28(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0x8]
        test eax, eax
        mov dword ptr [ebp - 0x4], 0x1
        jz L_c6a
        lea ecx, [ebp - 0x4]
        push ecx
        push dword ptr [eax]
        call dword ptr [g_10003004]
        test eax, eax
        jz L_c6a
        cmp dword ptr [ebp - 0x4], 0x103
        jnz L_c58
        push 0x2
        pop eax
        leave
        ret
    L_c58:
        xor eax, eax
        cmp dword ptr [ebp - 0x4], 0x1
        setge al
        dec eax
        and eax, 0xfffffffe
        add eax, 0x3
        leave
        ret
    L_c6a:
        xor eax, eax
        leave
        ret
    }
}
