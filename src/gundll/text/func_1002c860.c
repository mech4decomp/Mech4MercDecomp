/*
 * FUN_1002c860 (257 B) — __stdcall, RET 0x14.
 * String-table lookup helper: searches a hash-list object (param_5) for a
 * matching entry, returns 0 on success or 0xc1120002 on failure.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_10038141(void);
extern char __stdcall FUN_1002d790(void);

__declspec(naked) void __stdcall FUN_1002c860(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        push    eax
        push    0x100514a4
        push    esi
        push    ebx
        call    FUN_10038141
        add     esp, 0x10
        test    eax, eax
        jge     L_894
        pop     edi
        pop     esi
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 0xc
        ret     0x14
    L_894:
        lea     ecx, [ebx + eax*2]
        mov     ebx, dword ptr [esp + 0x2c]
        sub     esi, eax
        test    ebx, ebx
        mov     edi, eax
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_928
        mov     edx, dword ptr [ebx + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x20], eax
        jbe     L_903
    L_8c1:
        mov     edx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        jz      L_8f9
    L_8d5:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_8ef
        mov     edx, dword ptr [esi + 0x8]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        push    edx
        call    FUN_1002d790
        test    al, al
        jz      L_903
    L_8ef:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_8d5
        mov     eax, dword ptr [esp + 0x20]
    L_8f9:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x20], eax
        jc      L_8c1
    L_903:
        mov     eax, dword ptr [ebx + 0x28]
        mov     ecx, dword ptr [esp + 0x14]
        dec     eax
        test    ecx, ecx
        mov     dword ptr [ebx + 0x28], eax
        jnz     L_920
        pop     edi
        pop     esi
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 0xc
        ret     0x14
    L_920:
        mov     esi, dword ptr [esp + 0xc]
        mov     edi, dword ptr [esp + 0x10]
    L_928:
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    0x10050244
        push    esi
        push    ecx
        call    FUN_10038141
        add     esp, 0x10
        test    eax, eax
        jge     L_94e
        pop     edi
        pop     esi
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 0xc
        ret     0x14
    L_94e:
        mov     ecx, dword ptr [esp + 0x24]
        add     eax, edi
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        xor     eax, eax
        pop     ebx
        add     esp, 0xc
        ret     0x14
    }
}
