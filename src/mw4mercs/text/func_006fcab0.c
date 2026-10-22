/*
 * FUN_006FCAB0 (78 B) — Advertise item with name/value validation.
 *
 * __cdecl, RET 12 (3 params). If both param2 and param3 are non-null,
 * calls FUN_006F9000 and returns 1. Otherwise, substitutes missing
 * params with a default string at 0x007741DC and calls FUN_006FABF0
 * with a format string. If the call returns non-zero, INT3s. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f9000(int, int, int);
extern int __cdecl FUN_006fabf0(const char *, int, int);

__declspec(naked) void __cdecl FUN_006fcab0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xC]
        test    eax, eax
        mov     ecx, dword ptr [ebp + 0x10]
        jz      l_check2
        test    ecx, ecx
        jz      l_subst2
        push    ecx
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    eax
        call    FUN_006f9000
        mov     al, 1
        pop     ebp
        ret     0xC
    l_check2:
        test    ecx, ecx
        jnz     l_subst1
    l_subst2:
        test    eax, eax
        mov     ecx, 0x7741DC
        jnz     l_call
    l_subst1:
        mov     eax, 0x7741DC
    l_call:
        push    ecx
        push    eax
        push    0x7A034C
        call    FUN_006fabf0
        add     esp, 0xC
        test    eax, eax
        jz      l_done
        int     3
    l_done:
        xor     al, al
        pop     ebp
        ret     0xC
    }
}
