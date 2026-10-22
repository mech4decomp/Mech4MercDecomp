/* FUN_100034d0 - __fastcall, 75 bytes
 * EnterCriticalSection on +0x28; if +0x25 set, leave+return 0.
 * Else set flags, CreateThread on +0x20, leave, return 1. */

extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */
extern void *g_10021040; /* IAT: CreateThread */

__declspec(naked) void FUN_100034d0(void)
{
    __asm {
        push esi
        push edi
        mov  esi, ecx
        lea  edi, [esi + 0x28]
        push edi
        call dword ptr [g_10021048]
        mov  al, byte ptr [esi + 0x25]
        test al, al
        jz   L1
        push edi
        call dword ptr [g_10021044]
        pop  edi
        xor  al, al
        pop  esi
        ret
L1:
        lea  eax, [esi + 0x20]
        push eax
        push 0x0
        push esi
        push 0x10003850
        push 0x0
        push 0x0
        mov  byte ptr [esi + 0x25], 0x1
        mov  byte ptr [esi + 0x24], 0x0
        call dword ptr [g_10021040]
        push edi
        call dword ptr [g_10021044]
        pop  edi
        mov  al, 0x1
        pop  esi
        ret
    }
}
