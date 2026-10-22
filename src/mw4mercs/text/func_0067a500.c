/* FUN_0067a500 - HUD debug menu pointer validation */
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void func_0067a500(void)
{
    __asm {
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [eax]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0x10]
        xor ecx, 0x85739531
        jnz check2
        xor eax, eax
        ret
check2:
        mov edx, dword ptr [eax + 0x18]
        xor edx, 0x85739531
        jnz load
        xor eax, eax
        ret
load:
        mov eax, dword ptr [eax + 0x18]
        xor eax, 0x85739531
        mov eax, dword ptr [eax + 0x178]
        ret
    }
}
