/*
 * 88 bytes — __thiscall method.
 * Checks a sub-object's type field and calls a vtable method
 * with different parameters depending on the type.
 */

void FUN_005A1990(void);

extern unsigned char g_byte_7F1F7D;  /* 0x7F1F7D */

__declspec(naked) void FUN_0058B590(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x2F4]
        mov     al, byte ptr [ecx + 0x1D]
        test    al, al
        jne     done

        cmp     dword ptr [ecx + 0x14], 0xA
        jne     check_25

        /* case field_14 == 10 */
        mov     eax, dword ptr [ecx]
        xor     edx, edx
        mov     dl, byte ptr [g_byte_7F1F7D]
        push    0
        push    edx
        push    0x25
        call    dword ptr [eax + 8]
        mov     ecx, dword ptr [esi + 0x9AC]
        push    0x3F800000
        call    FUN_005A1990
        pop     esi
        ret

    check_25:
        test    al, al
        jne     done
        cmp     dword ptr [ecx + 0x14], 0x25
        jne     done

        /* case field_14 == 0x25 (37) */
        mov     eax, dword ptr [ecx]
        xor     edx, edx
        mov     dl, byte ptr [g_byte_7F1F7D]
        push    0
        push    edx
        push    0xA
        call    dword ptr [eax + 8]

    done:
        pop     esi
        ret
    }
}
