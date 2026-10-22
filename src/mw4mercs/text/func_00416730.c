/*
 * FUN_00416730 (102 B) — DB item/pool iterator helper (__thiscall, one
 * stack arg). Iterates the node list at [this+0x14], calling virtual
 * [vtbl+0x18] on each; counts matches against the arg. Returns the
 * virtual result when the count reaches the arg, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416840(void);

__declspec(naked) void FUN_00416730(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebx, ebx
        mov     edi, ecx
        push    ebx
        call    FUN_00416840
        mov     esi, dword ptr [edi + 0x14]
        test    esi, esi
        jz      ret0
        mov     ebp, dword ptr [esp + 0x14]
outer:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        test    eax, eax
        jz      next
count:
        cmp     ebx, ebp
        jz      found
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        inc     ebx
        call    dword ptr [eax + 0x18]
        test    eax, eax
        jnz     count
next:
        mov     ecx, dword ptr [edi + 0x10]
        inc     ecx
        push    ecx
        mov     ecx, edi
        call    FUN_00416840
        mov     esi, dword ptr [edi + 0x14]
        test    esi, esi
        jnz     outer
ret0:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
found:
        mov     ecx, dword ptr [edi + 0x14]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
