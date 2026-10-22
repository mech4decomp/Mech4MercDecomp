/* FUN_100322c0 __thiscall 0x100322C0 */
extern void __cdecl FUN_100333f0(void);
extern void __cdecl FUN_100340e0(void);
extern void __cdecl FUN_100339a0(void);
extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10034340(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_10033ad0(void);
extern void __cdecl FUN_10033cc0(void);
extern void *g_100490b8; /* IAT lstrlenW */
extern void *g_10049204; /* IAT timeGetTime */

__declspec(naked) void FUN_100322c0(void)
{
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x10048a33
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xac]
        push esi
        push edi
        lea eax, [esp + 0x1c]
        mov esi, ecx
        mov ecx, dword ptr [ebp + 0x1c]
        push eax
        push ecx
        call FUN_100333f0
        xor ebx, ebx
        cmp eax, ebx
        jl L_32498
        mov edx, dword ptr [esi + 0x10]
        push edx
        push ebx
        lea eax, [esp + 0x70]
        push eax
        push ebx
        lea ecx, [esp + 0x4c]
        mov word ptr [esp + 0x80], bx
        mov dword ptr [esp + 0x7c], ebx
        mov dword ptr [esp + 0x78], 3
        call FUN_100340e0
        mov eax, dword ptr [esp + 0x54]
        push ebx
        push ebx
        push 8
        push ebx
        lea ecx, [esp + 0x24]
        push ecx
        lea edx, [esp + 0x68]
        push edx
        mov dword ptr [esp + 0xc4], ebx
        call dword ptr [eax]
        mov edi, eax
        cmp edi, ebx
        jl L_323aa
        cmp byte ptr [esi + 0x6c], bl
        jz L_323c5
        push 0x10051598
        mov dword ptr [esp + 0x1c], ebx
        call dword ptr [g_100490b8]
        push 2
        lea edx, [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x5c]
        lea eax, [eax + eax*1 + 2]
        push 8
        lea ecx, [eax + eax*1]
        push 1
        lea eax, [esp + 0x28]
        mov word ptr [esp + 0x3c], cx
        push eax
        lea ecx, [esp + 0x68]
        push ecx
        mov word ptr [esp + 0x3c], 4
        mov dword ptr [esp + 0x40], 0x10051598
        mov word ptr [esp + 0x48], 6
        mov dword ptr [esp + 0x4c], ebx
        mov word ptr [esp + 0x50], bx
        call dword ptr [edx]
        mov edi, eax
        cmp edi, ebx
        jge L_323c5
L_323aa:
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0xac], 0xffffffff
        call FUN_100339a0
        mov eax, edi
        jmp L_32498
L_323c5:
        cmp dword ptr [ebp + 8], ebx
        jbe L_32410
        push 0x14
        call FUN_10001d50
        add esp, 4
        mov dword ptr [esp + 0x64], eax
        cmp eax, ebx
        mov byte ptr [esp + 0xac], 1
        jz L_32403
        mov edx, dword ptr [ebp + 8]
        push ebx
        lea ecx, [esi + 0x34]
        push ecx
        mov ecx, dword ptr [ebp + 4]
        push edx
        push ecx
        mov ecx, eax
        call FUN_10034340
        mov byte ptr [esp + 0xac], bl
        mov edi, eax
        jmp L_32412
L_32403:
        xor eax, eax
        mov byte ptr [esp + 0xac], bl
        mov edi, eax
        jmp L_32412
L_32410:
        xor edi, edi
L_32412:
        mov eax, dword ptr [esi + 0x14]
        mov edx, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0x20]
        lea ecx, [ebp + 0x18]
        push ecx
        lea ecx, [esp + 0x5c]
        push ecx
        push edi
        sub esp, 8
        mov ecx, esp
        mov dword ptr [ecx], esi
        mov si, word ptr [esp + 0x38]
        push eax
        mov word ptr [ecx + 4], si
        call dword ptr [edx + 8]
        cmp edi, ebx
        mov byte ptr [esp + 0x13], al
        jz L_3244b
        push edi
        call FUN_10001d60
        add esp, 4
L_3244b:
        call dword ptr [g_10049204]
        mov edx, dword ptr [esp + 0x14]
        lea ecx, [esp + 0x3c]
        mov dword ptr [edx + 4], eax
        call FUN_10033ad0
        lea ecx, [esp + 0x3c]
        mov dword ptr [ebp + 0xc], eax
        call FUN_10033cc0
        movzx eax, ax
        lea ecx, [esp + 0x3c]
        mov dword ptr [ebp + 0x10], eax
        mov dword ptr [esp + 0xac], 0xffffffff
        call FUN_100339a0
        mov cl, byte ptr [esp + 0x13]
        xor eax, eax
        cmp cl, bl
        setnz al
        dec eax
        and eax, 0x80004005
L_32498:
        mov ecx, dword ptr [esp + 0xa4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xa0
        ret 4
    }
}
