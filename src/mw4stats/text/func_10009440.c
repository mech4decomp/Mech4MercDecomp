/* FUN_10009440 - __thiscall, ECX=this, param_1=[esp+4] */

void __declspec(naked) FUN_10009440(void)
{
    __asm {
        mov  eax, ecx
        mov  ecx, dword ptr [esp + 0x4]
        mov  dword ptr [eax], 0x0
        mov  dword ptr [eax + 0x4], eax
        mov  dword ptr [eax + 0x8], 0x0
        mov  dword ptr [eax + 0xc], ecx
        ret  0x4
    }
}
