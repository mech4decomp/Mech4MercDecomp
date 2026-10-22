/*
 * FUN_00620770 (111 B) — String-append helper. If byte at this+0x15 is
 * set, computes the length of the global string at 0x7f29a4, optionally
 * null-terminates it, then appends the literal ")" string onto it and
 * calls FUN_0061fc80(&DAT_007f29a4).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061fc80(void);

__declspec(naked) void __fastcall FUN_00620770(void)
{
    __asm {
        mov     edx, ecx
        mov     al, byte ptr [edx + 0x15]
        test    al, al
        jz      L_de
        push    ebx
        push    esi
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, 0x7f29a4
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x1
        jbe     L_a2
        or      ecx, 0xffffffff
        mov     edi, 0x7f29a4
        repne   scasb
        not     ecx
        mov     byte ptr [ecx + 0x7f29a2], al
L_a2:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77e7d8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x7f29a4
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        push    0x7f29a4
        mov     ecx, edx
        call    FUN_0061fc80
        pop     edi
        pop     esi
        pop     ebx
L_de:
        ret
    }
}
