/*
 * FUN_10041be2 (141 B) - __cdecl.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10041be2(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        push    0x20
        mov     edi, dword ptr [ebp + 8]
        pop     ebx
        or      esi, 0xffffffff
        cdq
        mov     ecx, ebx
        mov     dword ptr [ebp - 4], 3
        idiv    ecx
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [ebp + 0xc]
        cdq
        idiv    ecx
        and     dword ptr [ebp + 0xc], 0
        mov     ecx, edx
        shl     esi, cl
        sub     ebx, edx
        not     esi
L_18:
        mov     eax, dword ptr [edi]
        mov     ecx, eax
        and     ecx, esi
        mov     dword ptr [ebp - 8], ecx
        mov     ecx, edx
        shr     eax, cl
        or      eax, dword ptr [ebp + 0xc]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [ebp - 8]
        mov     ecx, ebx
        add     edi, 4
        shl     eax, cl
        dec     dword ptr [ebp - 4]
        mov     dword ptr [ebp + 0xc], eax
        jnz     L_18
        mov     edi, dword ptr [ebp - 0xc]
        push    2
        pop     ebx
        mov     esi, edi
        push    8
        pop     ecx
        shl     esi, 2
L_4a:
        cmp     ebx, edi
        jl      L_5d
        mov     edx, dword ptr [ebp + 8]
        mov     eax, ecx
        sub     eax, esi
        mov     eax, dword ptr [eax + edx*1]
        mov     dword ptr [ecx + edx*1], eax
        jmp     L_64
L_5d:
        mov     eax, dword ptr [ebp + 8]
        and     dword ptr [ecx + eax*1], 0
L_64:
        dec     ebx
        sub     ecx, 4
        jns     L_4a
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
