/* FUN_100040b0 - __thiscall, 56 bytes
 * EnterCriticalSection, read +0x28, optional call FUN_100040f0, LeaveCriticalSection.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100040b0 (56 B, __thiscall, RET 0x4) - Critical-section-guarded accessor
 * with a side call. Enters the critical section, reads the sub-object pointer
 * at (this+0x28)->+0x98 (or 0 if this+0x28 is null), and if this+0x28 is
 * non-null calls FUN_100040f0(arg, this+0x28) (a __thiscall on `arg`), then
 * leaves the critical section and returns the sub-object pointer.
 * CFLAGS: /G6 /O2 (authoritative per cpp/opts.txt; the /O2 default flips the
 * prologue reg-save order - 100.00% requires /G6 /O2).
 */

extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_100040f0(void);

__declspec(naked) void FUN_100040b0(void)
{
    __asm {
        push esi
        push edi
        mov  esi, ecx
        push esi
        call dword ptr [g_10021048]
        mov  eax, dword ptr [esi + 0x28]
        test eax, eax
        jz   L_ca
        mov  edi, dword ptr [eax + 0x98]
        jmp  L_cc
L_ca:
        xor  edi, edi
L_cc:
        test eax, eax
        jz   L_da
        mov  ecx, dword ptr [esp + 0xc]
        push eax
        call FUN_100040f0
L_da:
        push esi
        call dword ptr [g_10021044]
        mov  eax, edi
        pop  edi
        pop  esi
        ret  0x4
    }
}
