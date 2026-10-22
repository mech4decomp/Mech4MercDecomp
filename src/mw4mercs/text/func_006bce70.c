/*
 * FUN_006bce70 (222 B) — Object comparator.
 *
 * Compares two objects (via their vtable/type pointers and nested
 * sub-object fields), returning -1/0/1 ordering.
 *
 * __cdecl, RET (two stack params, no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_006bce70(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [edx]
        push    edi
        mov     edi, dword ptr [ecx]
        mov     ecx, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [ecx]
        cmp     eax, ecx
        jnz     loc_6bcf3d
        mov     eax, dword ptr [esi + 0x3c]
        push    ebx
        mov     ebx, dword ptr [eax]
        xor     edx, edx
        xor     ecx, ecx
        test    ebx, ebx
        push    ebp
        jnz     loc_6bcead
        mov     ecx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [edi + 0x20]
        mov     edx, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [eax + 0x8]
        jmp     loc_6bcee7
loc_6bcead:
        test    esi, esi
        mov     eax, esi
        jz      loc_6bceca
loc_6bceb3:
        mov     ebx, dword ptr [eax + 0x20]
        mov     ebp, dword ptr [ebx + 0x8]
        mov     ebx, dword ptr [eax + 0x3c]
        add     edx, ebp
        cmp     dword ptr [ebx], 0
        jz      loc_6bceca
        mov     eax, dword ptr [eax + 0x30]
        test    eax, eax
        jnz     loc_6bceb3
loc_6bceca:
        test    edi, edi
        mov     eax, edi
        jz      loc_6bcee7
loc_6bced0:
        mov     ebx, dword ptr [eax + 0x20]
        mov     ebp, dword ptr [ebx + 0x8]
        mov     ebx, dword ptr [eax + 0x3c]
        add     ecx, ebp
        cmp     dword ptr [ebx], 0
        jz      loc_6bcee7
        mov     eax, dword ptr [eax + 0x30]
        test    eax, eax
        jnz     loc_6bced0
loc_6bcee7:
        cmp     edx, ecx
        pop     ebp
        pop     ebx
        jnz     loc_6bcf2b
        mov     esi, dword ptr [esi + 0x20]
        mov     eax, dword ptr [edi + 0x20]
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [eax + 0x4]
        cmp     ecx, edx
        jge     loc_6bcf03
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        ret
loc_6bcf03:
        jle     loc_6bcf0d
        pop     edi
        mov     eax, 1
        pop     esi
        ret
loc_6bcf0d:
        mov     esi, dword ptr [esi]
        mov     eax, dword ptr [eax]
        cmp     esi, eax
        jnz     loc_6bcf1a
        pop     edi
        xor     eax, eax
        pop     esi
        ret
loc_6bcf1a:
        xor     ecx, ecx
        cmp     esi, eax
        setge   cl
        pop     edi
        pop     esi
        dec     ecx
        and     ecx, 0xfffffffe
        inc     ecx
        mov     eax, ecx
        ret
loc_6bcf2b:
        jge     loc_6bcf33
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        ret
loc_6bcf33:
        xor     eax, eax
        cmp     edx, ecx
        pop     edi
        setg    al
        pop     esi
        ret
loc_6bcf3d:
        xor     edx, edx
        cmp     eax, ecx
        setge   dl
        pop     edi
        pop     esi
        dec     edx
        and     edx, 0xfffffffe
        inc     edx
        mov     eax, edx
        ret
    }
}
