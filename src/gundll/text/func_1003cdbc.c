/* FUN_1003cdbc __thiscall 0x1003CDBC */
extern void __cdecl FUN_100399db(void);
extern void __cdecl FUN_10042797(void);
extern void __cdecl FUN_1004277d(void);
extern int g_10051b90;
extern char *g_10051984;

__declspec(naked) void FUN_1003cdbc(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xc
        push ebx
        and dword ptr [ebp - 8], 0
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov bl, byte ptr [edi]
        lea esi, [edi + 1]
        mov dword ptr [ebp - 4], esi
L_cdd4:
        cmp dword ptr [g_10051b90], 1
        jle L_cdec
        movzx eax, bl
        push 8
        push eax
        call FUN_100399db
        pop ecx
        pop ecx
        jmp L_cdfb
L_cdec:
        mov ecx, dword ptr [g_10051984]
        movzx eax, bl
        mov al, byte ptr [ecx + eax*2]
        and eax, 8
L_cdfb:
        test eax, eax
        jz L_ce04
        mov bl, byte ptr [esi]
        inc esi
        jmp L_cdd4
L_ce04:
        cmp bl, 0x2d
        mov dword ptr [ebp - 4], esi
        jnz L_ce12
        or dword ptr [ebp + 0x14], 2
        jmp L_ce17
L_ce12:
        cmp bl, 0x2b
        jnz L_ce1d
L_ce17:
        mov bl, byte ptr [esi]
        inc esi
        mov dword ptr [ebp - 4], esi
L_ce1d:
        mov eax, dword ptr [ebp + 0x10]
        test eax, eax
        jl L_cfb1
        cmp eax, 1
        jz L_cfb1
        cmp eax, 0x24
        jg L_cfb1
        push 0x10
        test eax, eax
        pop ecx
        jnz L_ce65
        cmp bl, 0x30
        jz L_ce4f
        mov dword ptr [ebp + 0x10], 0xa
        jmp L_ce81
L_ce4f:
        mov al, byte ptr [esi]
        cmp al, 0x78
        jz L_ce62
        cmp al, 0x58
        jz L_ce62
        mov dword ptr [ebp + 0x10], 8
        jmp L_ce81
L_ce62:
        mov dword ptr [ebp + 0x10], ecx
L_ce65:
        cmp dword ptr [ebp + 0x10], ecx
        jnz L_ce81
        cmp bl, 0x30
        jnz L_ce81
        mov al, byte ptr [esi]
        cmp al, 0x78
        jz L_ce79
        cmp al, 0x58
        jnz L_ce81
L_ce79:
        mov bl, byte ptr [esi + 1]
        inc esi
        inc esi
        mov dword ptr [ebp - 4], esi
L_ce81:
        or eax, 0xffffffff
        xor edx, edx
        div dword ptr [ebp + 0x10]
        mov edi, 0x103
        mov dword ptr [ebp - 0xc], eax
L_ce91:
        cmp dword ptr [g_10051b90], 1
        movzx esi, bl
        jle L_cea9
        push 4
        push esi
        call FUN_100399db
        pop ecx
        pop ecx
        jmp L_ceb4
L_cea9:
        mov eax, dword ptr [g_10051984]
        mov al, byte ptr [eax + esi*2]
        and eax, 4
L_ceb4:
        test eax, eax
        jz L_cec0
        movsx ecx, bl
        sub ecx, 0x30
        jmp L_cef2
L_cec0:
        cmp dword ptr [g_10051b90], 1
        jle L_ced4
        push edi
        push esi
        call FUN_100399db
        pop ecx
        pop ecx
        jmp L_cedf
L_ced4:
        mov eax, dword ptr [g_10051984]
        mov ax, word ptr [eax + esi*2]
        and eax, edi
L_cedf:
        test eax, eax
        jz L_cf2d
        movsx eax, bl
        push eax
        call FUN_10042797
        pop ecx
        mov ecx, eax
        sub ecx, 0x37
L_cef2:
        cmp ecx, dword ptr [ebp + 0x10]
        jnc L_cf2d
        mov esi, dword ptr [ebp - 8]
        or dword ptr [ebp + 0x14], 8
        cmp esi, dword ptr [ebp - 0xc]
        jc L_cf17
        jnz L_cf11
        or eax, 0xffffffff
        xor edx, edx
        div dword ptr [ebp + 0x10]
        cmp ecx, edx
        jbe L_cf17
L_cf11:
        or dword ptr [ebp + 0x14], 4
        jmp L_cf20
L_cf17:
        imul esi, dword ptr [ebp + 0x10]
        add esi, ecx
        mov dword ptr [ebp - 8], esi
L_cf20:
        mov eax, dword ptr [ebp - 4]
        inc dword ptr [ebp - 4]
        mov bl, byte ptr [eax]
        jmp L_ce91
L_cf2d:
        mov eax, dword ptr [ebp + 0x14]
        dec dword ptr [ebp - 4]
        mov ebx, dword ptr [ebp + 0xc]
        test al, 8
        jnz L_cf4a
        test ebx, ebx
        jz L_cf44
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
L_cf44:
        and dword ptr [ebp - 8], 0
        jmp L_cf95
L_cf4a:
        test al, 4
        mov esi, 0x7fffffff
        jnz L_cf6e
        test al, 1
        jnz L_cf95
        and eax, 2
        jz L_cf65
        cmp dword ptr [ebp - 8], 0x80000000
        ja L_cf6e
L_cf65:
        test eax, eax
        jnz L_cf95
        cmp dword ptr [ebp - 8], esi
        jbe L_cf95
L_cf6e:
        call FUN_1004277d
        test byte ptr [ebp + 0x14], 1
        mov dword ptr [eax], 0x22
        jz L_cf85
        or dword ptr [ebp - 8], 0xffffffff
        jmp L_cf95
L_cf85:
        mov eax, dword ptr [ebp + 0x14]
        and al, 2
        neg al
        sbb eax, eax
        neg eax
        add eax, esi
        mov dword ptr [ebp - 8], eax
L_cf95:
        test ebx, ebx
        jz L_cf9e
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebx], eax
L_cf9e:
        test byte ptr [ebp + 0x14], 2
        jz L_cfac
        mov eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 8], eax
L_cfac:
        mov eax, dword ptr [ebp - 8]
        jmp L_cfbc
L_cfb1:
        mov eax, dword ptr [ebp + 0xc]
        test eax, eax
        jz L_cfba
        mov dword ptr [eax], edi
L_cfba:
        xor eax, eax
L_cfbc:
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
