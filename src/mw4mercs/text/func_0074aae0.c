/*
 * FUN_0074aae0 (17 B) — zeroes 9 dwords at 0x8b79f4 via REP STOSD.
 *
 *   PUSH EDI
 *   MOV ECX,0x9
 *   XOR EAX,EAX
 *   MOV EDI,0x8b79f4
 *   REP STOSD
 *   POP EDI
 *   RET
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0074aae0(void)
{
    __asm {
        push    edi
        mov     ecx, 0x9
        xor     eax, eax
        mov     edi, 0x8b79f4
        rep stosd
        pop     edi
        ret
    }
}
