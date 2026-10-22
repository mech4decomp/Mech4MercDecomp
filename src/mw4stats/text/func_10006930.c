/*
 * MW4Stats.dll - FUN_10006930 (0x10006930, 710 B, __thiscall)
 * SEH-framed stats/format function. this in ECX.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_10021050; /* IAT */
extern void *g_1002104c; /* IAT */
extern void *g_1002102c; /* IAT */
extern void *g_10021148; /* IAT */
extern void *g_10021144; /* IAT */
extern void *g_10021140; /* IAT */
extern void *g_100210ec; /* IAT */
extern void *g_100210f8; /* IAT */
extern void *g_1002111c; /* IAT */
extern void *g_100210f4; /* IAT */
extern void __cdecl FUN_10006c80(void);
extern void __cdecl FUN_10006e60(void);
extern void __cdecl FUN_10008c40(void);
extern void __cdecl FUN_10006c00(void);

__declspec(naked) void FUN_10006930(void)
{
    __asm {
        push -1
        push 0x1001f758
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov dword ptr [esp+0x10], ecx
        mov dword ptr [esp+0x14], edi
        mov dword ptr [esp+0x18], 0x2
        mov ebp, dword ptr [esp+0x48]
        push edi
        push 0x8000000
        push 0x3
        push edi
        lea ebx, [ecx+0xc]
        push 0x1
        push edi
        push ebp
        mov dword ptr [esp+0x5c], edi
        mov word ptr [ebx+0x14], di
        mov dword ptr [ebx+0x4], edi
        call dword ptr [g_10021050]
        mov esi, eax
        cmp esi, -1
        jnz L_a1
        mov eax, dword ptr [ebx]
        push ebp
        push 0x1002542c
        push edi
        push edi
        push 0xffffd8f0
        push ebx
        call dword ptr [eax]
        jmp L_b29
    L_a1:
        push edi
        push esi
        call dword ptr [g_1002104c]
        push esi
        mov edi, eax
        call dword ptr [g_1002102c]
        push 0x10025424
        push ebp
        call dword ptr [g_10021148]
        mov esi, eax
        add esp, 0x8
        test esi, esi
        jnz L_de
        mov ecx, dword ptr [ebx]
        push ebp
        push 0x100253d8
        push eax
        push eax
        push 0xffffd8f0
        push ebx
        call dword ptr [ecx]
        jmp L_b29
    L_de:
        push esi
        call dword ptr [g_10021144]
        and eax, 0xffff
        add esp, 0x4
        cmp eax, 0xfffe
        jz L_a63
        cmp eax, 0xfeff
        jz L_a63
        push edi
        lea ecx, [esp+0x18]
        call FUN_10006c80
        test al, al
        jnz L_a30
        mov edx, dword ptr [ebx]
        push 0x100253bc
        push 0x0
        push 0x0
        push 0xffffd8f1
        push ebx
        call dword ptr [edx]
        push esi
        call dword ptr [g_10021140]
        add esp, 0x18
        mov esi, 0xffffd8f1
        jmp L_b31
    L_a30:
        push esi
        call dword ptr [g_10021140]
        push 0x100253b4
        push ebp
        call dword ptr [g_10021148]
        mov esi, eax
        add esp, 0xc
        test esi, esi
        jnz L_ab3
        mov eax, dword ptr [ebx]
        push ebp
        push 0x10025348
        push esi
        push esi
        push 0xffffd8f0
        push ebx
        call dword ptr [eax]
        jmp L_b29
    L_a63:
        mov eax, dword ptr [esp+0x14]
        test eax, eax
        jz L_a75
        push eax
        call dword ptr [g_100210ec]
        add esp, 0x4
    L_a75:
        shr edi, 0x1
        add edi, 0x2
        imul edi, dword ptr [esp+0x18]
        push edi
        call dword ptr [g_100210f8]
        add esp, 0x4
        mov dword ptr [esp+0x14], eax
        test eax, eax
        jnz L_ab3
        mov ecx, dword ptr [ebx]
        push 0x100253bc
        push eax
        push eax
        push 0xffffd8f1
        push ebx
        call dword ptr [ecx]
        push esi
        call dword ptr [g_10021140]
        add esp, 0x18
        mov esi, 0xffffd8f1
        jmp L_b31
    L_ab3:
        push esi
        call dword ptr [g_10021144]
        mov cl, byte ptr [esi+0xc]
        mov ebp, dword ptr [esp+0x18]
        add esp, 0x4
        and eax, 0xffff
        xor edi, edi
        test cl, 0x10
        jnz L_af7
    L_ad0:
        test edi, edi
        jnz L_af7
        push esi
        mov word ptr [ebp], ax
        call dword ptr [g_10021144]
        mov ecx, dword ptr [esi+0xc]
        add esp, 0x4
        mov edi, ecx
        and eax, 0xffff
        add ebp, 0x2
        and edi, 0x20
        test cl, 0x10
        jz L_ad0
    L_af7:
        push esi
        mov word ptr [ebp], 0x0
        call dword ptr [g_10021140]
        add esp, 0x4
        test edi, edi
        jz L_b42
        mov esi, dword ptr [ebx]
        push edi
        call dword ptr [g_1002111c]
        add esp, 0x4
        push eax
        push 0x10025324
        push 0x0
        push 0x0
        push 0xffffd8f0
        push ebx
        call dword ptr [esi]
    L_b29:
        add esp, 0x18
        mov esi, 0xffffd8f0
    L_b31:
        mov eax, dword ptr [esp+0x14]
        test eax, eax
        jz L_bdf
        jmp L_bd5
    L_b42:
        mov edi, dword ptr [esp+0x14]
        test edi, edi
        jz L_bc2
        mov ax, word ptr [edi]
        test ax, ax
        jz L_bc2
        cmp ax, 0xfffe
        jz L_b5e
        cmp ax, 0xfeff
        jnz L_b61
    L_b5e:
        add edi, 0x2
    L_b61:
        push edi
        call dword ptr [g_100210f4]
        mov esi, dword ptr [esp+0x14]
        add esp, 0x4
        lea ecx, [esp+0x28]
        mov dword ptr [esp+0x1c], esi
        push 0x0
        mov dword ptr [esp+0x24], ebx
        mov dword ptr [esp+0x28], 0x3
        call FUN_10006e60
        mov edx, dword ptr [esi+0x1024]
        mov ebx, dword ptr [esp+0x24]
        or ebx, edx
        push edi
        lea ecx, [esp+0x20]
        mov dword ptr [esp+0x38], 0x0
        mov dword ptr [esp+0x28], ebx
        call FUN_10008c40
        test eax, eax
        mov dword ptr [esi+0x1020], eax
        jnz L_bcb
        mov ecx, esi
        call FUN_10006c00
        mov esi, dword ptr [esi+0x10]
        jmp L_bcd
    L_bc2:
        mov ecx, dword ptr [esp+0x10]
        call FUN_10006c00
    L_bcb:
        xor esi, esi
    L_bcd:
        mov eax, dword ptr [esp+0x14]
        test eax, eax
        jz L_bdf
    L_bd5:
        push eax
        call dword ptr [g_100210ec]
        add esp, 0x4
    L_bdf:
        mov ecx, dword ptr [esp+0x38]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 0x4
    }
}
