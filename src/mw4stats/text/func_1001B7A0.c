/* FUN_1001b7a0 - __fastcall, 100 bytes
 * Destructor with SEH frame (FS:[0]). Frees [this+0x3c] if [this+0x48]!=0,
 * zeroes fields, calls sub-object dtor FUN_100067d0, sets vtable 0x10021688. */

extern void *g_100210ec;          /* IAT: free */
extern void __cdecl FUN_100067d0(void);

__declspec(naked) void __cdecl FUN_1001b7a0(void)
{
    __asm {
        push -1
        push 0x10020158
        mov  eax, dword ptr fs:[0]
        push eax
        mov  dword ptr fs:[0], esp
        push ecx
        push esi
        mov  esi, ecx
        push edi
        mov  dword ptr [esp + 8], esi
        mov  eax, dword ptr [esi + 0x48]
        xor  edi, edi
        cmp  eax, edi
        mov  dword ptr [esp + 0x14], edi
        jbe  L1
        mov  eax, dword ptr [esi + 0x3c]
        cmp  eax, edi
        jz   L1
        push eax
        call dword ptr [g_100210ec]
        add  esp, 4
L1:
        lea  ecx, [esi + 0x20]
        mov  dword ptr [esi + 0x3c], edi
        mov  dword ptr [esi + 0x4c], edi
        mov  dword ptr [esi + 0x48], edi
        call FUN_100067d0
        mov  ecx, dword ptr [esp + 0xc]
        mov  dword ptr [esi], 0x10021688
        pop  edi
        pop  esi
        mov  dword ptr fs:[0], ecx
        add  esp, 0x10
        ret
    }
}
