/*
 * FUN_5e02fd75 (511 B) — locale install dispatcher with SEH frame. Lazily
 * initializes the locale table, then dispatches on the stored table type
 * (1 or 2) to install the locale via the appropriate IAT callback, using
 * _alloca-style stack buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_5e02ff99(void);
extern void FUN_5e030b60(void);
extern int g_5e77aa94;
extern int g_5e77aa8c;
extern int *g_5e0350dc;
extern int *g_5e0350d8;
extern int *g_5e0350c8;
extern int *g_5e035078;

__declspec(naked) void FUN_5e02fd75(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x5e0366a0
        push 0x5e030a84
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov dword ptr [ebp-0x18], esp
        xor edi, edi
        cmp dword ptr [g_5e77aa94], edi
        jnz L_fdeb
        push edi
        push edi
        push 1
        pop ebx
        push ebx
        push 0x5e036630
        mov esi, 0x100
        push esi
        push edi
        call dword ptr [g_5e0350dc]
        test eax, eax
        jz L_fdc9
        mov dword ptr [g_5e77aa94], ebx
        jmp L_fdeb
L_fdc9:
        push edi
        push edi
        push ebx
        push 0x5e03662c
        push esi
        push edi
        call dword ptr [g_5e0350d8]
        test eax, eax
        jz L_ff03
        mov dword ptr [g_5e77aa94], 2
L_fdeb:
        cmp dword ptr [ebp+0x14], edi
        jle L_fe00
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
        call FUN_5e02ff99
        pop ecx
        pop ecx
        mov dword ptr [ebp+0x14], eax
L_fe00:
        mov eax, dword ptr [g_5e77aa94]
        cmp eax, 2
        jnz L_fe27
        push dword ptr [ebp+0x1c]
        push dword ptr [ebp+0x18]
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+8]
        call dword ptr [g_5e0350d8]
        jmp L_ff05
L_fe27:
        cmp eax, 1
        jnz L_ff03
        cmp dword ptr [ebp+0x20], edi
        jnz L_fe3d
        mov eax, dword ptr [g_5e77aa8c]
        mov dword ptr [ebp+0x20], eax
L_fe3d:
        push edi
        push edi
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
        mov eax, dword ptr [ebp+0x24]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr [ebp+0x20]
        call dword ptr [g_5e0350c8]
        mov ebx, eax
        mov dword ptr [ebp-0x1c], ebx
        cmp ebx, edi
        jz L_ff03
        mov dword ptr [ebp-4], edi
        lea eax, [ebx+ebx]
        add eax, 3
        and al, 0xfc
        call FUN_5e030b60
        mov dword ptr [ebp-0x18], esp
        mov eax, esp
        mov dword ptr [ebp-0x24], eax
        or dword ptr [ebp-4], 0xffffffff
        jmp L_fe98
L_feh_filter1:
        push 1
        pop eax
        ret
L_feh_handler1:
        mov esp, dword ptr [ebp-0x18]
        xor edi, edi
        mov dword ptr [ebp-0x24], edi
        or dword ptr [ebp-4], 0xffffffff
        mov ebx, dword ptr [ebp-0x1c]
L_fe98:
        cmp dword ptr [ebp-0x24], edi
        jz L_ff03
        push ebx
        push dword ptr [ebp-0x24]
        push dword ptr [ebp+0x14]
        push dword ptr [ebp+0x10]
        push 1
        push dword ptr [ebp+0x20]
        call dword ptr [g_5e0350c8]
        test eax, eax
        jz L_ff03
        push edi
        push edi
        push ebx
        push dword ptr [ebp-0x24]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+8]
        call dword ptr [g_5e0350dc]
        mov esi, eax
        mov dword ptr [ebp-0x28], esi
        cmp esi, edi
        jz L_ff03
        test byte ptr [ebp+0xd], 4
        jz L_ff17
        cmp dword ptr [ebp+0x1c], edi
        jz L_ff92
        cmp esi, dword ptr [ebp+0x1c]
        jg L_ff03
        push dword ptr [ebp+0x1c]
        push dword ptr [ebp+0x18]
        push ebx
        push dword ptr [ebp-0x24]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+8]
        call dword ptr [g_5e0350dc]
        test eax, eax
        jnz L_ff92
L_ff03:
        xor eax, eax
L_ff05:
        lea esp, [ebp-0x38]
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
L_ff17:
        mov dword ptr [ebp-4], 1
        lea eax, [esi+esi]
        add eax, 3
        and al, 0xfc
        call FUN_5e030b60
        mov dword ptr [ebp-0x18], esp
        mov ebx, esp
        mov dword ptr [ebp-0x20], ebx
        or dword ptr [ebp-4], 0xffffffff
        jmp L_ff4b
L_feh_filter2:
        push 1
        pop eax
        ret
L_feh_handler2:
        mov esp, dword ptr [ebp-0x18]
        xor edi, edi
        xor ebx, ebx
        or dword ptr [ebp-4], 0xffffffff
        mov esi, dword ptr [ebp-0x28]
L_ff4b:
        cmp ebx, edi
        jz L_ff03
        push esi
        push ebx
        push dword ptr [ebp-0x1c]
        push dword ptr [ebp-0x24]
        push dword ptr [ebp+0xc]
        push dword ptr [ebp+8]
        call dword ptr [g_5e0350dc]
        test eax, eax
        jz L_ff03
        cmp dword ptr [ebp+0x1c], edi
        push edi
        push edi
        jnz L_ff72
        push edi
        push edi
        jmp L_ff78
L_ff72:
        push dword ptr [ebp+0x1c]
        push dword ptr [ebp+0x18]
L_ff78:
        push esi
        push ebx
        push 0x220
        push dword ptr [ebp+0x20]
        call dword ptr [g_5e035078]
        mov esi, eax
        cmp esi, edi
        jz L_ff03
L_ff92:
        mov eax, esi
        jmp L_ff05
    }
}
