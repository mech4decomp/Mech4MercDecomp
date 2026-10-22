/*
 * FUN_1001B080 (56 B) - __stdcall, RET 0x4.  Wide-char string hash: for up
 * to 16 chars, hash = hash*0x11 + wchar.  Returns 0 for null/empty.
 * (Transcribed from reference bytes; gaptext.  Candidate 0x1001b070 was a
 * leading jmp+NOP pad; real entry is 0x1001b080.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __stdcall FUN_1001B080(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        push    esi
        xor     eax, eax
        test    edx, edx
        push    edi
        je      L_b0b3
        mov     cx, word ptr [edx]
        xor     esi, esi
        test    cx, cx
        je      L_b0b3
    L_b096:
        mov     edi, esi
        inc     esi
        cmp     edi, 0x10
        jge     L_b0b3
        imul    eax, eax, 0x11
        movzx   ecx, cx
        add     eax, ecx
        add     edx, 2
        xor     ecx, ecx
        mov     cx, word ptr [edx]
        test    cx, cx
        jne     L_b096
    L_b0b3:
        pop     edi
        pop     esi
        ret     4
    }
}
