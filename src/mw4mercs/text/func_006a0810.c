/*
 * FUN_006A0810 (103 B) — Searches a vector (via FUN_0064e100) for an
 * element whose first dword equals param_1+0x30, returning the element
 * index (or the vector size if not found).
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064e100(void);

__declspec(naked) int __cdecl FUN_006a0810(int param_1)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_0064e100
        mov     edi, dword ptr [eax + 0x4]
        mov     ecx, ebx
        call    FUN_0064e100
        mov     esi, dword ptr [eax]
        cmp     esi, edi
        jz      l_0840
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x30]
    l_0835:
        cmp     dword ptr [esi], eax
        jz      l_0840
        add     esi, 0x4
        cmp     esi, edi
        jnz     l_0835
    l_0840:
        mov     ecx, ebx
        call    FUN_0064e100
        cmp     esi, dword ptr [eax + 0x4]
        mov     ecx, ebx
        jnz     l_0863
        call    FUN_0064e100
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ecx]
        pop     edi
        sub     eax, edx
        pop     esi
        sar     eax, 0x2
        pop     ebx
        ret
    l_0863:
        call    FUN_0064e100
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     eax, esi
        pop     edi
        sub     eax, edx
        pop     esi
        sar     eax, 0x2
        pop     ebx
        ret
    }
}
