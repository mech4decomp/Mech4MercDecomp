/* FUN_00429e60 - MLR object destructor (vtable 0x76e018) */
extern void __cdecl FUN_00482150(void);

__declspec(naked) void func_00429e60(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8c]
        test ecx, ecx
        mov dword ptr [esi], 0x76e018
        jz short L_429e82
        dec dword ptr [ecx + 0x8]
        jnz short L_429e82
        test ecx, ecx
        jz short L_429e82
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
L_429e82:
        mov ecx, esi
        call FUN_00482150
        pop esi
        ret
    }
}
