/* FUN_0040f7e0 - loader/parser subsystem helper (get root) */

__declspec(naked) void func_0040f7e0(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [eax+8]
        mov eax, dword ptr [esp+4]
        mov dword ptr [eax], ecx
        ret 4
    }
}
