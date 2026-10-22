// FUN_10041abe (0x10041ABE) __cdecl
extern int __cdecl FUN_10044307(int a, int b, int c);

__declspec(naked) void FUN_10041abe(void)
{
    __asm {
        mov eax, dword ptr [esp+0x8]
        push ebx
        push esi
        push edi
        push 0x20
        mov ebx, dword ptr [esp+0x14]
        cdq
        pop ecx
        idiv ecx
        mov esi, eax
        mov eax, dword ptr [esp+0x14]
        cdq
        idiv ecx
        lea edi, [ebx+esi*4]
        push edi
        push 0x1f
        pop ecx
        push 0x1
        pop eax
        sub ecx, edx
        shl eax, cl
        push eax
        push dword ptr [edi]
        call FUN_10044307
        add esp, 0xc
        dec esi
        js L_b10
        lea edi, [ebx+esi*4]
L_af7:
        test eax, eax
        jz L_b10
        push edi
        push 0x1
        push dword ptr [edi]
        call FUN_10044307
        add esp, 0xc
        dec esi
        sub edi, 0x4
        test esi, esi
        jge L_af7
L_b10:
        pop edi
        pop esi
        pop ebx
        ret
    }
}
