/* FUN_0040f360 - loader/parser subsystem helper (tree insert) */

extern void __cdecl FUN_00411500(void *);
extern void __cdecl FUN_00411670(void *);
extern void __cdecl FUN_0040f7e0(void *);
extern void __cdecl FUN_004108d0(void *);
extern void __cdecl FUN_004114b0(void *);
extern void __cdecl FUN_004115b0(void *);
extern void __cdecl FUN_004115d0(void *);
extern void __cdecl FUN_00410b00(void *);

extern int g_0c;

__declspec(naked) void func_0040f360(void)
{
    __asm {
        sub esp, 0x34
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+8]
        push ebx
        mov ebx, dword ptr [esp+0x40]
        cmp ebx, eax
        push ebp
        push esi
        push edi
        mov dword ptr [esp+0x14], ecx
        jnz L_f5d2
        mov eax, dword ptr [ecx+4]
        test eax, eax
        jbe L_f47f
        mov eax, dword ptr [esp+0x50]
        mov edi, dword ptr [eax]
        mov esi, dword ptr [ebx+0x10]
        mov eax, edi
    L_f392:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jnz L_f3b6
        test cl, cl
        jz L_f3b2
        mov bl, byte ptr [eax+1]
        mov cl, bl
        cmp bl, byte ptr [esi+1]
        jnz L_f3b6
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f392
    L_f3b2:
        xor eax, eax
        jmp L_f3bb
    L_f3b6:
        sbb eax, eax
        sbb eax, -1
    L_f3bb:
        xor ebx, ebx
        cmp eax, ebx
        jge L_f47f
        mov ebp, dword ptr [esp+0x4c]
        cmp ebp, edx
        jz L_f427
        cmp ebp, ebx
        jnz L_f427
        mov esi, dword ptr [ebp+0x10]
        mov eax, edi
    L_f3d6:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jnz L_f3fa
        test cl, cl
        jz L_f3f6
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jnz L_f3fa
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f3d6
    L_f3f6:
        xor eax, eax
        jmp L_f3ff
    L_f3fa:
        sbb eax, eax
        sbb eax, -1
    L_f3ff:
        cmp eax, ebx
        jl L_f427
        mov eax, dword ptr [esp+0x50]
        mov edi, dword ptr [esp+0x14]
        push eax
        mov ecx, edi
        call FUN_00411500
        mov esi, eax
        mov eax, dword ptr [edi]
        cmp dword ptr [eax+0xc], ebx
        __emit 0x89  /* __emit: mov dword ptr [0xC], esi = 89 35 0C 00 00 00; MSVC6 rejects mov [imm32],reg as C2415 */
        __emit 0x35
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jnz L_f452
        mov dword ptr [eax+0xc], esi
        jmp L_f452
    L_f427:
        mov ecx, dword ptr [esp+0x50]
        mov edi, dword ptr [esp+0x14]
        push ecx
        mov ecx, edi
        call FUN_00411500
        mov esi, eax
        mov eax, dword ptr [edi]
        cmp ebp, eax
        mov dword ptr [ebp+8], esi
        jnz L_f44a
        mov dword ptr [eax+4], esi
        mov dword ptr [eax+0xc], esi
        jmp L_f452
    L_f44a:
        cmp ebp, dword ptr [eax+8]
        jnz L_f452
        mov dword ptr [eax+8], esi
    L_f452:
        add eax, 4
        push eax
        push esi
        mov dword ptr [esi+4], ebp
        mov dword ptr [esi+8], ebx
        mov dword ptr [esi+0xc], ebx
        call FUN_00411670
        mov eax, dword ptr [edi+4]
        add esp, 8
        inc eax
        mov dword ptr [edi+4], eax
        mov eax, dword ptr [esp+0x48]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 0xc
    L_f47f:
        mov edi, dword ptr [edx+4]
        test edi, edi
        mov esi, edx
        mov dword ptr [esp+0x1c], esi
        mov al, 1
        jz L_f4e3
        mov edx, dword ptr [esp+0x50]
        mov ebp, dword ptr [edx]
    L_f494:
        mov esi, dword ptr [edi+0x10]
        mov dword ptr [esp+0x1c], edi
    L_f49d:
        mov eax, ebp
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jnz L_f4c5
        test cl, cl
        jz L_f4c1
        mov dl, byte ptr [eax+1]
        mov bl, byte ptr [esi+1]
        mov cl, dl
        cmp dl, bl
        jnz L_f4c5
        add eax, 2
        add esi, 2
        test cl, cl
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 offset (off-by-2) */
        __emit 0xDC
    L_f4c1:
        xor eax, eax
        jmp L_f4ca
    L_f4c5:
        sbb eax, eax
        sbb eax, -1
    L_f4ca:
        test eax, eax
        setl al
        test al, al
        jz L_f4d8
        mov edi, dword ptr [edi+8]
        jmp L_f4db
    L_f4d8:
        mov edi, dword ptr [edi+0xc]
    L_f4db:
        test edi, edi
        jnz L_f494
        mov esi, dword ptr [esp+0x1c]
    L_f4e3:
        test al, al
        mov dword ptr [esp+0x18], esi
        jz L_f539
        mov ebx, dword ptr [esp+0x14]
        lea eax, [esp+0x14]
        push eax
        mov ecx, ebx
        call FUN_0040f7e0
        mov ecx, dword ptr [esp+0x18]
        cmp ecx, dword ptr [eax]
        jnz L_f52a
        mov eax, dword ptr [esp+0x50]
        lea edx, [esp+0x4c]
        push edx
        push eax
        push esi
        push edi
        lea ecx, [esp+0x30]
        push ecx
        mov ecx, ebx
        mov byte ptr [esp+0x60], 1
        call FUN_004108d0
        push eax
        lea ecx, [esp+0x34]
        jmp L_f5af
    L_f52a:
        lea edx, [esp+0x18]
        push edx
        call FUN_004114b0
        add esp, 4
        jmp L_f53d
    L_f539:
        mov ebx, dword ptr [esp+0x14]
    L_f53d:
        mov ebp, dword ptr [esp+0x50]
        mov eax, dword ptr [esp+0x18]
        mov esi, dword ptr [ebp]
        mov eax, dword ptr [eax+0x10]
    L_f54b:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jnz L_f56f
        test cl, cl
        jz L_f56b
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jnz L_f56f
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f54b
    L_f56b:
        xor eax, eax
        jmp L_f574
    L_f56f:
        sbb eax, eax
        sbb eax, -1
    L_f574:
        test eax, eax
        jge L_f59c
        mov ecx, dword ptr [esp+0x1c]
        lea eax, [esp+0x50]
        push eax
        push ebp
        push ecx
        push edi
        lea edx, [esp+0x2c]
        push edx
        mov ecx, ebx
        mov byte ptr [esp+0x64], 1
        call FUN_004108d0
        push eax
        lea ecx, [esp+0x3c]
        jmp L_f5af
    L_f59c:
        lea eax, [esp+0x13]
        lea ecx, [esp+0x18]
        push eax
        push ecx
        mov byte ptr [esp+0x1b], 0
        lea ecx, [esp+0x44]
    L_f5af:
        call FUN_004115b0
        push eax
        lea ecx, [esp+0x28]
        call FUN_004115d0
        mov eax, dword ptr [esp+0x48]
        mov edx, dword ptr [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0x34
        ret 0xc
    L_f5d2:
        cmp ebx, edx
        jnz L_f6dd
        mov eax, dword ptr [esp+0x50]
        mov ebp, dword ptr [eax]
        mov edi, dword ptr [edx+0xc]
        mov eax, dword ptr [edi+0x10]
        mov esi, ebp
    L_f5e8:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jnz L_f60c
        test cl, cl
        jz L_f608
        mov bl, byte ptr [eax+1]
        mov cl, bl
        cmp bl, byte ptr [esi+1]
        jnz L_f60c
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f5e8
    L_f608:
        xor eax, eax
        jmp L_f611
    L_f60c:
        sbb eax, eax
        sbb eax, -1
    L_f611:
        test eax, eax
        jge L_f6ce
        cmp edi, edx
        jz L_f674
        mov esi, dword ptr [edi+0x10]
        mov eax, ebp
    L_f622:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jnz L_f64a
        test cl, cl
        jz L_f646
        mov dl, byte ptr [eax+1]
        mov bl, byte ptr [esi+1]
        mov cl, dl
        cmp dl, bl
        jnz L_f64a
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f622
    L_f646:
        xor eax, eax
        jmp L_f64f
    L_f64a:
        sbb eax, eax
        sbb eax, -1
    L_f64f:
        test eax, eax
        jl L_f674
        mov eax, dword ptr [esp+0x50]
        mov ebx, dword ptr [esp+0x14]
        push eax
        mov ecx, ebx
        call FUN_00411500
        mov esi, eax
        mov eax, dword ptr [ebx]
        cmp edi, dword ptr [eax+0xc]
        mov dword ptr [edi+0xc], esi
        jnz L_f69f
        mov dword ptr [eax+0xc], esi
        jmp L_f69f
    L_f674:
        mov ecx, dword ptr [esp+0x50]
        mov ebx, dword ptr [esp+0x14]
        push ecx
        mov ecx, ebx
        call FUN_00411500
        mov esi, eax
        mov eax, dword ptr [ebx]
        cmp edi, eax
        mov dword ptr [edi+8], esi
        jnz L_f697
        mov dword ptr [eax+4], esi
        mov dword ptr [eax+0xc], esi
        jmp L_f69f
    L_f697:
        cmp edi, dword ptr [eax+8]
        jnz L_f69f
        mov dword ptr [eax+8], esi
    L_f69f:
        add eax, 4
        xor ecx, ecx
        push eax
        push esi
        mov dword ptr [esi+4], edi
        mov dword ptr [esi+8], ecx
        mov dword ptr [esi+0xc], ecx
        call FUN_00411670
        mov eax, dword ptr [ebx+4]
        add esp, 8
        inc eax
        mov dword ptr [ebx+4], eax
        mov eax, dword ptr [esp+0x48]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 0xc
    L_f6ce:
        mov edx, dword ptr [esp+0x50]
        push edx
        lea eax, [esp+0x40]
        push eax
        jmp L_f7b8
    L_f6dd:
        lea edx, [esp+0x4c]
        push edx
        mov dword ptr [esp+0x50], ebx
        call FUN_004114b0
        mov ebp, dword ptr [esp+0x54]
        mov edi, dword ptr [ebp]
        mov eax, dword ptr [esp+0x50]
        mov eax, dword ptr [eax+0x10]
        add esp, 4
        mov esi, edi
    L_f6fe:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jnz L_f722
        test cl, cl
        jz L_f71e
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jnz L_f722
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f6fe
    L_f71e:
        xor eax, eax
        jmp L_f727
    L_f722:
        sbb eax, eax
        sbb eax, -1
    L_f727:
        test eax, eax
        jge L_f7b2
        mov esi, dword ptr [ebx+0x10]
        mov eax, edi
    L_f734:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jnz L_f758
        test cl, cl
        jz L_f754
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jnz L_f758
        add eax, 2
        add esi, 2
        test cl, cl
        jnz L_f734
    L_f754:
        xor eax, eax
        jmp L_f75d
    L_f758:
        sbb eax, eax
        sbb eax, -1
    L_f75d:
        test eax, eax
        jge L_f7b2
        mov eax, dword ptr [esp+0x4c]
        mov ecx, dword ptr [eax+0xc]
        test ecx, ecx
        push ebp
        jnz L_f790
        mov ecx, dword ptr [esp+0x18]
        push eax
        push 0
        lea eax, [esp+0x5c]
        push eax
        call FUN_004108d0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp+0x48]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], ecx
        pop ebx
        add esp, 0x34
        ret 0xc
    L_f790:
        mov ecx, dword ptr [esp+0x18]
        push ebx
        push ebx
        lea edx, [esp+0x5c]
        push edx
        call FUN_004108d0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp+0x48]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], ecx
        pop ebx
        add esp, 0x34
        ret 0xc
    L_f7b2:
        push ebp
        lea edx, [esp+0x40]
        push edx
    L_f7b8:
        mov ecx, dword ptr [esp+0x1c]
        call FUN_00410b00
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp+0x48]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], ecx
        pop ebx
        add esp, 0x34
        ret 0xc
    }
}
