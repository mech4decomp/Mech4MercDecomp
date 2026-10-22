/* FUN_10008b90 - __thiscall, ECX=this, param_1=[esp+4] */

extern void __cdecl FUN_10008aa0(void);
extern void __cdecl FUN_10006fb0(void);

void __declspec(naked) FUN_10008b90(void)
{
    __asm {
        push ecx
        push esi
        mov  esi, ecx
        lea  eax, [esp + 0x4]
        push edi
        mov  edi, dword ptr [esi + 0x14]
        push eax
        mov  dword ptr [esp + 0xc], 0x0
        call FUN_10008aa0
        test al, al
        jnz  L_bb4
        pop  edi
        pop  esi
        pop  ecx
        ret  0x4
L_bb4:
        mov  ecx, dword ptr [esi + 0x8]
        mov  edx, dword ptr [esp + 0x8]
        shr  ecx, 0x2
        not  cl
        and  cl, 0x1
        add  edi, 0x2
        push ecx
        mov  ecx, dword ptr [esp + 0x14]
        push edx
        push edi
        call FUN_10006fb0
        pop  edi
        mov  al, 0x1
        pop  esi
        pop  ecx
        ret  0x4
    }
}
