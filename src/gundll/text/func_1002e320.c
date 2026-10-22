// FUN_1002e320 (__thiscall, 81 bytes)
extern void __cdecl FUN_1002e900(void);

__declspec(naked) void FUN_1002e320(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        mov edx, dword ptr [esp+0x8]
        test edx, edx
        mov dword ptr [ecx], 2
        mov dword ptr [ecx+0x14], 1
        mov dword ptr [ecx+0x18], 0
        mov dword ptr [ecx+0x24], 0
        mov dword ptr [ecx+0x434], 0
        mov dword ptr [ecx+0x4], eax
        mov dword ptr [ecx+0x8], eax
        mov dword ptr [ecx+0xc], edx
        mov dword ptr [ecx+0x2c], eax
        mov dword ptr [ecx+0x10], 0xffffffff
        jnz L1
        xor eax, eax
        ret 0x8
    L1:
        call FUN_1002e900
        ret 0x8
    }
}
