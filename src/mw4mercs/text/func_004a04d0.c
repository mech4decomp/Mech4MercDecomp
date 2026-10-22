/*
 * FUN_004a04d0 (33 B) — MLR particle/shrapnel: returns 1 if the fragment
 * system is active (FUN_00494b90) and the ring buffer is empty (ac==0),
 * else 0. __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00494b90(void);

__declspec(naked) void FUN_004a04d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00494b90
        test    al, al
        jz      L04ed
        mov     eax, dword ptr [esi+0xac]
        test    eax, eax
        jnz     L04ed
        mov     eax, 0x1
        pop     esi
        ret
L04ed:
        xor     eax, eax
        pop     esi
        ret
    }
}
