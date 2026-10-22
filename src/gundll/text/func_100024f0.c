/*
 * FUN_100024F0 (84 B) - __stdcall, RET 0x8. Hex char-class parser:
 * walks a char string, classifies each char via a lookup table and a
 * jump table, accumulates a nibble-sum into EDI, writes it to *param2.
 * Returns 0 on success or 0xc112000c on a malformed char.
 *
 * NOTE: the gaptext splitter divided this single logical function across
 * two slots: 0x100024f0 (47 B, dispatcher) and 0x1000251f (37 B, case
 * handlers). Both are transcribed here as one function; slot 0x1000251f
 * is verified via --offset 47.
 *
 * CFLAGS: /O1
 */

extern unsigned char g_lookup_10002554[];   /* byte class table at 0x10002554 */
extern void *g_jumptable_10002544[];        /* jump table at 0x10002544 */

__declspec(naked) void __stdcall FUN_100024F0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     al, byte ptr [edx]
        push    esi
        push    edi
        xor     edi, edi
        xor     esi, esi
        test    al, al
        je      L_252d
    L_2500:
        movsx   eax, al
        lea     ecx, [eax - 0x30]
        inc     edx
        cmp     ecx, 0x48
        ja      L_253a
        movzx   ecx, byte ptr [ecx + g_lookup_10002554]
        jmp     dword ptr [ecx*4 + g_jumptable_10002544]
    L_251a:
        lea     esi, [eax - 0x30]
        jmp     L_2522
    L_251f:
        lea     esi, [eax - 0x57]
    L_2522:
        mov     al, byte ptr [edx]
        shl     edi, 4
        add     edi, esi
        test    al, al
        jne     L_2500
    L_252d:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx], edi
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
    L_253a:
        pop     edi
        mov     eax, 0xc112000c
        pop     esi
        ret     0x8
    }
}
