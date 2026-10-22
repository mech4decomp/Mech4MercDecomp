// FUN_10037940 (0x10037940) __stdcall, 47 bytes (stack probe)
__declspec(naked) void __stdcall func_10037940(void)
{
    __asm {
        push ecx
        cmp eax, 0x1000
        lea ecx, [esp+8]
        jc done
probe_loop:
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr [ecx], eax
        cmp eax, 0x1000
        jnc probe_loop
done:
        sub ecx, eax
        mov eax, esp
        test dword ptr [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax+4]
        push eax
        ret
    }
}
