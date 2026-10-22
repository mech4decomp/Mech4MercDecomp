/* FUN_10003520 - __fastcall, 43 bytes
 * Destructor: virtual call, then EnterCriticalSection/LeaveCriticalSection
 * around +0x28, zeroes +0x20, sets +0x24=1, +0x25=0.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10003520 (43 B, __fastcall, ECX = this) - destructor. Calls virtual
 * fn 0 (thiscall), then EnterCriticalSection/LeaveCriticalSection on +0x28,
 */

extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */

__declspec(naked) void FUN_10003520(void)
{
    __asm {
        push esi
        mov  esi, ecx
        mov  eax, dword ptr [esi]
        push edi
        call dword ptr [eax]
        lea  edi, [esi + 0x28]
        push edi
        mov  dword ptr [esi + 0x20], 0x0
        call dword ptr [g_10021048]
        push edi
        mov  byte ptr [esi + 0x25], 0x0
        mov  byte ptr [esi + 0x24], 0x1
        call dword ptr [g_10021044]
        pop  edi
        pop  esi
        ret
    }
}
