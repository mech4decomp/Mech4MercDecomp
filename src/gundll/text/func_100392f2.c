// FUN_100392f2 (0x100392F2) __cdecl, 170 bytes
extern void __cdecl FUN_10038512(void);
extern void __cdecl FUN_10037683(void);
extern void __cdecl FUN_100377ae(void);
extern void __cdecl FUN_100394ad(void);

__declspec(naked) void func_100392f2(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        call FUN_10038512
        cmp dword ptr [eax + 0x68], 0x0
        jz L325
        push dword ptr [ebp + 0x24]
        push dword ptr [ebp + 0x20]
        push dword ptr [ebp + 0x18]
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        push dword ptr [ebp + 0xc]
        push dword ptr [ebp + 0x8]
        call FUN_10037683
        add esp, 0x1c
        test eax, eax
        jnz L398
    L325:
        mov edi, dword ptr [ebp + 0x1c]
        lea eax, [ebp - 0x8]
        push eax
        lea eax, [ebp - 0x4]
        push eax
        push edi
        push dword ptr [ebp + 0x20]
        push dword ptr [ebp + 0x18]
        call FUN_100377ae
        add esp, 0x14
        mov esi, eax
    L341:
        mov eax, dword ptr [ebp - 0x4]
        cmp eax, dword ptr [ebp - 0x8]
        jnc L398
        cmp edi, dword ptr [esi]
        jl L390
        cmp edi, dword ptr [esi + 0x4]
        jg L390
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x10]
        shl eax, 0x4
        add eax, ecx
        mov ecx, dword ptr [eax - 0xc]
        test ecx, ecx
        jz L36A
        cmp byte ptr [ecx + 0x8], 0x0
        jnz L390
    L36A:
        push 0x1
        add eax, -0x10
        push dword ptr [ebp + 0x24]
        push dword ptr [ebp + 0x20]
        push esi
        push 0x0
        push eax
        push dword ptr [ebp + 0x18]
        push dword ptr [ebp + 0x14]
        push dword ptr [ebp + 0x10]
        push dword ptr [ebp + 0xc]
        push dword ptr [ebp + 0x8]
        call FUN_100394ad
        add esp, 0x2c
    L390:
        inc dword ptr [ebp - 0x4]
        add esi, 0x14
        jmp L341
    L398:
        pop edi
        pop esi
        leave
        ret
    }
}
