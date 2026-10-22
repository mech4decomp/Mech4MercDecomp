/* FUN_0040f250 - loader/parser subsystem helper (list init) */

__declspec(naked) void func_0040f250(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        mov dword ptr [eax+4], 0
        mov dword ptr [eax+8], eax
        mov byte ptr [eax], 0
        mov dword ptr [eax+0xc], eax
        ret
    }
}
