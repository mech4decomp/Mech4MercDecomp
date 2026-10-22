/* FUN_10008d00 - __thiscall, ECX=this, param_1=[esp+4] */

extern char g_str_100258c4;

void __declspec(naked) FUN_10008d00(void)
{
    __asm {
        mov  eax, dword ptr [ecx + 0x4]
        push esi
        mov  esi, dword ptr [esp + 0x8]
        mov  edx, dword ptr [eax]
        push esi
        mov  esi, dword ptr [ecx + 0x10]
        mov  ecx, dword ptr [ecx + 0xc]
        push offset g_str_100258c4
        push esi
        push ecx
        push 0xffffd8f3
        push eax
        call dword ptr [edx]
        add  esp, 0x18
        pop  esi
        ret  0x4
    }
}
