/* auto-transcribed 0x5E0333F1 (42 B) */
extern void __cdecl FUN_5e033395(void);

__declspec(naked) void FUN_5e0333f1(void)
{
    __asm {
            push ebp
            mov ebp, esp
            xor eax, eax
            cmp dword ptr [ebp+0x10], 0xa
            jnz L404
            cmp dword ptr [ebp+0x8], eax
            jge L404
            push 0x1
            pop eax
L404:
            push eax
            push dword ptr [ebp+0x10]
            push dword ptr [ebp+0xc]
            push dword ptr [ebp+0x8]
            call FUN_5e033395
            mov eax, dword ptr [ebp+0xc]
            add esp, 0x10
            pop ebp
            ret
    }
}
