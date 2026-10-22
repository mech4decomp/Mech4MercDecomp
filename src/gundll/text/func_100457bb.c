/* FUN_100457bb __cdecl 0x100457BB */
extern void __cdecl FUN_10044307(void);
extern void __cdecl FUN_10044386(void);
extern void __cdecl FUN_100443b4(void);

__declspec(naked) void FUN_100457bb(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr [ebp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 8]
        mov cx, word ptr [ebx + 0xa]
        xor eax, eax
        push edi
        mov dword ptr [ebp - 0x14], eax
        mov dword ptr [ebp - 0x24], eax
        mov dword ptr [ebp - 0x20], eax
        mov dword ptr [ebp - 0x1c], eax
        mov ax, word ptr [esi + 0xa]
        mov edi, ecx
        mov edx, 0x7fff
        xor edi, eax
        and eax, edx
        and ecx, edx
        and edi, 0x8000
        cmp ax, 0x7fff
        lea edx, [ecx + eax*1]
        mov dword ptr [ebp + 8], edx
        jnc L_459bb
        cmp cx, 0x7fff
        jnc L_459bb
        cmp dx, 0xbffd
        ja L_459bb
        cmp dx, 0x3fbf
        ja L_45824
        xor eax, eax
        jmp L_4585e
L_45824:
        test ax, ax
        mov edx, 0x7fffffff
        jnz L_45846
        inc dword ptr [ebp + 8]
        test dword ptr [esi + 8], edx
        jnz L_45846
        xor eax, eax
        cmp dword ptr [esi + 4], eax
        jnz L_45848
        cmp dword ptr [esi], eax
        jnz L_45848
        jmp L_459b5
L_45846:
        xor eax, eax
L_45848:
        cmp cx, ax
        jnz L_4586b
        inc dword ptr [ebp + 8]
        test dword ptr [ebx + 8], edx
        jnz L_4586b
        cmp dword ptr [ebx + 4], eax
        jnz L_4586b
        cmp dword ptr [ebx], eax
        jnz L_4586b
L_4585e:
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi], eax
        jmp L_459d6
L_4586b:
        mov dword ptr [ebp - 0x10], eax
        lea eax, [ebp - 0x20]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp + 0xc], 5
L_4587b:
        mov eax, dword ptr [ebp - 0x10]
        add eax, eax
        cmp dword ptr [ebp + 0xc], 0
        jle L_458cf
        add eax, esi
        lea ecx, [ebx + 8]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0xc], ecx
        mov dword ptr [ebp - 0x18], eax
L_45897:
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0xc]
        movzx eax, word ptr [eax]
        movzx ecx, word ptr [ecx]
        imul eax, ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, -4
        push ecx
        push eax
        push dword ptr [ecx]
        call FUN_10044307
        add esp, 0xc
        test eax, eax
        jz L_458c2
        mov eax, dword ptr [ebp - 4]
        inc word ptr [eax]
L_458c2:
        add dword ptr [ebp - 8], 2
        sub dword ptr [ebp - 0xc], 2
        dec dword ptr [ebp - 0x18]
        jnz L_45897
L_458cf:
        add dword ptr [ebp - 4], 2
        inc dword ptr [ebp - 0x10]
        dec dword ptr [ebp + 0xc]
        cmp dword ptr [ebp + 0xc], 0
        jg L_4587b
        add dword ptr [ebp + 8], 0xc002
        cmp word ptr [ebp + 8], 0
        jle L_45912
L_458ed:
        test byte ptr [ebp - 0x19], 0x80
        jnz L_4590b
        lea eax, [ebp - 0x24]
        push eax
        call FUN_10044386
        add dword ptr [ebp + 8], 0xffff
        pop ecx
        cmp word ptr [ebp + 8], 0
        jg L_458ed
L_4590b:
        cmp word ptr [ebp + 8], 0
        jg L_4594b
L_45912:
        add dword ptr [ebp + 8], 0xffff
        cmp word ptr [ebp + 8], 0
        jge L_4594b
        movsx eax, word ptr [ebp + 8]
        neg eax
        add dword ptr [ebp + 8], eax
        mov ebx, eax
L_4592b:
        test byte ptr [ebp - 0x24], 1
        jz L_45934
        inc dword ptr [ebp - 0x14]
L_45934:
        lea eax, [ebp - 0x24]
        push eax
        call FUN_100443b4
        dec ebx
        pop ecx
        jnz L_4592b
        cmp dword ptr [ebp - 0x14], 0
        jz L_4594b
        or byte ptr [ebp - 0x24], 1
L_4594b:
        cmp word ptr [ebp - 0x24], 0x8000
        ja L_45962
        mov eax, dword ptr [ebp - 0x24]
        and eax, 0x1ffff
        cmp eax, 0x18000
        jnz L_45997
L_45962:
        cmp dword ptr [ebp - 0x22], -1
        jnz L_45994
        and dword ptr [ebp - 0x22], 0
        cmp dword ptr [ebp - 0x1e], -1
        jnz L_4598f
        and dword ptr [ebp - 0x1e], 0
        __emit 0x66 /* __emit: MSVC6 encodes cmp word ptr [mem],0xffff as imm8 sign-extended (83 /7); ref uses imm16 form (81 /7) */
        __emit 0x81
        __emit 0x7D
        __emit 0xE6
        __emit 0xFF
        __emit 0xFF
        jnz L_45989
        inc dword ptr [ebp + 8]
        mov word ptr [ebp - 0x1a], 0x8000
        jmp L_45997
L_45989:
        inc word ptr [ebp - 0x1a]
        jmp L_45997
L_4598f:
        inc dword ptr [ebp - 0x1e]
        jmp L_45997
L_45994:
        inc dword ptr [ebp - 0x22]
L_45997:
        mov eax, dword ptr [ebp + 8]
        cmp ax, 0x7fff
        jnc L_459bb
        mov cx, word ptr [ebp - 0x22]
        or eax, edi
        mov word ptr [esi], cx
        mov ecx, dword ptr [ebp - 0x20]
        mov dword ptr [esi + 2], ecx
        mov ecx, dword ptr [ebp - 0x1c]
        mov dword ptr [esi + 6], ecx
L_459b5:
        mov word ptr [esi + 0xa], ax
        jmp L_459d6
L_459bb:
        neg di
        sbb edi, edi
        and dword ptr [esi + 4], 0
        and edi, 0x80000000
        add edi, 0x7fff8000
        and dword ptr [esi], 0
        mov dword ptr [esi + 8], edi
L_459d6:
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
