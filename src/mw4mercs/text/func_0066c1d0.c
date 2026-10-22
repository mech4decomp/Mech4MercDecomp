/*
 * FUN_0066c1d0 (323 B) - AnimationStateEngine keyframe/curve setup.
 * __thiscall, RET 0x4. Validates the source object (virtual +4 returns a
 * string, must be empty), then reads a 5-entry table from the object and
 * computes per-channel offsets into EDI. Returns 1 on success, 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0066c1d0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    dword ptr [eax + 4]
        cmp     byte ptr [eax], 0
        jz      L_c1f5
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_c1f5:
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        mov     ecx, dword ptr [esi + 0x10]
        mov     ebx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi]
        sub     ebx, ecx
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     ebp, eax
        cmp     dword ptr [ebp], 2
        mov     dword ptr [edi + 4], ebp
        jz      L_c224
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_c224:
        cmp     dword ptr [ebp + 4], 1
        jz      L_c236
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_c236:
        mov     eax, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x24], eax
        add     eax, ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi + 0xc], eax
        mov     eax, dword ptr [ebp + 0x1c]
        mov     dword ptr [esp + 0x10], eax
        add     eax, ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi + 0x14], eax
        mov     eax, dword ptr [ebp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        add     eax, ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi + 0x1c], eax
        mov     eax, dword ptr [ebp + 0x24]
        mov     dword ptr [esp + 0x18], eax
        add     eax, ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi + 0x24], eax
        mov     eax, dword ptr [ebp + 0x28]
        mov     dword ptr [esp + 0x1c], eax
        add     eax, ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     ebp, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [esi]
        mov     dword ptr [edi + 0x2c], eax
        lea     eax, [ebx + ebp]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, eax
        sub     ecx, ebx
        mov     dword ptr [edi + 8], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, ecx
        sub     edx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x10], edx
        mov     edx, eax
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x18], edx
        mov     edx, ecx
        sub     edx, eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x20], edx
        mov     edx, eax
        sub     edx, ecx
        mov     dword ptr [edi + 0x28], edx
        sub     ebp, eax
        mov     dword ptr [edi + 0x30], ebp
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
