/* FUN_10008df0 - __fastcall, ECX=param_1 */

extern char g_str_100259a0;

void __declspec(naked) FUN_10008df0(void)
{
    __asm {
        mov  eax, dword ptr [ecx + 0x4]
        push esi
        mov  esi, dword ptr [ecx + 0x10]
        mov  ecx, dword ptr [ecx + 0xc]
        mov  edx, dword ptr [eax]
        push offset g_str_100259a0
        push esi
        push ecx
        push 0xffffd8f6
        push eax
        call dword ptr [edx]
        add  esp, 0x14
        pop  esi
        ret
    }
}
