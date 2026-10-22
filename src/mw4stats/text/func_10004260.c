/* FUN_10004260 - __thiscall, 178 bytes
 * SEH prologue. If param_1==0 return 0. Else EnterCriticalSection(this),
 * operator_new(0xa4), construct via FUN_10004320, link into list at
 * +0x20/+0x24 (+0x9c next), LeaveCriticalSection, return success. */

extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */
extern void *__cdecl FUN_1001ee16(void);
extern void *__cdecl FUN_10004320(void);

__declspec(naked) void FUN_10004260(void)
{
    __asm {
        mov  eax, dword ptr fs:[0]
        push -0x1
        push 0x1001f4ab
        push eax
        mov  dword ptr fs:[0], esp
        push esi
        push edi
        mov  edi, dword ptr [esp + 0x18]
        test edi, edi
        mov  esi, ecx
        jnz  L_296
        xor  al, al
        mov  ecx, dword ptr [esp + 0x8]
        mov  dword ptr fs:[0], ecx
        pop  edi
        pop  esi
        add  esp, 0xc
        ret  0x4
L_296:
        push esi
        call dword ptr [g_10021048]
        push 0xa4
        call FUN_1001ee16
        add  esp, 0x4
        mov  dword ptr [esp + 0x18], eax
        test eax, eax
        mov  dword ptr [esp + 0x10], 0x0
        jz   L_30e
        mov  ecx, dword ptr [esi + 0x20]
        push edi
        push ecx
        mov  ecx, eax
        call FUN_10004320
        mov  edi, eax
        test edi, edi
        jz   L_2ed
        mov  edx, dword ptr [esi + 0x1c]
        mov  eax, dword ptr [esi + 0x20]
        inc  edx
        test eax, eax
        mov  dword ptr [esi + 0x1c], edx
        jz   L_2e0
        mov  dword ptr [eax + 0x9c], edi
L_2e0:
        mov  eax, dword ptr [esi + 0x24]
        test eax, eax
        mov  dword ptr [esi + 0x20], edi
        jnz  L_2ed
        mov  dword ptr [esi + 0x24], edi
L_2ed:
        push esi
        call dword ptr [g_10021044]
        mov  ecx, dword ptr [esp + 0x8]
        xor  eax, eax
        test edi, edi
        pop  edi
        setnz al
        mov  dword ptr fs:[0], ecx
        pop  esi
        add  esp, 0xc
        ret  0x4
L_30e:
        xor  edi, edi
        jmp  L_2ed
    }
}
