/*
 * __mbsnbicoll (63 B) - statically-linked CRT multibyte string collation
 * helper. __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abe8;
extern int g_5e77ae04;

extern int __cdecl FUN_5e0342af(void);

__declspec(naked) int __mbsnbicoll(void)
{
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp+0x10], 0
        jnz L420f
        xor eax, eax
        pop ebp
        ret
    L420f:
        push dword ptr [g_5e77abe8]
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0x8]
        push 1
        push dword ptr [g_5e77ae04]
        call FUN_5e0342af
        add esp, 0x1c
        test eax, eax
        jnz L423c
        mov eax, 0x7fffffff
        pop ebp
        ret
    L423c:
        add eax, -2
        pop ebp
        ret
    }
}
