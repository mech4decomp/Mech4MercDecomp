// FUN_10041e07 (0x10041E07) __cdecl, 122 bytes
extern void __cdecl FUN_10041b14(void);

__declspec(naked) void func_10041e07(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr [ebp+8]
        push esi
        push edi
        and dword ptr [ebp-4], 0
        mov cx, word ptr [eax+0xa]
        push 0x40
        mov esi, ecx
        and ecx, 0x8000
        mov edi, ecx
        mov ecx, dword ptr [eax+6]
        mov dword ptr [ebp-0x10], ecx
        mov ecx, dword ptr [eax+2]
        movzx eax, word ptr [eax]
        shl eax, 0x10
        mov dword ptr [ebp-8], eax
        lea eax, [ebp-0x10]
        push eax
        and esi, 0x7fff
        mov dword ptr [ebp-0xc], ecx
        call FUN_10041b14
        pop ecx
        test eax, eax
        pop ecx
        jz L_58
        mov ecx, 0x80000000
        inc esi
        jmp L_5b
L_58:
        mov ecx, dword ptr [ebp-0x10]
L_5b:
        cmp si, 0x7fff
        jnz L_69
        mov dword ptr [ebp-4], 1
L_69:
        mov eax, dword ptr [ebp+0xc]
        or edi, esi
        mov dword ptr [eax+4], ecx
        mov ecx, dword ptr [ebp-0xc]
        mov word ptr [eax+8], di
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp-4]
        pop edi
        pop esi
        leave
        ret
    }
}
