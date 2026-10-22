/*
 * FUN_007239f0 (22 B) — copies 8 dwords from 0x87ddc4 to 0x87dda4 via REP MOVSD.
 *
 *   PUSH ESI
 *   PUSH EDI
 *   MOV ECX,0x8
 *   MOV ESI,0x87ddc4
 *   MOV EDI,0x87dda4
 *   REP MOVSD
 *   POP EDI
 *   POP ESI
 *   RET
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_007239f0(void)
{
    __asm {
        push    esi
        push    edi
        mov     ecx, 0x8
        mov     esi, 0x87ddc4
        mov     edi, 0x87dda4
        rep movsd
        pop     edi
        pop     esi
        ret
    }
}
