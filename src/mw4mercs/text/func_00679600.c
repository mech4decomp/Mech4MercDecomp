/* FUN_00679600 - HUD spatial-hash grid: dtor (__thiscall, ECX=this) */
extern void __cdecl FUN_00561730(void *p);

__declspec(naked) void func_00679600(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi+0x50]
        test ecx, ecx
        mov dword ptr [esi], 0x797fe8
        jz L1
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
L1:
        mov ecx, esi
        call FUN_00561730
        pop esi
        ret
    }
}
