/* FUN_1003e49b __cdecl 0x1003E49B */
extern void __cdecl FUN_1003e6a3(void);
extern void __cdecl FUN_10040680(void);
extern void __cdecl FUN_1003e1a3(void);
extern void *g_10049148; /* IAT VirtualAlloc */
extern int g_10053f90;
extern char g_10051f70;

__declspec(naked) void FUN_1003e49b(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [g_10053f90]
        push edi
L_e4a9:
        mov edx, dword ptr [esi + 0x10]
        cmp edx, -1
        jz L_e554
        mov edi, dword ptr [esi + 8]
        lea ecx, [esi + 0x2018]
        mov eax, edi
        sub eax, esi
        sub eax, 0x18
        sar eax, 3
        shl eax, 0xc
        add eax, edx
        cmp edi, ecx
        mov dword ptr [ebp - 4], eax
        jnc L_e50e
L_e4d4:
        mov ecx, dword ptr [edi]
        mov ebx, dword ptr [ebp + 8]
        cmp ecx, ebx
        jl L_e4f7
        cmp dword ptr [edi + 4], ebx
        jbe L_e4f7
        push ebx
        push ecx
        push eax
        call FUN_1003e6a3
        add esp, 0xc
        test eax, eax
        jnz L_e566
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 4], ebx
L_e4f7:
        add edi, 8
        lea ecx, [esi + 0x2018]
        add eax, 0x1000
        cmp edi, ecx
        mov dword ptr [ebp - 4], eax
        jc L_e4d4
        jmp L_e511
L_e50e:
        mov ebx, dword ptr [ebp + 8]
L_e511:
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0x10]
        lea edi, [esi + 0x18]
        mov dword ptr [ebp - 8], eax
        cmp edi, eax
        mov dword ptr [ebp - 4], ecx
        jnc L_e557
L_e524:
        mov eax, dword ptr [edi]
        cmp eax, ebx
        jl L_e543
        cmp dword ptr [edi + 4], ebx
        jbe L_e543
        push ebx
        push eax
        push dword ptr [ebp - 4]
        call FUN_1003e6a3
        add esp, 0xc
        test eax, eax
        jnz L_e566
        mov dword ptr [edi + 4], ebx
L_e543:
        add dword ptr [ebp - 4], 0x1000
        add edi, 8
        cmp edi, dword ptr [ebp - 8]
        jc L_e524
        jmp L_e557
L_e554:
        mov ebx, dword ptr [ebp + 8]
L_e557:
        mov esi, dword ptr [esi]
        cmp esi, dword ptr [g_10053f90]
        jz L_e576
        jmp L_e4a9
L_e566:
        mov dword ptr [g_10053f90], esi
        sub dword ptr [edi], ebx
        mov dword ptr [esi + 8], edi
        jmp L_e69e
L_e576:
        mov eax, 0x10051f70
        mov edi, eax
L_e57d:
        cmp dword ptr [edi + 0x10], -1
        jz L_e589
        cmp dword ptr [edi + 0xc], 0
        jnz L_e595
L_e589:
        mov edi, dword ptr [edi]
        cmp edi, eax
        jz L_e66a
        jmp L_e57d
L_e595:
        mov ebx, dword ptr [edi + 0xc]
        and dword ptr [ebp - 4], 0
        mov esi, ebx
        mov eax, ebx
        sub esi, edi
        sub esi, 0x18
        sar esi, 3
        shl esi, 0xc
        add esi, dword ptr [edi + 0x10]
        cmp dword ptr [ebx], -1
        jnz L_e5c4
L_e5b3:
        cmp dword ptr [ebp - 4], 0x10
        jge L_e5c4
        add eax, 8
        inc dword ptr [ebp - 4]
        cmp dword ptr [eax], -1
        jz L_e5b3
L_e5c4:
        mov eax, dword ptr [ebp - 4]
        push 4
        shl eax, 0xc
        push 0x1000
        push eax
        push esi
        mov dword ptr [ebp - 8], eax
        call dword ptr [g_10049148]
        cmp eax, esi
        jnz L_e69c
        push 0
        push dword ptr [ebp - 8]
        push esi
        call FUN_10040680
        mov edx, dword ptr [ebp - 4]
        add esp, 0xc
        test edx, edx
        mov ecx, ebx
        jle L_e62b
        lea eax, [esi + 4]
        mov dword ptr [ebp - 4], edx
L_e601:
        or byte ptr [eax + 0xf4], 0xff
        lea edx, [eax + 4]
        mov dword ptr [eax - 4], edx
        mov edx, 0xf0
        mov dword ptr [eax], edx
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], 0xf1
        add eax, 0x1000
        add ecx, 8
        dec dword ptr [ebp - 4]
        jnz L_e601
L_e62b:
        mov dword ptr [g_10053f90], edi
        lea eax, [edi + 0x2018]
        cmp ecx, eax
        jnc L_e647
L_e637:
        cmp dword ptr [ecx], -1
        jz L_e645
        add ecx, 8
        __emit 0xEB /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xF2
L_e645:
        cmp ecx, eax
L_e647:
        sbb eax, eax
        and eax, ecx
        mov dword ptr [edi + 0xc], eax
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [esi + 8], al
        mov dword ptr [edi + 8], ebx
        sub dword ptr [ebx], eax
        sub dword ptr [esi + 4], eax
        lea ecx, [esi + eax*1 + 8]
        lea eax, [esi + 0x100]
        mov dword ptr [esi], ecx
        jmp L_e69e
L_e66a:
        call FUN_1003e1a3
        test eax, eax
        jz L_e69c
        mov ecx, dword ptr [eax + 0x10]
        mov byte ptr [ecx + 8], bl
        lea edx, [ecx + ebx*1 + 8]
        mov dword ptr [g_10053f90], eax
        mov dword ptr [ecx], edx
        mov edx, 0xf0
        sub edx, ebx
        mov dword ptr [ecx + 4], edx
        movzx edx, bl
        sub dword ptr [eax + 0x18], edx
        lea eax, [ecx + 0x100]
        jmp L_e69e
L_e69c:
        xor eax, eax
L_e69e:
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
