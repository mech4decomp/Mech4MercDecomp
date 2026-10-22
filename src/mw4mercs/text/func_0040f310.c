/* FUN_0040f310 - loader/parser subsystem helper (recursive free) */

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl func_0040f310(void);

__declspec(naked) void func_0040f310(void)
{
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        mov ebx, ecx
        jz L3
        push edi
    L1:
        mov eax, dword ptr [esi+0xc]
        push eax
        mov ecx, ebx
        call func_0040f310
        mov eax, dword ptr [esi+0x10]
        test eax, eax
        mov edi, dword ptr [esi+8]
        jz L2
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L2
        push eax
        call FUN_004084e0
        add esp, 4
    L2:
        test esi, esi
        jz L4
        push esi
        call FUN_004084e0
        add esp, 4
    L4:
        test edi, edi
        mov esi, edi
        jnz L1
        pop edi
    L3:
        pop esi
        pop ebx
        ret 4
    }
}
