/*
 * FUN_5e00f390 (376 B) — DirectDraw surface-mode negotiation wrapper.
 * If the object's 0x28 flag is set, forwards to the inner object's
 * vtable[0x2c/4] method. Otherwise validates/zeroes two surface-descriptor
 * buffers (0x13c/0x16c/0x17c size tags), forwards, and sets the 0x80000
 * flag on the returned descriptors.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f390(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        mov     eax, dword ptr [edx + 0x28]
        push    edi
        test    eax, eax
        jz      L_f3b9
        mov     eax, dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x2c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    L_f3b9:
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x1c]
        test    esi, esi
        jz      L_f3d9
        test    ebx, ebx
        jz      L_f3d5
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [ebx]
        cmp     eax, ecx
        jnz     L_f4fc
    L_f3d5:
        mov     eax, dword ptr [esi]
        jmp     L_f3e3
    L_f3d9:
        test    ebx, ebx
        jz      L_f4fc
        mov     eax, dword ptr [ebx]
    L_f3e3:
        cmp     eax, 0x13c
        jnz     L_f3fc
        mov     eax, dword ptr [edx + 0x20]
        push    ebx
        push    esi
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x2c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    L_f3fc:
        cmp     eax, 0x16c
        jnz     L_f47e
        test    esi, esi
        jz      L_f421
        mov     ecx, dword ptr [esi]
        xor     eax, eax
        mov     ebp, ecx
        mov     edi, esi
        shr     ecx, 0x2
        rep     stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     stosb
        mov     dword ptr [esi], 0x13c
    L_f421:
        test    ebx, ebx
        jz      L_f43f
        mov     ecx, dword ptr [ebx]
        xor     eax, eax
        mov     ebp, ecx
        mov     edi, ebx
        shr     ecx, 0x2
        rep     stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     stosb
        mov     dword ptr [ebx], 0x13c
    L_f43f:
        mov     eax, dword ptr [edx + 0x20]
        push    ebx
        push    esi
        push    eax
        mov     edx, dword ptr [eax]
        call    dword ptr [edx + 0x2c]
        test    esi, esi
        mov     ecx, 0x80000
        jz      L_f461
        mov     edx, dword ptr [esi + 0x8]
        mov     dword ptr [esi], 0x16c
        or      edx, ecx
        mov     dword ptr [esi + 0x8], edx
    L_f461:
        test    ebx, ebx
        jz      L_f501
        mov     edx, dword ptr [ebx + 0x8]
        pop     edi
        or      edx, ecx
        pop     esi
        mov     dword ptr [ebx], 0x16c
        mov     dword ptr [ebx + 0x8], edx
        pop     ebp
        pop     ebx
        ret     0xc
    L_f47e:
        cmp     eax, 0x17c
        jnz     L_f4fc
        test    esi, esi
        jz      L_f4a3
        mov     ecx, dword ptr [esi]
        xor     eax, eax
        mov     ebp, ecx
        mov     edi, esi
        shr     ecx, 0x2
        rep     stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     stosb
        mov     dword ptr [esi], 0x13c
    L_f4a3:
        test    ebx, ebx
        jz      L_f4c1
        mov     ecx, dword ptr [ebx]
        xor     eax, eax
        mov     ebp, ecx
        mov     edi, ebx
        shr     ecx, 0x2
        rep     stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     stosb
        mov     dword ptr [ebx], 0x13c
    L_f4c1:
        mov     eax, dword ptr [edx + 0x20]
        push    ebx
        push    esi
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x2c]
        test    esi, esi
        mov     ecx, 0x80000
        jz      L_f4e3
        mov     edx, dword ptr [esi + 0x8]
        mov     dword ptr [esi], 0x17c
        or      edx, ecx
        mov     dword ptr [esi + 0x8], edx
    L_f4e3:
        test    ebx, ebx
        jz      L_f501
        mov     edx, dword ptr [ebx + 0x8]
        pop     edi
        or      edx, ecx
        pop     esi
        mov     dword ptr [ebx], 0x17c
        mov     dword ptr [ebx + 0x8], edx
        pop     ebp
        pop     ebx
        ret     0xc
    L_f4fc:
        mov     eax, 0x80070057
    L_f501:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
