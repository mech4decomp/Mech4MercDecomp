/* FUN_10009190 - __fastcall, ECX=param_1. SEH-guarded destructor. */

extern void __cdecl FUN_10008650(void);

void __declspec(naked) FUN_10009190(void)
{
    __asm {
        push -1
        push 0x1001f847
        mov  eax, dword ptr fs:[0]
        push eax
        mov  dword ptr fs:[0], esp
        sub  esp, 0x8
        push ebx
        push esi
        mov  esi, ecx
        mov  dword ptr [esp + 0x8], esi
        mov  dword ptr [esi], 0x10021358
        mov  eax, dword ptr [esi + 0x60]
        mov  dword ptr [esp + 0x18], 0x1
        test eax, eax
        jz   L_91d2
        mov  ecx, dword ptr [esi + 0x5c]
        test ecx, ecx
        jz   L_91d2
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_91d2:
        mov  eax, dword ptr [esi + 0x54]
        mov  byte ptr [esp + 0x18], 0x0
        test eax, eax
        jz   L_91eb
        mov  ecx, dword ptr [esi + 0x50]
        test ecx, ecx
        jz   L_91eb
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_91eb:
        lea  ebx, [esi + 0x4]
        mov  dword ptr [esp + 0x8], ebx
        lea  eax, [ebx + 0x30]
        mov  dword ptr [esp + 0x18], 0x3
        test eax, eax
        jz   L_9206
        lea  esi, [eax + 0x4]
        jmp  L_9208
L_9206:
        xor  esi, esi
L_9208:
        mov  eax, dword ptr [esi]
        push edi
        test eax, eax
        jz   L_9225
L_920f:
        mov  ecx, dword ptr [esi + 0xc]
        mov  eax, dword ptr [esi]
        push eax
        mov  edx, dword ptr [ecx]
        mov  edi, dword ptr [eax + 0x8]
        call dword ptr [edx + 0x4]
        mov  eax, edi
        mov  dword ptr [esi], edi
        test eax, eax
        jnz  L_920f
L_9225:
        lea  eax, [ebx + 0x1c]
        test eax, eax
        jz   L_9231
        lea  esi, [eax + 0x4]
        jmp  L_9233
L_9231:
        xor  esi, esi
L_9233:
        mov  eax, dword ptr [esi]
        test eax, eax
        jz   L_9282
        push ebp
        mov  bl, 0x2
L_923c:
        mov  ebp, dword ptr [eax + 0x4]
        mov  edi, eax
        mov  dword ptr [esp + 0x14], edi
        mov  eax, dword ptr [edi + 0x18]
        mov  byte ptr [esp + 0x20], 0x4
        test eax, eax
        jz   L_925e
        mov  ecx, dword ptr [edi + 0x14]
        test ecx, ecx
        jz   L_925e
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_925e:
        lea  ecx, [edi + 0x8]
        mov  byte ptr [esp + 0x20], bl
        call FUN_10008650
        mov  ecx, dword ptr [esi + 0xc]
        mov  edx, dword ptr [esi]
        push edx
        mov  eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov  eax, ebp
        mov  dword ptr [esi], ebp
        test eax, eax
        jnz  L_923c
        mov  ebx, dword ptr [esp + 0x10]
        pop  ebp
L_9282:
        mov  eax, dword ptr [ebx + 0x14]
        mov  dword ptr [esp + 0x1c], 0xffffffff
        test eax, eax
        pop  edi
        jz   L_929f
        mov  ecx, dword ptr [ebx + 0x10]
        test ecx, ecx
        jz   L_929f
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_929f:
        mov  ecx, dword ptr [esp + 0x10]
        pop  esi
        pop  ebx
        mov  dword ptr fs:[0], ecx
        add  esp, 0x14
        ret
    }
}
