// FUN_100394ad (0x100394AD) __cdecl, 123 bytes
extern void __cdecl FUN_1003966d(void);
extern void __cdecl FUN_1003756b(void);
extern void __cdecl FUN_100393f9(void);
extern void __cdecl FUN_10039528(void);
extern void __cdecl FUN_10037522(void);

__declspec(naked) void func_100394ad(void)
{
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp+0x20], 0
        push ebx
        mov ebx, dword ptr [ebp+0x1c]
        push esi
        push edi
        mov edi, dword ptr [ebp+0xc]
        jz L_cf
        push dword ptr [ebp+0x20]
        push ebx
        push edi
        push dword ptr [ebp+8]
        call FUN_1003966d
        add esp, 0x10
L_cf:
        cmp dword ptr [ebp+0x2c], 0
        push dword ptr [ebp+8]
        jnz L_db
        push edi
        jmp L_de
L_db:
        push dword ptr [ebp+0x2c]
L_de:
        call FUN_1003756b
        mov esi, dword ptr [ebp+0x24]
        push dword ptr [esi]
        push dword ptr [ebp+0x18]
        push dword ptr [ebp+0x14]
        push edi
        call FUN_100393f9
        mov eax, dword ptr [esi+4]
        push 0x100
        push dword ptr [ebp+0x28]
        inc eax
        mov dword ptr [edi+8], eax
        push dword ptr [ebx+0xc]
        push dword ptr [ebp+0x18]
        push dword ptr [ebp+0x10]
        push edi
        push dword ptr [ebp+8]
        call FUN_10039528
        add esp, 0x2c
        test eax, eax
        jz L_23
        push edi
        push eax
        call FUN_10037522
L_23:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
