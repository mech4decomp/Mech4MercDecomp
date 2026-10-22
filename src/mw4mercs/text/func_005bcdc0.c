/*
 * FUN_005bcdc0 (45 B) — __cdecl, 4 args, returns bool in AL.
 *   Range check: returns 1 if (b-a) in (0, c] or (b-a+d) in (0, c], else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __cdecl FUN_005bcdc0(int a, int b, int c, int d)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 0xc]
        sub     eax, edx
        test    eax, eax
        jle     l_second
        cmp     eax, ecx
        jg      l_second
        mov     al, 1
        ret
    l_second:
        mov     edx, dword ptr [esp + 0x10]
        add     eax, edx
        test    eax, eax
        jle     l_false
        cmp     eax, ecx
        jg      l_false
        mov     al, 1
        ret
    l_false:
        xor     al, al
        ret
    }
}
