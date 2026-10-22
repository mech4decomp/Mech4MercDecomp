// FUN_10040499 (0x10040499) __cdecl
extern void* g_10075718;
extern void __cdecl FUN_10040617(void);
extern int g_10075708;
extern void __cdecl FUN_10040650(void);
extern void __cdecl FUN_1003c5f0(void);

__declspec(naked) void func_10040499(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x78
        lea eax, [ebp-0x78]
        push 0x78
        push eax
        mov eax, dword ptr [ebp+8]
        and eax, 0x3ff
        push 1
        or ah, 4
        push eax
        call dword ptr [g_10075718]
        test eax, eax
        je LF2
        lea eax, [ebp-0x78]
        push eax
        call FUN_10040617
        cmp dword ptr [ebp+8], eax
        pop ecx
        je LF6
        cmp dword ptr [ebp+0xc], 0
        je LF6
        push esi
        push dword ptr [g_10075708]
        call FUN_10040650
        push dword ptr [g_10075708]
        mov esi, eax
        call FUN_1003c5f0
        pop ecx
        cmp esi, eax
        pop ecx
        pop esi
        jne LF6
LF2:
        xor eax, eax
        leave
        ret
LF6:
        push 1
        pop eax
        leave
        ret
    }
}
