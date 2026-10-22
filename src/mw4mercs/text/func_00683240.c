/* FUN_00683240 - HUD element list check (__thiscall) */
extern void __cdecl FUN_00683c40(void);

__declspec(naked) void FUN_00683240(void)
{
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        test ebp, ebp
        jnz short L324d
        mov al, 0x1
        pop ebp
        ret
L324d:
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [eax + 0x4]
        xor bl, bl
        cmp esi, edi
        jz short L328a
L325f:
        mov eax, dword ptr [esi]
        test eax, eax
        jz short L3283
        cmp ebp, 0x1
        setz cl
        push ecx
        push eax
        call FUN_00683c40
        add esp, 0x8
        test al, al
        jnz short L3281
        mov dword ptr [esi], 0x0
        jmp short L3283
L3281:
        mov bl, 0x1
L3283:
        add esi, 0x4
        cmp esi, edi
        jnz short L325f
L328a:
        pop edi
        pop esi
        mov al, bl
        pop ebx
        pop ebp
        ret
    }
}
