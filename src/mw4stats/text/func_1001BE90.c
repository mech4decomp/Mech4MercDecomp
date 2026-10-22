/* FUN_1001be90 - __thiscall, 130 bytes (3 args, RET 0xc)
 * Constructor: sets fields, creates an event (IAT 0x10021030) into
 * [this+0x20], initializes it (IAT 0x100210a0), zeroes [this+0x30..0x48]. */

extern void *g_10021030;   /* IAT: CreateEvent */
extern void *g_100210a0;   /* IAT: event init */

__declspec(naked) void FUN_1001be90(void)
{
    __asm {
        mov  eax, dword ptr [esp + 4]
        push esi
        mov  esi, ecx
        push edi
        test eax, eax
        mov  dword ptr [esi + 0xc], 0
        mov  dword ptr [esi + 4], 1
        ja   L_beaf
        mov  eax, 0x1d4c0
L_beaf:
        mov  dword ptr [esi + 8], eax
        mov  eax, dword ptr [esp + 0x14]
        mov  dword ptr [esi + 0x24], eax
        mov  eax, dword ptr [esp + 0x10]
        lea  edi, [esi + 0x20]
        mov  dword ptr [esi], eax
        test eax, eax
        mov  dword ptr [edi], 0
        mov  dword ptr [esi + 0x28], 0
        mov  dword ptr [esi + 0x2c], 0
        jz   L_bf01
        push 0
        push 0
        push 1
        push 0
        call dword ptr [g_10021030]
        test eax, eax
        mov  dword ptr [edi], eax
        jz   L_bf08
        push edi
        call dword ptr [g_100210a0]
        mov  ecx, 6
        xor  eax, eax
        lea  edi, [esi + 0x30]
        rep  stosd
L_bf01:
        pop  edi
        xor  eax, eax
        pop  esi
        ret  0xc
L_bf08:
        pop  edi
        mov  eax, 0x80004005
        pop  esi
        ret  0xc
    }
}
