/*
 * DATA block @ 0x4DE820 (339 B). __thiscall (ECX=this), RET 4 (1 stack param
 * = ebp). Removes matching entries from a linked array (0x24-stride, rep
 * movsd shift), then walks several arrays of 0x1c-stride objects calling
 * virtual method at vtable+8 on each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004DE820(void *p1)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x24]
        push    edi
        mov     edi, dword ptr [ebx + 0x20]
        cmp     edi, eax
        mov     dword ptr [esp + 0x10], edi
        je      L89a
        lea     esi, [edi + 0x24]
        mov     dword ptr [esp + 0x18], esi
L840:
        cmp     dword ptr [esi - 0x18], ebp
        jne     L887
        mov     ecx, dword ptr [ebx + 0x24]
        cmp     esi, ecx
        je      L87c
        sub     ecx, esi
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L87c
L863:
        dec     edx
        lea     eax, [edi + 0x24]
        mov     ecx, 9
        mov     esi, eax
        rep movsd
        mov     edi, eax
        jne     L863
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x18]
L87c:
        mov     eax, dword ptr [ebx + 0x24]
        add     eax, -0x24
        mov     dword ptr [ebx + 0x24], eax
        jmp     L895
L887:
        add     edi, 0x24
        add     esi, 0x24
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x18], esi
L895:
        cmp     edi, dword ptr [ebx + 0x24]
        jne     L840
L89a:
        mov     eax, dword ptr [ebx + 0x34]
        test    eax, eax
        je      L8eb
        mov     esi, dword ptr [ebx + 0x38]
        mov     edi, 5
L8a9:
        mov     edx, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 8]
        add     esi, 0x1c
        dec     edi
        jne     L8a9
        mov     eax, dword ptr [ebx + 0x34]
        mov     edi, dword ptr [eax]
        test    edi, edi
        jle     L8d1
        mov     esi, dword ptr [ebx + 0x3c]
L8c3:
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax + 8]
        add     esi, 0x1c
        dec     edi
        jne     L8c3
L8d1:
        mov     esi, dword ptr [ebx + 0x40]
        test    esi, esi
        je      L8eb
        mov     edi, 4
L8dd:
        mov     edx, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 8]
        add     esi, 0x1c
        dec     edi
        jne     L8dd
L8eb:
        mov     eax, dword ptr [ebx + 0x44]
        lea     ecx, [ebx + 0x44]
        push    ebp
        call    dword ptr [eax + 8]
        mov     edx, dword ptr [ebx + 0x60]
        lea     ecx, [ebx + 0x60]
        push    ebp
        call    dword ptr [edx + 8]
        mov     eax, dword ptr [ebx + 0x7c]
        lea     ecx, [ebx + 0x7c]
        push    ebp
        call    dword ptr [eax + 8]
        mov     edx, dword ptr [ebx + 0x98]
        lea     ecx, [ebx + 0x98]
        push    ebp
        call    dword ptr [edx + 8]
        mov     eax, dword ptr [ebx + 0xb4]
        lea     ecx, [ebx + 0xb4]
        push    ebp
        call    dword ptr [eax + 8]
        lea     esi, [ebx + 0xd0]
        mov     edi, 5
L934:
        mov     edx, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 8]
        add     esi, 0x1c
        dec     edi
        jne     L934
        lea     esi, [ebx + 0x15c]
        mov     edi, 0x212
L94d:
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax + 8]
        add     esi, 0x1c
        dec     edi
        jne     L94d
        mov     edx, dword ptr [ebx + 0x3b54]
        lea     ecx, [ebx + 0x3b54]
        push    ebp
        call    dword ptr [edx + 8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}
