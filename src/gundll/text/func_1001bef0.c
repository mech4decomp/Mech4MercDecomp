/*
 * FUN_1001bef0 (133 B) - __thiscall, RET 0x4. Iterates a hash-list of
 * entries, calling FUN_10006570 on each; returns 0x80004005 on failure.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006570(void);   /* rel32 call */

__declspec(naked) void func_1001bef0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        push    esi
        push    edi
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x14], eax
        jbe     L_bf52
        mov     edi, edi
    L_bf10:
        mov     edx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        jz      L_bf48
    L_bf24:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_bf3e
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esi + 0x8]
        push    eax
        push    esi
        push    ecx
        call    FUN_10006570
        test    al, al
        jz      L_bf62
    L_bf3e:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_bf24
        mov     eax, dword ptr [esp + 0x14]
    L_bf48:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x14], eax
        jc      L_bf10
    L_bf52:
        mov     eax, dword ptr [ebx + 0x28]
        pop     edi
        dec     eax
        mov     dword ptr [ebx + 0x28], eax
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x4
    L_bf62:
        mov     eax, dword ptr [ebx + 0x28]
        pop     edi
        dec     eax
        mov     dword ptr [ebx + 0x28], eax
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
