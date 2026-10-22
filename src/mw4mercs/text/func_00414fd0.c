/*
 * FUN_00414fd0 (72 B) — archive/database subsystem: advances a 0xfa-entry
 * table (0x7b8818) using an XOR feedback step indexed by a global counter
 * (0x7b21fc), wrapping the counter back to 0 at 0xfa. This is the PRNG
 * step used by the alloc/free helpers in this region.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b21fc;
extern int g_007b8818;

__declspec(naked) void FUN_00414fd0(void)
{
    __asm {
        mov     ecx, dword ptr [g_007b21fc]
        cmp     ecx, 0x93
        lea     eax, [ecx - 0x93]
        jge     use_neg
        lea     eax, [ecx + 0x67]
    use_neg:
        mov     edx, dword ptr [ecx*4 + g_007b8818]
        mov     eax, dword ptr [eax*4 + g_007b8818]
        xor     eax, edx
        mov     dword ptr [ecx*4 + g_007b8818], eax
        inc     ecx
        cmp     ecx, 0xfa
        mov     dword ptr [g_007b21fc], ecx
        jnz     done
        mov     dword ptr [g_007b21fc], 0
    done:
        ret
    }
}
