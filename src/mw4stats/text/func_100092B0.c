/* FUN_100092b0 - __fastcall, ECX=param_1. SEH-guarded destructor. */

void __declspec(naked) FUN_100092b0(void)
{
    __asm {
        push -1
        push 0x1001f881
        mov  eax, dword ptr fs:[0]
        push eax
        mov  dword ptr fs:[0], esp
        sub  esp, 0x8
        push ebp
        mov  ebp, ecx
        push esi
        mov  dword ptr [esp + 0x8], ebp
        lea  eax, [ebp + 0x30]
        mov  dword ptr [esp + 0x18], 0x1
        test eax, eax
        jz   L_92e4
        lea  esi, [eax + 0x4]
        jmp  L_92e6
L_92e4:
        xor  esi, esi
L_92e6:
        mov  eax, dword ptr [esi]
        push edi
        test eax, eax
        jz   L_9303
L_92ed:
        mov  ecx, dword ptr [esi + 0xc]
        mov  eax, dword ptr [esi]
        push eax
        mov  edx, dword ptr [ecx]
        mov  edi, dword ptr [eax + 0x8]
        call dword ptr [edx + 0x4]
        mov  eax, edi
        mov  dword ptr [esi], edi
        test eax, eax
        jnz  L_92ed
L_9303:
        lea  eax, [ebp + 0x1c]
        test eax, eax
        jz   L_930f
        lea  edi, [eax + 0x4]
        jmp  L_9311
L_930f:
        xor  edi, edi
L_9311:
        mov  eax, dword ptr [edi]
        test eax, eax
        jz   L_9369
L_9317:
        mov  ebp, dword ptr [eax + 0x4]
        mov  esi, eax
        mov  dword ptr [esp + 0x10], esi
        mov  eax, dword ptr [esi + 0x18]
        mov  byte ptr [esp + 0x1c], 0x2
        test eax, eax
        jz   L_9339
        mov  ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        jz   L_9339
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_9339:
        mov  eax, dword ptr [esi + 0xc]
        mov  byte ptr [esp + 0x1c], 0x0
        test eax, eax
        jz   L_9352
        mov  ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        jz   L_9352
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_9352:
        mov  ecx, dword ptr [edi + 0xc]
        mov  edx, dword ptr [edi]
        push edx
        mov  eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov  eax, ebp
        mov  dword ptr [edi], ebp
        test eax, eax
        jnz  L_9317
        mov  ebp, dword ptr [esp + 0xc]
L_9369:
        mov  eax, dword ptr [ebp + 0x14]
        mov  dword ptr [esp + 0x1c], 0xffffffff
        test eax, eax
        pop  edi
        jz   L_9386
        mov  ecx, dword ptr [ebp + 0x10]
        test ecx, ecx
        jz   L_9386
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_9386:
        mov  ecx, dword ptr [esp + 0x10]
        pop  esi
        pop  ebp
        mov  dword ptr fs:[0], ecx
        add  esp, 0x14
        ret
    }
}
