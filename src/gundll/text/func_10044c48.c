// FUN_10044c48 (0x10044C48) __cdecl, 231 bytes
extern void __cdecl FUN_10040b65(void *);
extern int __cdecl FUN_10045a57(int, void *, void *);
extern unsigned int g_10076aa0[];

__declspec(naked) void FUN_10044c48(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+8]
        mov eax, dword ptr [esi+0xc]
        test al, 0x83
        jz loc_4d28
        test al, 0x40
        jnz loc_4d28
        test al, 0x2
        jz loc_4c6e
        or al, 0x20
        mov dword ptr [esi+0xc], eax
        jmp loc_4d28
loc_4c6e:
        or al, 0x1
        test ax, 0x10c
        mov dword ptr [esi+0xc], eax
        jnz loc_4c82
        push esi
        call FUN_10040b65
        pop ecx
        jmp loc_4c87
loc_4c82:
        mov eax, dword ptr [esi+8]
        mov dword ptr [esi], eax
loc_4c87:
        push dword ptr [esi+0x18]
        push dword ptr [esi+8]
        push dword ptr [esi+0x10]
        call FUN_10045a57
        add esp, 0xc
        mov dword ptr [esi+4], eax
        test eax, eax
        jz loc_4d17
        cmp eax, 1
        jz loc_4d17
        cmp eax, -1
        jz loc_4d17
        mov edx, dword ptr [esi+0xc]
        test dl, 0x82
        jnz loc_4ce8
        mov ecx, dword ptr [esi+0x10]
        push edi
        cmp ecx, -1
        jz loc_4cd1
        mov edi, ecx
        sar edi, 5
        and ecx, 0x1f
        mov edi, dword ptr [edi*4 + g_10076aa0]
        lea ecx, [ecx+ecx*8]
        lea edi, [edi+ecx*4]
        jmp loc_4cd6
loc_4cd1:
        mov edi, 0x100518b8
loc_4cd6:
        mov cl, byte ptr [edi+4]
        pop edi
        and cl, 0x82
        cmp cl, 0x82
        jnz loc_4ce8
        or dh, 0x20
        mov dword ptr [esi+0xc], edx
loc_4ce8:
        cmp dword ptr [esi+0x18], 0x200
        jnz loc_4d05
        mov ecx, dword ptr [esi+0xc]
        test cl, 8
        jz loc_4d05
        test ch, 4
        jnz loc_4d05
        mov dword ptr [esi+0x18], 0x1000
loc_4d05:
        mov ecx, dword ptr [esi]
        add eax, -2
        mov dword ptr [esi+4], eax
        movzx eax, word ptr [ecx]
        add ecx, 2
        mov dword ptr [esi], ecx
        pop esi
        ret
loc_4d17:
        neg eax
        sbb eax, eax
        and eax, 0x10
        add eax, 0x10
        or dword ptr [esi+0xc], eax
        and dword ptr [esi+4], 0
loc_4d28:
        mov eax, 0xffff
        pop esi
        ret
    }
}
