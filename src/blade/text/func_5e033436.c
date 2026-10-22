/* auto-transcribed 0x5E033436 (49 B) */
extern void __cdecl FUN_5e033467(void);

__declspec(naked) void FUN_5e033436(void)
{
    __asm {
            push ebp
            mov ebp, esp
            xor eax, eax
            cmp dword ptr [ebp+0x14], 0xa
            jnz L450
            cmp dword ptr [ebp+0xc], eax
            jg L450
            jl L44d
            cmp dword ptr [ebp+0x8], eax
            jnc L450
L44d:
            push 0x1
            pop eax
L450:
            push eax
            push dword ptr [ebp+0x14]
            push dword ptr [ebp+0x10]
            push dword ptr [ebp+0xc]
            push dword ptr [ebp+0x8]
            call FUN_5e033467
            mov eax, dword ptr [ebp+0x10]
            pop ebp
            ret
    }
}
