// FUN_1003b305 (0x1003B305) __cdecl, 167 bytes
extern void __cdecl FUN_1003b490(void);
extern void __cdecl FUN_10040680(void);
extern unsigned char g_10051b94;

__declspec(naked) void func_1003b305(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        mov ebx, dword ptr [ebp + 0x8]
        push edi
        mov eax, dword ptr [esi + 0x4]
        dec eax
        cmp byte ptr [ebp + 0x14], 0x0
        jz L335
        cmp eax, dword ptr [ebp + 0xc]
        jnz L335
        xor ecx, ecx
        cmp dword ptr [esi], 0x2d
        setz cl
        add ecx, eax
        add ecx, ebx
        mov eax, ecx
        mov byte ptr [eax], 0x30
        and byte ptr [eax + 0x1], 0x0
    L335:
        cmp dword ptr [esi], 0x2d
        mov edi, ebx
        jnz L342
        mov byte ptr [ebx], 0x2d
        lea edi, [ebx + 0x1]
    L342:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jg L359
        push 0x1
        push edi
        call FUN_1003b490
        pop ecx
        mov byte ptr [edi], 0x30
        pop ecx
        inc edi
        jmp L35B
    L359:
        add edi, eax
    L35B:
        cmp dword ptr [ebp + 0xc], 0x0
        jle L3A5
        push 0x1
        push edi
        call FUN_1003b490
        mov al, byte ptr [g_10051b94]
        pop ecx
        mov byte ptr [edi], al
        mov esi, dword ptr [esi + 0x4]
        inc edi
        pop ecx
        test esi, esi
        jge L3A5
        cmp byte ptr [ebp + 0x14], 0x0
        jz L384
        neg esi
        jmp L38B
    L384:
        neg esi
        cmp dword ptr [ebp + 0xc], esi
        jl L38E
    L38B:
        mov dword ptr [ebp + 0xc], esi
    L38E:
        push dword ptr [ebp + 0xc]
        push edi
        call FUN_1003b490
        push dword ptr [ebp + 0xc]
        push 0x30
        push edi
        call FUN_10040680
        add esp, 0x14
    L3A5:
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
