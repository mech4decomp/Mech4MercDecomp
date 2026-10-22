// FUN_100425d8 (0x100425D8) __cdecl, 237 bytes
extern void __cdecl FUN_10040b65(void *);
extern int __cdecl FUN_1004209b(void *, unsigned short);
extern int * __cdecl FUN_1004277d(void);
extern unsigned int g_10076aa0[];

__declspec(naked) void FUN_100425d8(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp+8]
        __emit 0x66   /* __emit: cmp bx,0xffff; MSVC6 picks imm8 form 66 83 FB FF, ref needs imm16 66 81 FB FF FF */
        __emit 0x81
        __emit 0xFB
        __emit 0xFF
        __emit 0xFF
        push esi
        jz loc_42657
        mov esi, dword ptr [ebp+0xc]
        mov eax, dword ptr [esi+0xc]
        test al, 1
        jnz loc_425f9
        test al, 0x80
        jz loc_42657
        test al, 2
        jnz loc_42657
loc_425f9:
        cmp dword ptr [esi+8], 0
        jnz loc_42606
        push esi
        call FUN_10040b65
        pop ecx
loc_42606:
        mov eax, dword ptr [esi+0xc]
        test al, 0x40
        jnz loc_42699
        mov ecx, dword ptr [esi+0x10]
        cmp ecx, -1
        jz loc_42630
        mov edx, ecx
        sar edx, 5
        and ecx, 0x1f
        mov edx, dword ptr [edx*4 + g_10076aa0]
        lea ecx, [ecx+ecx*8]
        lea ecx, [edx+ecx*4]
        jmp loc_42635
loc_42630:
        mov ecx, 0x100518b8
loc_42635:
        test byte ptr [ecx+4], 0x80
        jz loc_42699
        lea eax, [ebp+8]
        push ebx
        push eax
        call FUN_1004209b
        pop ecx
        cmp eax, -1
        pop ecx
        jnz loc_4265f
        call FUN_1004277d
        mov dword ptr [eax], 0x2a
loc_42657:
        or ax, 0xffff
loc_4265b:
        pop esi
        pop ebx
        pop ebp
        ret
loc_4265f:
        mov ecx, dword ptr [esi]
        cmp ecx, dword ptr [esi+8]
        jnz loc_42670
        cmp dword ptr [esi+4], 0
        jnz loc_42657
        add ecx, eax
        mov dword ptr [esi], ecx
loc_42670:
        cmp eax, 1
        jz loc_4267e
        dec dword ptr [esi]
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ebp+9]
        mov byte ptr [ecx], dl
loc_4267e:
        dec dword ptr [esi]
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [ebp+8]
        mov byte ptr [ecx], dl
        add dword ptr [esi+4], eax
        mov eax, dword ptr [esi+0xc]
        and al, 0xef
        or al, 1
        mov dword ptr [esi+0xc], eax
        mov ax, bx
        jmp loc_4265b
loc_42699:
        mov ecx, dword ptr [esi]
        cmp ecx, dword ptr [esi+8]
        jnz loc_426ab
        cmp dword ptr [esi+4], 0
        jnz loc_42657
        add ecx, 2
        mov dword ptr [esi], ecx
loc_426ab:
        add dword ptr [esi+4], 2
        and al, 0xef
        or al, 1
        add dword ptr [esi], -2
        mov dword ptr [esi+0xc], eax
        mov eax, dword ptr [esi]
        mov word ptr [eax], bx
        mov eax, dword ptr [esi]
        mov ax, word ptr [eax]
        jmp loc_4265b
    }
}
