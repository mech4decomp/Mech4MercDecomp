/*
 * FUN_5e02ff99 (43 B) — bounded string length helper. Returns the length of
 * the string at [esp+4] up to a maximum of [esp+8] bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e02ff99(void)
{
    __asm {
        mov edx, dword ptr [esp+8]
        mov eax, dword ptr [esp+4]
        test edx, edx
        push esi
        lea ecx, [edx-1]
        jz L_ffb6
L_ffa9:
        cmp byte ptr [eax], 0
        jz L_ffb6
        inc eax
        mov esi, ecx
        dec ecx
        test esi, esi
        jnz L_ffa9
L_ffb6:
        cmp byte ptr [eax], 0
        pop esi
        jnz L_ffc1
        sub eax, dword ptr [esp+4]
        ret
L_ffc1:
        mov eax, edx
        ret
    }
}
