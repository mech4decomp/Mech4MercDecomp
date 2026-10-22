/*
 * FUN_100399db (117 B) — __thiscall.
 * Wide-char conversion helper using table at 0x10051984; for values >= 0x100
 * calls FUN_1003efcc to convert, then masks the result with param_2.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003efcc(void);
extern int g_10051984;

__declspec(naked) void FUN_100399db(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [ebp + 0x8]
        lea     ecx, [eax + 0x1]
        cmp     ecx, 0x100
        ja      L_f9
        mov     ecx, dword ptr [g_10051984]
        movzx   eax, word ptr [ecx + eax*2]
        jmp     L_a4b
    L_f9:
        mov     ecx, eax
        push    esi
        mov     esi, dword ptr [g_10051984]
        sar     ecx, 0x8
        movzx   edx, cl
        test    byte ptr [esi + edx*2 + 1], 0x80
        pop     esi
        jz      L_a1e
        and     byte ptr [ebp - 2], 0
        mov     byte ptr [ebp - 4], cl
        mov     byte ptr [ebp - 3], al
        push    0x2
        jmp     L_a27
    L_a1e:
        and     byte ptr [ebp - 3], 0
        mov     byte ptr [ebp - 4], al
        push    0x1
    L_a27:
        pop     eax
        lea     ecx, [ebp + 0xa]
        push    0x1
        push    0x0
        push    0x0
        push    ecx
        push    eax
        lea     eax, [ebp - 4]
        push    eax
        push    0x1
        call    FUN_1003efcc
        add     esp, 0x1c
        test    eax, eax
        jnz     L_a47
        leave
        ret
    L_a47:
        movzx   eax, word ptr [ebp + 0xa]
    L_a4b:
        and     eax, dword ptr [ebp + 0xc]
        leave
        ret
    }
}
