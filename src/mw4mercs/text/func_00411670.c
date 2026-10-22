/*
 * FUN_00411670 (399 B) — red-black tree delete fixup. Walks the
 * tree from the removed node, recoloring and rotating to restore
 * the red-black invariants, updating the root pointer in param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00411670(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebx]
        cmp     eax, edi
        mov     byte ptr [eax], 0
        jz      L117ed
L11688:
        mov     ecx, dword ptr [eax + 4]
        cmp     byte ptr [ecx], 0
        jnz     L117f6
        mov     esi, dword ptr [ecx + 4]
        mov     edx, dword ptr [esi + 8]
        cmp     ecx, edx
        jnz     L11748
        mov     edx, dword ptr [esi + 0xc]
        test    edx, edx
        jz      L116bf
        cmp     byte ptr [edx], 0
        jnz     L116bf
        mov     byte ptr [ecx], 1
        mov     eax, dword ptr [ecx + 4]
        mov     byte ptr [edx], 1
        mov     byte ptr [eax], 0
        jmp     L117da
L116bf:
        cmp     eax, dword ptr [ecx + 0xc]
        jnz     L116fa
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [ecx + 8]
        test    edx, edx
        mov     dword ptr [eax + 0xc], edx
        jz      L116d6
        mov     dword ptr [edx + 4], eax
L116d6:
        cmp     eax, edi
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 4], edx
        jnz     L116e4
        mov     dword ptr [ebx], ecx
        jmp     L116f4
L116e4:
        mov     edx, dword ptr [eax + 4]
        cmp     eax, dword ptr [edx + 8]
        jnz     L116f1
        mov     dword ptr [edx + 8], ecx
        jmp     L116f4
L116f1:
        mov     dword ptr [edx + 0xc], ecx
L116f4:
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [eax + 4], ecx
L116fa:
        mov     ecx, dword ptr [eax + 4]
        mov     byte ptr [ecx], 1
        mov     ecx, dword ptr [ecx + 4]
        mov     edx, dword ptr [ecx + 8]
        mov     esi, dword ptr [edx + 0xc]
        test    esi, esi
        mov     byte ptr [ecx], 0
        mov     dword ptr [ecx + 8], esi
        jz      L11716
        mov     dword ptr [esi + 4], ecx
L11716:
        mov     esi, dword ptr [ecx + 4]
        mov     dword ptr [edx + 4], esi
        cmp     ecx, dword ptr [ebx]
        jnz     L1172a
        mov     dword ptr [ebx], edx
        mov     dword ptr [edx + 0xc], ecx
        jmp     L117d7
L1172a:
        mov     esi, dword ptr [ecx + 4]
        cmp     ecx, dword ptr [esi + 0xc]
        jnz     L1173d
        mov     dword ptr [esi + 0xc], edx
        mov     dword ptr [edx + 0xc], ecx
        jmp     L117d7
L1173d:
        mov     dword ptr [esi + 8], edx
        mov     dword ptr [edx + 0xc], ecx
        jmp     L117d7
L11748:
        test    edx, edx
        jz      L1175f
        cmp     byte ptr [edx], 0
        jnz     L1175f
        mov     byte ptr [ecx], 1
        mov     eax, dword ptr [ecx + 4]
        mov     byte ptr [edx], 1
        mov     byte ptr [eax], 0
        jmp     L117da
L1175f:
        cmp     eax, dword ptr [ecx + 8]
        jnz     L1179a
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [ecx + 0xc]
        test    edx, edx
        mov     dword ptr [eax + 8], edx
        jz      L11776
        mov     dword ptr [edx + 4], eax
L11776:
        cmp     eax, edi
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 4], edx
        jnz     L11784
        mov     dword ptr [ebx], ecx
        jmp     L11794
L11784:
        mov     edx, dword ptr [eax + 4]
        cmp     eax, dword ptr [edx + 0xc]
        jnz     L11791
        mov     dword ptr [edx + 0xc], ecx
        jmp     L11794
L11791:
        mov     dword ptr [edx + 8], ecx
L11794:
        mov     dword ptr [ecx + 0xc], eax
        mov     dword ptr [eax + 4], ecx
L1179a:
        mov     ecx, dword ptr [eax + 4]
        mov     byte ptr [ecx], 1
        mov     ecx, dword ptr [ecx + 4]
        mov     edx, dword ptr [ecx + 0xc]
        mov     esi, dword ptr [edx + 8]
        test    esi, esi
        mov     byte ptr [ecx], 0
        mov     dword ptr [ecx + 0xc], esi
        jz      L117b6
        mov     dword ptr [esi + 4], ecx
L117b6:
        mov     esi, dword ptr [ecx + 4]
        mov     dword ptr [edx + 4], esi
        cmp     ecx, dword ptr [ebx]
        jnz     L117c4
        mov     dword ptr [ebx], edx
        jmp     L117d4
L117c4:
        mov     esi, dword ptr [ecx + 4]
        cmp     ecx, dword ptr [esi + 8]
        jnz     L117d1
        mov     dword ptr [esi + 8], edx
        jmp     L117d4
L117d1:
        mov     dword ptr [esi + 0xc], edx
L117d4:
        mov     dword ptr [edx + 8], ecx
L117d7:
        mov     dword ptr [ecx + 4], edx
L117da:
        mov     edi, dword ptr [ebx]
        cmp     eax, edi
        jnz     L11688
        mov     eax, edi
        pop     edi
        pop     esi
        mov     byte ptr [eax], 1
        pop     ebx
        ret
L117ed:
        mov     ecx, dword ptr [ebx]
        pop     edi
        pop     esi
        mov     byte ptr [ecx], 1
        pop     ebx
        ret
L117f6:
        mov     edx, dword ptr [ebx]
        pop     edi
        pop     esi
        mov     byte ptr [edx], 1
        pop     ebx
        ret
    }
}
