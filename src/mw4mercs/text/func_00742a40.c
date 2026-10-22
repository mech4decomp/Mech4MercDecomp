/*
 * FUN_00742a40 (41 B) — Counts set bits (popcount) of the argument across
 * all 32 bits, capped at 8.
 *
 * __stdcall (RET 4, one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00742a40(unsigned int param)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        xor     eax, eax
        push    esi
        xor     ecx, ecx
again:
        mov     esi, 1
        shl     esi, cl
        test    esi, edx
        jz      skip
        inc     eax
skip:
        inc     ecx
        cmp     ecx, 0x20
        jl      again
        cmp     eax, 8
        pop     esi
        jbe     done
        mov     eax, 8
done:
        ret     4
    }
}
