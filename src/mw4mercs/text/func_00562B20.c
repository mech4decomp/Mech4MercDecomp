/*
 * FUN_00562B20 (55 B) — Median-of-3: dereferences three int pointers and
 * returns a pointer to the median value.
 * __cdecl (plain ret, no stack cleanup).
 * CFLAGS: /O1
 */

__declspec(naked) int * __cdecl FUN_00562B20(int *a, int *b, int *c)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [esp + 0xC]
        mov     edx, dword ptr [ebx]
        cmp     ecx, edx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [edi]
        jae     a_ge_b
        ; a < b
        cmp     edx, esi
        jb      return_b
        cmp     ecx, esi
        jae     return_c
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    a_ge_b:
        cmp     ecx, esi
        jb      return_c
        cmp     edx, esi
        mov     eax, edi
        jb      return_c
    return_b:
        mov     eax, ebx
    return_c:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
