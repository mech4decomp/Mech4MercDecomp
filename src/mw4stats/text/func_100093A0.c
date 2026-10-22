/* FUN_100093a0 - __fastcall, ECX=param_1. SEH-guarded destructor. */

void __declspec(naked) FUN_100093a0(void)
{
    __asm {
        push -1
        push 0x1001f89b
        mov  eax, dword ptr fs:[0]
        push eax
        mov  dword ptr fs:[0], esp
        push ecx
        test ecx, ecx
        push edi
        jz   L_93c0
        lea  edi, [ecx + 0x4]
        jmp  L_93c2
L_93c0:
        xor  edi, edi
L_93c2:
        mov  eax, dword ptr [edi]
        test eax, eax
        jz   L_9420
        push ebx
        push esi
L_93ca:
        mov  ebx, dword ptr [eax + 0x4]
        mov  esi, eax
        mov  dword ptr [esp + 0xc], esi
        mov  eax, dword ptr [esi + 0x18]
        mov  dword ptr [esp + 0x18], 0x0
        test eax, eax
        jz   L_93ef
        mov  ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        jz   L_93ef
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_93ef:
        mov  eax, dword ptr [esi + 0xc]
        mov  dword ptr [esp + 0x18], 0xffffffff
        test eax, eax
        jz   L_940b
        mov  ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        jz   L_940b
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_940b:
        mov  ecx, dword ptr [edi + 0xc]
        mov  edx, dword ptr [edi]
        push edx
        mov  eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov  eax, ebx
        mov  dword ptr [edi], ebx
        test eax, eax
        jnz  L_93ca
        pop  esi
        pop  ebx
L_9420:
        mov  ecx, dword ptr [esp + 0x8]
        pop  edi
        mov  dword ptr fs:[0], ecx
        add  esp, 0x10
        ret
    }
}
