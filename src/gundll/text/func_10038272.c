// FUN_10038272 (0x10038272) __cdecl, 167 bytes
extern void __cdecl FUN_10038512(void);

__declspec(naked) void func_10038272(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        call FUN_10038512
        mov ecx, dword ptr [ebp + 0x8]
        mov dword ptr [ebp - 0x4], eax
        test ecx, ecx
        jnz L288
        mov ecx, dword ptr [eax + 0x1c]
    L288:
        mov dx, word ptr [ecx]
        push esi
        test dx, dx
        push edi
        jz L2C1
        mov eax, dword ptr [ebp + 0xc]
        mov ax, word ptr [eax]
    L298:
        mov esi, dword ptr [ebp + 0xc]
        test ax, ax
        jz L2B1
        mov edi, eax
    L2A2:
        cmp di, dx
        jz L2B1
        inc esi
        inc esi
        mov di, word ptr [esi]
        test di, di
        jnz L2A2
    L2B1:
        cmp word ptr [esi], 0x0
        jz L2C1
        inc ecx
        inc ecx
        mov dx, word ptr [ecx]
        test dx, dx
        jnz L298
    L2C1:
        mov dx, word ptr [ecx]
        mov dword ptr [ebp + 0x8], ecx
        test dx, dx
        jz L303
        mov eax, dword ptr [ebp + 0xc]
        mov ax, word ptr [eax]
    L2D2:
        mov esi, dword ptr [ebp + 0xc]
        test ax, ax
        jz L2EB
        mov edi, eax
    L2DC:
        cmp di, dx
        jz L2EB
        inc esi
        inc esi
        mov di, word ptr [esi]
        test di, di
        jnz L2DC
    L2EB:
        cmp word ptr [esi], 0x0
        jnz L2FD
        inc ecx
        inc ecx
        mov dx, word ptr [ecx]
        test dx, dx
        jnz L2D2
        jmp L303
    L2FD:
        and word ptr [ecx], 0x0
        inc ecx
        inc ecx
    L303:
        mov eax, dword ptr [ebp - 0x4]
        pop edi
        pop esi
        mov dword ptr [eax + 0x1c], ecx
        mov eax, dword ptr [ebp + 0x8]
        sub eax, ecx
        neg eax
        sbb eax, eax
        and eax, dword ptr [ebp + 0x8]
        leave
        ret
    }
}
