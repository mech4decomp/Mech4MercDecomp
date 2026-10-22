/*
 * FUN_005b2b50 (35 B) — __thiscall (ECX=this). One-time init: if flag
 * ESI+0x6d1 is clear, calls FUN_00707e70(0), stores the FPU result to
 * ESI+0x6c8, and sets the flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00707e70(void);

__declspec(naked) void FUN_005b2b50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x6d1]
        test    al, al
        jnz     L2B71
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x6c8]
        mov     byte ptr [esi + 0x6d1], 0x1
L2B71:
        pop     esi
        ret
    }
}
