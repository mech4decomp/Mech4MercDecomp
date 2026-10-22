// FUN_1003a6a8 (0x1003A6A8) __cdecl, 82 bytes
extern int g_10051988;
extern void __cdecl FUN_100406d8(void);

__declspec(naked) void FUN_1003a6a8(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        __emit 0x66  /* __emit: MSVC6 encodes cmp word ptr [ebp+8],0xffff as imm8 sign-extended (66 83 7D 08 FF); ref uses imm16 form 66 81 7D 08 FF FF */
        __emit 0x81
        __emit 0x7D
        __emit 0x08
        __emit 0xFF
        __emit 0xFF
        jz  Le8
        cmp word ptr [ebp+0x8], 0x100
        jnc Lcc
        movzx eax, word ptr [ebp+0x8]
        mov ecx, dword ptr [g_10051988]
        mov ax, word ptr [ecx+eax*2]
        jmp Lef
Lcc:
        push 0x0
        lea eax, [ebp-0x4]
        push 0x0
        push eax
        lea eax, [ebp+0x8]
        push 0x1
        push eax
        push 0x1
        call FUN_100406d8
        add esp, 0x18
        test eax, eax
        jnz Lec
Le8:
        xor eax, eax
        leave
        ret
Lec:
        mov eax, dword ptr [ebp-0x4]
Lef:
        movzx ecx, word ptr [ebp+0xc]
        movzx eax, ax
        and eax, ecx
        leave
        ret
    }
}
