/*
 * FUN_5e02ffc4 (33 B) — checked add helper. Computes edx+esi with overflow
 * detection, stores the sum to [esp+0x10], and returns 1 on overflow else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e02ffc4(void)
{
    __asm {
        mov edx, dword ptr [esp+4]
        push esi
        mov esi, dword ptr [esp+0xc]
        xor eax, eax
        lea ecx, [edx+esi]
        cmp ecx, edx
        jc L_ffda
        cmp ecx, esi
        jnc L_ffdd
L_ffda:
        push 1
        pop eax
L_ffdd:
        mov edx, dword ptr [esp+0x10]
        pop esi
        mov dword ptr [edx], ecx
        ret
    }
}
