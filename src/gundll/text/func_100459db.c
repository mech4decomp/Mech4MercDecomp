/*
 * FUN_100459db (124 B) — __cdecl. Bit-field table writer: walks param_2
 * 3 bits at a time, copies 12-byte entries from a table (base 0x10054d00 /
 * 0x10054e60) into a local and calls FUN_100457bb.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100457bb(void);

__declspec(naked) void __cdecl FUN_100459db(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, 0x10054d60
        xor     ecx, ecx
        sub     ebx, 0x60
        cmp     dword ptr [ebp + 0xc], ecx
        jz      L_a54
        jge     L_a03
        mov     eax, dword ptr [ebp + 0xc]
        mov     ebx, 0x10054ec0
        neg     eax
        mov     dword ptr [ebp + 0xc], eax
        sub     ebx, 0x60
    L_a03:
        cmp     dword ptr [ebp + 0x10], ecx
        jnz     L_a0e
        mov     eax, dword ptr [ebp + 8]
        mov     word ptr [eax], cx
    L_a0e:
        cmp     dword ptr [ebp + 0xc], ecx
        jz      L_a54
        push    esi
        push    edi
    L_a15:
        mov     eax, dword ptr [ebp + 0xc]
        add     ebx, 0x54
        sar     dword ptr [ebp + 0xc], 3
        and     eax, 7
        cmp     eax, ecx
        jz      L_a4d
        lea     eax, [eax + eax*2]
        cmp     word ptr [ebx + eax*4], 0x8000
        lea     esi, [ebx + eax*4]
        jc      L_a40
        lea     edi, [ebp - 0xc]
        movsd
        movsd
        movsd
        dec     dword ptr [ebp - 0xa]
        lea     esi, [ebp - 0xc]
    L_a40:
        push    esi
        push    dword ptr [ebp + 8]
        call    FUN_100457bb
        pop     ecx
        pop     ecx
        xor     ecx, ecx
    L_a4d:
        cmp     dword ptr [ebp + 0xc], ecx
        jnz     L_a15
        pop     edi
        pop     esi
    L_a54:
        pop     ebx
        leave
        ret
    }
}
