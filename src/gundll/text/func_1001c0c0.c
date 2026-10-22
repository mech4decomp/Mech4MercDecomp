/*
 * FUN_1001C0C0 (194 B) - __stdcall, RET 0xc.  Walks a hash-list via
 * indirect vtable calls ([ebx+0xc]/[ebx+8]/[ebx+0x10]) and dispatches
 * through [eax+8].  arg1=ebp, arg2=eax, arg3=*eax list head.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __stdcall FUN_1001C0C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        je      L_c149
        mov     eax, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [eax + 0x34]
        push    esi
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x18], ebp
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 2]
        mov     ecx, dword ptr [ebx + 4]
        xor     esi, esi
        mov     si, ax
        shl     esi, 4
        mov     edi, dword ptr [esi + ecx]
        add     esi, ecx
        xor     ecx, ecx
        cmp     edi, esi
        mov     dword ptr [esp + 0x18], ecx
        je      L_c140
        mov     edi, edi
    L_c100:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        js      L_c11b
        mov     eax, dword ptr [edi + 8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [ebx + 8]
        test    al, al
        jne     L_c12e
        mov     ebp, dword ptr [esp + 0x14]
    L_c11b:
        mov     edi, dword ptr [edi]
        cmp     edi, esi
        jne     L_c100
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        jmp     L_c14b
    L_c12e:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        je      L_c13c
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    ebx
    L_c13c:
        mov     ecx, dword ptr [esp + 0x10]
    L_c140:
        mov     eax, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        jmp     L_c14b
    L_c149:
        xor     ecx, ecx
    L_c14b:
        mov     dl, byte ptr [eax + 4]
        test    dl, dl
        pop     ebx
        je      L_c168
        mov     edx, dword ptr [eax + 0xc]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        call    dword ptr [eax + 8]
        mov     al, 1
        add     esp, 0xc
        ret     0xc
    L_c168:
        test    ecx, ecx
        jne     L_c17a
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    0
        call    dword ptr [eax + 8]
    L_c17a:
        mov     al, 1
        add     esp, 0xc
        ret     0xc
    }
}
