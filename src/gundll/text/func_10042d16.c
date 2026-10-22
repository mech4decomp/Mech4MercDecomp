// FUN_10042d16 (0x10042D16, 149 B, __stdcall)
extern unsigned long g_10054b48;
extern void __cdecl FUN_1003c5f0(unsigned long);
extern void __cdecl FUN_1003c3c5(unsigned long);
extern void __cdecl FUN_1003c500(unsigned long, unsigned long);

__declspec(naked) void FUN_10042d16(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        and dword ptr [ebp - 0x4], 0x0
        push ebx
        push esi
        push edi
        mov edi, dword ptr [g_10054b48]
        mov dword ptr [ebp - 0x8], 0xc
        lea esi, [edi + 0x38]
loc_32:
        push dword ptr [esi + 0x30]
        call FUN_1003c5f0
        push dword ptr [esi]
        mov ebx, eax
        call FUN_1003c5f0
        add eax, dword ptr [ebp - 0x4]
        pop ecx
        add esi, 0x4
        dec dword ptr [ebp - 0x8]
        pop ecx
        lea eax, [eax + ebx*1 + 0x2]
        mov dword ptr [ebp - 0x4], eax
        jnz loc_32
        inc eax
        push eax
        call FUN_1003c3c5
        mov esi, eax
        pop ecx
        test esi, esi
        mov dword ptr [ebp - 0x8], esi
        jz loc_a3
        push 0xc
        add edi, 0x68
        pop ebx
loc_6e:
        mov byte ptr [esi], 0x3a
        push dword ptr [edi - 0x30]
        inc esi
        push esi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        add esi, eax
        mov byte ptr [esi], 0x3a
        push dword ptr [edi]
        inc esi
        push esi
        call FUN_1003c500
        push eax
        call FUN_1003c5f0
        add esp, 0x18
        add esi, eax
        add edi, 0x4
        dec ebx
        jnz loc_6e
        and byte ptr [esi], 0x0
loc_a3:
        mov eax, dword ptr [ebp - 0x8]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
