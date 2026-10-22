/* FUN_10009070 - __fastcall, ECX=param_1. SEH-guarded constructor. */

extern void __cdecl FUN_10008da0(void);
extern void __cdecl FUN_10009440(void);

void __declspec(naked) FUN_10009070(void)
{
    __asm {
        push -1
        push 0x1001f7f7
        mov  eax, dword ptr fs:[0]
        push eax
        mov  dword ptr fs:[0], esp
        sub  esp, 0xc
        push ebx
        push esi
        mov  esi, ecx
        xor  ebx, ebx
        push edi
        push ebx
        mov  ecx, dword ptr [esi]
        push 0x6c
        mov  eax, dword ptr [ecx]
        call dword ptr [eax]
        mov  edi, eax
        cmp  edi, ebx
        mov  dword ptr [esp + 0xc], edi
        jnz  L_90bf
        mov  ecx, esi
        call FUN_10008da0
        pop  edi
        pop  esi
        xor  al, al
        pop  ebx
        mov  ecx, dword ptr [esp + 0xc]
        mov  dword ptr fs:[0], ecx
        add  esp, 0x18
        ret  0x4
L_90bf:
        push ebp
        mov  dword ptr [esp + 0x14], edi
        mov  ebp, dword ptr [esi]
        lea  esi, [edi + 0x4]
        mov  dword ptr [edi], 0x10021364
        mov  dword ptr [esp + 0x24], ebx
        mov  dword ptr [esi + 0x4], ebx
        mov  dword ptr [esi + 0x8], ebx
        mov  dword ptr [esi], 0x10021360
        mov  dword ptr [esi + 0xc], 0x10021314
        mov  dword ptr [esp + 0x18], esi
        mov  dword ptr [esi + 0x10], ebp
        mov  dword ptr [esi + 0x14], ebx
        mov  dword ptr [esi + 0x18], ebx
        push ebp
        lea  ecx, [esi + 0x20]
        mov  byte ptr [esp + 0x28], 0x1
        call FUN_10009440
        mov  dword ptr [esi + 0x1c], 0x10021304
        push ebp
        lea  ecx, [esi + 0x34]
        mov  byte ptr [esp + 0x28], 0x2
        call FUN_10009440
        mov  ecx, dword ptr [esp + 0x2c]
        mov  dword ptr [esi + 0x30], 0x100212e8
        mov  dword ptr [esi + 0x44], ebx
        mov  dword ptr [esi], 0x100212e4
        mov  dword ptr [esi + 0xc], 0x100212b4
        mov  dword ptr [edi + 0x4c], ebp
        mov  dword ptr [edi + 0x50], ebp
        mov  dword ptr [edi + 0x54], ebx
        mov  dword ptr [edi + 0x58], ebx
        mov  dword ptr [edi + 0x5c], ebp
        mov  dword ptr [edi + 0x60], ebx
        mov  dword ptr [edi + 0x64], ebx
        mov  byte ptr [edi + 0x68], bl
        mov  dword ptr [edi], 0x10021358
        mov  dword ptr [ecx], edi
        mov  ecx, dword ptr [esp + 0x1c]
        pop  ebp
        pop  edi
        pop  esi
        mov  al, 0x1
        pop  ebx
        mov  dword ptr fs:[0], ecx
        add  esp, 0x18
        ret  0x4
    }
}
