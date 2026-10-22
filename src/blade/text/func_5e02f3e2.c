/*
 * FUN_5e02f3e2 (386 B) — console mode setter. Selects a cached handler
 * pointer by mode (2/0xf/0x15/0x16/4/8/0xb), installs it, and invokes it
 * with the mode, restoring saved state afterward. Returns 0 on success,
 * -1 on unsupported mode.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_5e02bdd2(void);
extern int FUN_5e02f564(int, void *);
extern void FUN_5e02c830(int);
extern void FUN_5e02c891(int);
extern void FUN_5e02bc4d(int);
extern int g_5e77aa58;
extern int g_5e77aa54;
extern int g_5e77aa5c;
extern int g_5e77aa50;
extern int g_5e039478;
extern int g_5e03947c;

__declspec(naked) void FUN_5e02f3e2(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xc
        mov eax, dword ptr [ebp+8]
        and dword ptr [ebp-4], 0
        dec eax
        push ebx
        push esi
        dec eax
        push edi
        jz L_f45d
        dec eax
        dec eax
        jz L_f440
        sub eax, 4
        jz L_f440
        sub eax, 3
        jz L_f440
        sub eax, 4
        jz L_f433
        sub eax, 6
        jz L_f426
        dec eax
        jz L_f419
        or eax, 0xffffffff
        jmp L_f55f
L_f419:
        mov ebx, dword ptr [g_5e77aa58]
        mov edi, offset g_5e77aa58
        jmp L_f468
L_f426:
        mov ebx, dword ptr [g_5e77aa54]
        mov edi, offset g_5e77aa54
        jmp L_f468
L_f433:
        mov ebx, dword ptr [g_5e77aa5c]
        mov edi, offset g_5e77aa5c
        jmp L_f468
L_f440:
        call FUN_5e02bdd2
        mov esi, eax
        push dword ptr [esi+0x50]
        push dword ptr [ebp+8]
        call FUN_5e02f564
        mov edi, eax
        pop ecx
        add edi, 8
        pop ecx
        mov ebx, dword ptr [edi]
        jmp L_f47a
L_f45d:
        mov ebx, dword ptr [g_5e77aa50]
        mov edi, offset g_5e77aa50
L_f468:
        push 1
        mov dword ptr [ebp-4], 1
        call FUN_5e02c830
        mov esi, dword ptr [ebp+8]
        pop ecx
L_f47a:
        cmp ebx, 1
        jnz L_f495
        cmp dword ptr [ebp-4], 0
        jz L_f55d
        push ebx
        call FUN_5e02c891
        pop ecx
        jmp L_f55d
L_f495:
        xor ecx, ecx
        cmp ebx, ecx
        jnz L_f4af
        cmp dword ptr [ebp-4], ecx
        jz L_f4a8
        push 1
        call FUN_5e02c891
        pop ecx
L_f4a8:
        push 3
        call FUN_5e02bc4d
L_f4af:
        mov eax, dword ptr [ebp+8]
        cmp eax, 8
        jz L_f4c1
        cmp eax, 0xb
        jz L_f4c1
        cmp eax, 4
        jnz L_f4dc
L_f4c1:
        mov edx, dword ptr [esi+0x54]
        cmp eax, 8
        mov dword ptr [ebp-8], edx
        mov dword ptr [esi+0x54], ecx
        jnz L_f518
        mov edx, dword ptr [esi+0x58]
        mov dword ptr [esi+0x58], 0x8c
        mov dword ptr [ebp-0xc], edx
L_f4dc:
        cmp eax, 8
        jnz L_f518
        mov ecx, dword ptr [g_5e039478]
        mov eax, dword ptr [g_5e03947c]
        add eax, ecx
        cmp ecx, eax
        jge L_f51a
        lea eax, [ecx+ecx*2]
        shl eax, 2
L_f4f8:
        mov edx, dword ptr [esi+0x50]
        add eax, 0xc
        and dword ptr [edx+eax-4], 0
        mov edx, dword ptr [g_5e039478]
        mov edi, dword ptr [g_5e03947c]
        inc ecx
        add edi, edx
        cmp ecx, edi
        jl L_f4f8
        jmp L_f51a
L_f518:
        mov dword ptr [edi], ecx
L_f51a:
        cmp dword ptr [ebp-4], 0
        jz L_f528
        push 1
        call FUN_5e02c891
        pop ecx
L_f528:
        cmp dword ptr [ebp+8], 8
        jnz L_f539
        push dword ptr [esi+0x58]
        push 8
        call ebx
        pop ecx
        pop ecx
        jmp L_f54b
L_f539:
        push dword ptr [ebp+8]
        call ebx
        cmp dword ptr [ebp+8], 0xb
        pop ecx
        jz L_f54b
        cmp dword ptr [ebp+8], 4
        jnz L_f55d
L_f54b:
        mov eax, dword ptr [ebp-8]
        cmp dword ptr [ebp+8], 8
        mov dword ptr [esi+0x54], eax
        jnz L_f55d
        mov eax, dword ptr [ebp-0xc]
        mov dword ptr [esi+0x58], eax
L_f55d:
        xor eax, eax
L_f55f:
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
