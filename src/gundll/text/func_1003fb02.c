/* FUN_1003fb02 __stdcall 0x1003FB02 */
extern void __cdecl FUN_1004388f(void);
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003efcc(void);
extern void __cdecl FUN_100406d8(void);
extern void __cdecl FUN_1003c2dc(void);
extern void *g_1004913c; /* IAT GetCPInfo */
extern int g_1007567c;
extern int g_1007568c;
extern int g_100756e0;
extern int g_10051b90;
extern int g_10051988;
extern int g_10051984;
extern int g_100756cc;
extern int g_100756d0;

__declspec(naked) void FUN_1003fb02(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        push ebx
        xor ebx, ebx
        cmp dword ptr [g_1007567c], ebx
        mov dword ptr [ebp - 4], ebx
        mov dword ptr [ebp - 8], ebx
        jz L_fd0f
        cmp dword ptr [g_1007568c], ebx
        push esi
        push edi
        jnz L_fb4a
        movzx eax, word ptr [g_100756e0]
        push 0x1007568c
        push 0x1004
        push eax
        push ebx
        call FUN_1004388f
        add esp, 0x10
        test eax, eax
        jnz L_fcf8
L_fb4a:
        mov esi, 0x202
        push esi
        call FUN_1003c3c5
        mov edi, eax
        push esi
        mov dword ptr [ebp - 0x10], edi
        call FUN_1003c3c5
        push 0x101
        mov dword ptr [ebp - 0xc], eax
        call FUN_1003c3c5
        push esi
        mov dword ptr [ebp - 4], eax
        call FUN_1003c3c5
        add esp, 0x10
        cmp edi, ebx
        mov dword ptr [ebp - 8], eax
        jz L_fcf8
        cmp dword ptr [ebp - 0xc], ebx
        jz L_fcf8
        cmp dword ptr [ebp - 4], ebx
        jz L_fcf8
        cmp eax, ebx
        jz L_fcf8
        xor eax, eax
        mov esi, 0x100
        mov ecx, dword ptr [ebp - 4]
L_fba5:
        mov byte ptr [eax + ecx*1], al
        inc eax
        cmp eax, esi
        __emit 0x7C /* __emit: backward jl rel-offset miscomputed by MSVC6 (off-by-3, call-reloc between branch and target) */
        __emit 0xF5
        lea eax, [ebp - 0x24]
        push eax
        push dword ptr [g_1007568c]
        call dword ptr [g_1004913c]
        test eax, eax
        jz L_fcf8
        cmp dword ptr [ebp - 0x24], 2
        ja L_fcf8
        movzx eax, word ptr [ebp - 0x24]
        cmp eax, 1
        mov dword ptr [g_10051b90], eax
        jle L_fc0c
        cmp byte ptr [ebp - 0x1e], bl
        jz L_fc0c
        lea eax, [ebp - 0x1d]
L_fbe8:
        mov dl, byte ptr [eax]
        cmp dl, bl
        jz L_fc0c
        movzx ecx, byte ptr [eax - 1]
        movzx edx, dl
L_fbf5:
        cmp ecx, edx
        jg L_fc05
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [ecx + edx*1], bl
        inc ecx
        movzx edx, byte ptr [eax]
        jmp L_fbf5
L_fc05:
        inc eax
        inc eax
        cmp byte ptr [eax - 1], bl
        jnz L_fbe8
L_fc0c:
        push ebx
        lea eax, [edi + 2]
        push ebx
        push ebx
        push eax
        push esi
        push dword ptr [ebp - 4]
        push 1
        call FUN_1003efcc
        add esp, 0x1c
        test eax, eax
        jz L_fcf8
        mov ecx, dword ptr [ebp - 8]
        mov word ptr [edi], bx
        xor eax, eax
L_fc31:
        mov word ptr [ecx], ax
        inc ecx
        inc ecx
        inc eax
        cmp eax, esi
        jl L_fc31
        mov eax, dword ptr [ebp - 0xc]
        push ebx
        push ebx
        lea edi, [eax + 2]
        push edi
        push esi
        push dword ptr [ebp - 8]
        push 1
        call FUN_100406d8
        add esp, 0x18
        test eax, eax
        jz L_fcf8
        mov eax, dword ptr [ebp - 0xc]
        mov word ptr [eax], bx
        cmp dword ptr [g_10051b90], 1
        jle L_fc9f
        cmp byte ptr [ebp - 0x1e], bl
        jz L_fc9f
        lea eax, [ebp - 0x1d]
L_fc71:
        mov cl, byte ptr [eax]
        cmp cl, bl
        jz L_fc9f
        movzx esi, byte ptr [eax - 1]
        movzx ecx, cl
        cmp esi, ecx
        jg L_fc98
        mov ecx, dword ptr [ebp - 0x10]
        lea ecx, [ecx + esi*2 + 2]
L_fc89:
        mov word ptr [ecx], 0x8000
        inc esi
        movzx edx, byte ptr [eax]
        inc ecx
        inc ecx
        cmp esi, edx
        jle L_fc89
L_fc98:
        inc eax
        inc eax
        cmp byte ptr [eax - 1], bl
        jnz L_fc71
L_fc9f:
        mov eax, dword ptr [ebp - 0x10]
        mov dword ptr [g_10051988], edi
        add eax, 2
        mov dword ptr [g_10051984], eax
        mov eax, dword ptr [g_100756cc]
        cmp eax, ebx
        jz L_fcc0
        push eax
        call FUN_1003c2dc
        pop ecx
L_fcc0:
        mov eax, dword ptr [ebp - 0x10]
        mov dword ptr [g_100756cc], eax
        mov eax, dword ptr [g_100756d0]
        cmp eax, ebx
        jz L_fcd8
        push eax
        call FUN_1003c2dc
        pop ecx
L_fcd8:
        mov eax, dword ptr [ebp - 0xc]
        mov dword ptr [g_100756d0], eax
L_fce0:
        push dword ptr [ebp - 4]
        call FUN_1003c2dc
        push dword ptr [ebp - 8]
        call FUN_1003c2dc
        pop ecx
        mov eax, ebx
        pop ecx
        pop edi
        pop esi
        jmp L_fd44
L_fcf8:
        push dword ptr [ebp - 0x10]
        call FUN_1003c2dc
        push dword ptr [ebp - 0xc]
        call FUN_1003c2dc
        pop ecx
        pop ecx
        push 1
        pop ebx
        jmp L_fce0
L_fd0f:
        push dword ptr [g_100756cc]
        mov eax, 0x1005198e
        mov dword ptr [g_10051984], eax
        mov dword ptr [g_10051988], eax
        call FUN_1003c2dc
        push dword ptr [g_100756d0]
        call FUN_1003c2dc
        pop ecx
        mov dword ptr [g_100756cc], ebx
        pop ecx
        mov dword ptr [g_100756d0], ebx
        xor eax, eax
L_fd44:
        pop ebx
        leave
        ret
    }
}
