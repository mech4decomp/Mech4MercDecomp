/*
 * FUN_004de650 (453 B) — MLR/Adept mapping-group remove + dispatch teardown.
 * __thiscall, RET 0x8 (2 params). Removes a matching entry from a
 * 0x24-byte-element array, then calls each sub-object's vtable[+4] method
 * across the group's member lists.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004de650(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x24]
        push    edi
        mov     edi, dword ptr [ebx + 0x20]
        cmp     edi, eax
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x10], 0x0
        jz      L6F1
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [edi + 0x24]
        mov     dword ptr [esp + 0x24], eax
L684:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [edi], ecx
        jnz     L6DE
        mov     edx, dword ptr [eax - 0x20]
        cmp     edx, dword ptr [ebp]
        jnz     L6DE
        mov     ecx, dword ptr [ebx + 0x24]
        cmp     eax, ecx
        jz      L6CF
        sub     ecx, eax
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L6CB
L6B2:
        dec     edx
        lea     eax, [edi + 0x24]
        mov     ecx, 0x9
        mov     esi, eax
        rep     movsd
        mov     edi, eax
        jnz     L6B2
        mov     esi, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x14]
L6CB:
        mov     eax, dword ptr [esp + 0x24]
L6CF:
        mov     ecx, dword ptr [ebx + 0x24]
        add     ecx, -0x24
        mov     dword ptr [ebx + 0x24], ecx
        inc     dword ptr [esp + 0x10]
        jmp     L6EC
L6DE:
        add     edi, 0x24
        add     eax, 0x24
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x24], eax
L6EC:
        cmp     edi, dword ptr [ebx + 0x24]
        jnz     L684
L6F1:
        mov     eax, dword ptr [ebx + 0x34]
        test    eax, eax
        jz      L767
        mov     edi, dword ptr [ebx + 0x38]
        mov     dword ptr [esp + 0x20], 0x5
L703:
        mov     edx, dword ptr [edi]
        push    ebp
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     L703
        mov     eax, dword ptr [ebx + 0x34]
        mov     eax, dword ptr [eax]
        test    eax, eax
        jle     L741
        mov     edi, dword ptr [ebx + 0x3c]
        mov     dword ptr [esp + 0x20], eax
L72A:
        mov     eax, dword ptr [edi]
        push    ebp
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     L72A
L741:
        mov     edi, dword ptr [ebx + 0x40]
        test    edi, edi
        jz      L767
        mov     dword ptr [esp + 0x20], 0x4
L750:
        mov     edx, dword ptr [edi]
        push    ebp
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     L750
L767:
        mov     eax, dword ptr [ebx + 0x44]
        lea     ecx, [ebx + 0x44]
        push    ebp
        push    esi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [ebx + 0x60]
        lea     ecx, [ebx + 0x60]
        push    ebp
        push    esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [ebx + 0x7c]
        lea     ecx, [ebx + 0x7c]
        push    ebp
        push    esi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [ebx + 0x98]
        lea     ecx, [ebx + 0x98]
        push    ebp
        push    esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [ebx + 0xb4]
        lea     ecx, [ebx + 0xb4]
        push    ebp
        push    esi
        call    dword ptr [eax + 0x4]
        lea     edi, [ebx + 0xd0]
        mov     dword ptr [esp + 0x20], 0x5
L7B8:
        mov     edx, dword ptr [edi]
        push    ebp
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     L7B8
        lea     edi, [ebx + 0x15c]
        mov     dword ptr [esp + 0x20], 0x212
L7DD:
        mov     eax, dword ptr [edi]
        push    ebp
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     L7DD
        mov     edx, dword ptr [ebx + 0x3b54]
        add     ebx, 0x3b54
        push    ebp
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
