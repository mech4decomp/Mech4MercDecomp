/* FUN_100041d0 - __thiscall, 64 bytes
 * Gate on FUN_10004260, then EnterCriticalSection, optional FUN_10001660,
 * LeaveCriticalSection, return 1.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100041d0 (64 B, __thiscall, RET 0x8) - Critical-section-guarded
 * string-setter gate. If FUN_10004260(this, arg2) fails, return 0. Else
 * EnterCriticalSection(this); if arg1 is non-null and arg1[0] != 0, call
 * FUN_10001660(this->f20, arg1) (reset+assign); LeaveCriticalSection(this);
 * CFLAGS: /O2
 */

extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_10004260(void);
extern void __cdecl FUN_10001660(void);

__declspec(naked) void FUN_100041d0(void)
{
    __asm {
        mov  eax, dword ptr [esp + 0x8]
        push esi
        mov  esi, ecx
        push eax
        call FUN_10004260
        test al, al
        jnz  L_e5
        pop  esi
        ret  0x8
L_e5:
        push esi
        call dword ptr [g_10021048]
        mov  eax, dword ptr [esp + 0x8]
        test eax, eax
        jz   L_03
        cmp  word ptr [eax], 0x0
        jz   L_03
        mov  ecx, dword ptr [esi + 0x20]
        push eax
        call FUN_10001660
L_03:
        push esi
        call dword ptr [g_10021044]
        mov  al, 0x1
        pop  esi
        ret  0x8
    }
}
