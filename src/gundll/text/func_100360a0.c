/* FUN_100360a0 __thiscall 0x100360A0 */
extern void __cdecl FUN_1003791a(void);
extern void __cdecl FUN_10036f40(void);
extern void *g_10049234; /* IAT CoCreateInstance */
extern void *g_10049100; /* IAT MultiByteToWideChar */
extern void *g_100491d0; /* IAT wsprintfW */

__declspec(naked) void FUN_100360a0(void)
{
    __asm {
        sub esp, 0xd8
        push ebx
        push ebp
        xor eax, eax
        push esi
        push edi
        mov ebx, ecx
        mov ecx, 0x12
        lea edi, [esp + 0x20]
        rep stosd
        mov edi, dword ptr [esp + 0xec]
        lea eax, [edi + 0x10]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x38], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 0x3c], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x40], ecx
        lea eax, [edi + 0x20]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 0x2c], edx
        mov edx, dword ptr [eax + 0xc]
        lea eax, [esp + 0x14]
        push eax
        xor ebp, ebp
        push 0x1004ae8c
        push 0x17
        push ebp
        push 0x1004ae9c
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebp
        mov dword ptr [esp + 0x2c], ebp
        mov dword ptr [esp + 0x34], 0x48
        mov dword ptr [esp + 0x38], ebp
        mov dword ptr [esp + 0x44], ecx
        mov dword ptr [esp + 0x48], edx
        mov dword ptr [esp + 0x68], ebp
        call dword ptr [g_10049234]
        mov esi, eax
        cmp esi, ebp
        jl L_36294
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        push 0x1004addc
        push eax
        call dword ptr [ecx + 0x34]
        mov esi, eax
        cmp esi, ebp
        jl L_36294
        lea edx, [esp + 0x10]
        push edx
        push 0x1004ae8c
        push 0x17
        push ebp
        push 0x1004ae9c
        call dword ptr [g_10049234]
        mov esi, eax
        cmp esi, ebp
        jl L_36294
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax]
        push 0x1004addc
        push eax
        call dword ptr [ecx + 0x34]
        mov esi, eax
        cmp esi, ebp
        jl L_36294
        mov eax, dword ptr [edi + 0xc]
        cmp eax, ebp
        jz L_361ab
        push 0x40
        lea edx, [esp + 0x6c]
        push edx
        push -1
        push eax
        push ebp
        push ebp
        call dword ptr [g_10049100]
        jmp L_361d2
L_361ab:
        movzx eax, byte ptr [edi + 0x37]
        movzx ecx, byte ptr [edi + 0x36]
        movzx edx, byte ptr [edi + 0x35]
        push eax
        movzx eax, byte ptr [edi + 0x34]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 0x78]
        push 0x10051568
        push ecx
        call dword ptr [g_100491d0]
        add esp, 0x18
L_361d2:
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [edx]
        lea eax, [esp + 0x68]
        push 1
        push eax
        call FUN_1003791a
        add esp, 4
        lea ecx, [eax + eax*1 + 2]
        mov eax, dword ptr [esp + 0x14]
        push ecx
        lea edx, [esp + 0x70]
        push edx
        push 0x10051548
        push eax
        call dword ptr [esi + 0x48]
        mov esi, eax
        cmp esi, ebp
        jl L_36294
        movzx ecx, word ptr [edi + 0x38]
        mov eax, dword ptr [esp + 0x10]
        push 2
        mov dword ptr [esp + 0x1c], ecx
        mov edx, dword ptr [eax]
        push 4
        lea ecx, [esp + 0x20]
        push ecx
        push 0x1005155c
        push eax
        call dword ptr [edx + 0x48]
        mov esi, eax
        cmp esi, ebp
        jl L_36294
        push 0xbb8
        mov ecx, ebx
        call FUN_10036f40
        mov eax, dword ptr [ebx + 0xc]
        mov edx, dword ptr [eax]
        push ebp
        push 0x10036fa0
        push ebx
        push eax
        call dword ptr [edx + 0xc]
        mov eax, dword ptr [ebx + 0xc]
        push ebp
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x20]
        push edx
        movzx edx, word ptr [edi + 8]
        push ebp
        push ebp
        push edx
        mov edx, dword ptr [edi + 4]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push ebp
        push ebp
        push edx
        mov edx, dword ptr [esp + 0x34]
        push edx
        lea edx, [esp + 0x48]
        push edx
        push eax
        call dword ptr [ecx + 0x18]
        mov edi, dword ptr [edi + 0x30]
        cmp edi, ebp
        mov esi, eax
        jz L_36284
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [edi], eax
L_36284:
        cmp esi, 0x15800e
        jnz L_36290
        xor esi, esi
        jmp L_3629b
L_36290:
        cmp esi, ebp
        jge L_3629b
L_36294:
        mov ecx, dword ptr [ebx]
        push ebp
        push ebx
        call dword ptr [ecx + 0x14]
L_3629b:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, ebp
        jz L_362ad
        mov edx, dword ptr [eax]
        push eax
        call dword ptr [edx + 8]
        mov dword ptr [esp + 0x10], ebp
L_362ad:
        mov eax, dword ptr [esp + 0x14]
        cmp eax, ebp
        jz L_362bb
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx + 8]
L_362bb:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd8
        ret 4
    }
}
