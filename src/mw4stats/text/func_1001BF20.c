/* FUN_1001bf20 - __thiscall, 133 bytes (1 arg, RET 0x4)
 * Destructor/cleanup: closes/resets event handle [this+0x20], calls
 * FUN_1001c2f0 on [this+0x28]/[this+0x2c], releases [this] via IAT
 * 0x10021168. */

extern void *g_1002109c;   /* IAT */
extern void *g_10021034;   /* IAT: Sleep */
extern void *g_1002102c;   /* IAT: CloseHandle */
extern void *g_100210a0;   /* IAT: event init */
extern void *g_10021168;   /* IAT */
extern void __cdecl FUN_1001c2f0(void);

__declspec(naked) void FUN_1001bf20(void)
{
    __asm {
        push esi
        mov  esi, ecx
        mov  eax, dword ptr [esi + 0x20]
        test eax, eax
        jz   L_bf39
        push eax
        call dword ptr [g_1002109c]
        push 0x19
        call dword ptr [g_10021034]
L_bf39:
        cmp  dword ptr [esi], 0
        jz   L_bf63
        mov  eax, dword ptr [esi + 0x20]
        test eax, eax
        jz   L_bf63
        mov  cl, byte ptr [esp + 8]
        push eax
        test cl, cl
        jz   L_bf5d
        call dword ptr [g_1002102c]
        mov  dword ptr [esi + 0x20], 0
        jmp  L_bf63
L_bf5d:
        call dword ptr [g_100210a0]
L_bf63:
        mov  eax, dword ptr [esi + 0x28]
        test eax, eax
        jz   L_bf72
        push eax
        mov  ecx, esi
        call FUN_1001c2f0
L_bf72:
        mov  eax, dword ptr [esi + 0x2c]
        test eax, eax
        jz   L_bf81
        push eax
        mov  ecx, esi
        call FUN_1001c2f0
L_bf81:
        mov  eax, dword ptr [esi]
        mov  dword ptr [esi + 0x28], 0
        mov  dword ptr [esi + 0x2c], 0
        pop  esi
        test eax, eax
        jz   L_bfa0
        push 0
        push 0
        call dword ptr [g_10021168]
L_bfa0:
        xor  eax, eax
        ret  4
    }
}
