/*
 * FUN_00652d90 (98 B) — compares two objects via virtual method [vtbl+0x60];
 * returns a bit extracted from param_3 based on the comparison result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00652d90(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        cmp     edi, ecx
        jnz     L_652da1
        xor     al, al
        pop     edi
        ret
L_652da1:
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x60]
        mov     esi, eax
        test    esi, esi
        jz      L_652dc2
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jz      L_652dc2
        xor     ecx, ecx
        cmp     eax, esi
        setnz   cl
        inc     ecx
        mov     eax, ecx
L_652dc2:
        sub     eax, 0x0
        pop     esi
        jz      L_652de6
        dec     eax
        jz      L_652ddd
        dec     eax
        jz      L_652dd2
        xor     al, al
        pop     edi
        ret
L_652dd2:
        mov     eax, dword ptr [esp + 0x10]
        shr     eax, 0x1
        and     eax, 0x1
        pop     edi
        ret
L_652ddd:
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0x1
        pop     edi
        ret
L_652de6:
        mov     eax, dword ptr [esp + 0x10]
        shr     eax, 0x2
        and     eax, 0x1
        pop     edi
        ret
    }
}
