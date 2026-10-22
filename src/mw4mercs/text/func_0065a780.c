/*
 * FUN_0065A780 (61 B) — __thiscall (ECX = this, one stack param).
 *
 * Searches a list (from FUN_0064E100) for an entry whose first dword
 * equals param_2->[0x170]->[0x30]. Returns the matching index, or the
 * list length if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064e100(void);

__declspec(naked) int __stdcall FUN_0065a780(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [eax + 0x170]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, edi
        call    FUN_0064e100
        mov     esi, dword ptr [eax + 0x4]
        mov     ecx, edi
        call    FUN_0064e100
        mov     ecx, dword ptr [eax]
        xor     eax, eax
        cmp     ecx, esi
        jz      l_done
        mov     ebx, dword ptr [ebx + 0x30]
    l_loop:
        cmp     dword ptr [ecx], ebx
        jz      l_done
        add     ecx, 0x4
        inc     eax
        cmp     ecx, esi
        jnz     l_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
