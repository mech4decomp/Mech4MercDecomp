/*
 * FUN_1001C000 (182 B) - __stdcall, RET 0xc.  Walks a hash-list via
 * indirect vtable calls ([ebx+0xc]/[ebx+8]/[ebx+0x10]) and dispatches
 * through [eax+8].  arg1=ebp, arg2=eax, arg3=*eax list head.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __stdcall FUN_1001C000(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        je      L_c082
        push    esi
        push    edi
        push    ebp
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
        mov     dword ptr [esp + 0x14], ecx
        je      L_c07a
    L_c037:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        js      L_c052
        mov     eax, dword ptr [edi + 8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [ebx + 8]
        test    al, al
        jne     L_c064
        mov     ebp, dword ptr [esp + 0x1c]
    L_c052:
        mov     edi, dword ptr [edi]
        cmp     edi, esi
        jne     L_c037
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        jmp     L_c084
    L_c064:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        je      L_c072
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ebx
    L_c072:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esp + 0x1c]
    L_c07a:
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        jmp     L_c084
    L_c082:
        xor     ecx, ecx
    L_c084:
        mov     dl, byte ptr [eax + 4]
        test    dl, dl
        je      L_c09e
        mov     edx, dword ptr [eax + 0xc]
        push    edx
        push    ecx
        push    ebp
        call    dword ptr [eax + 8]
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 8
        ret     0xc
    L_c09e:
        test    ecx, ecx
        jne     L_c0ac
        mov     ecx, dword ptr [eax + 0xc]
        push    ecx
        push    ebp
        push    0
        call    dword ptr [eax + 8]
    L_c0ac:
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
