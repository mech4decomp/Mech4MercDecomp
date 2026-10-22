/*
 * FUN_0060e3f0 (43 B) — __thiscall teardown returning 1.
 *
 * Calls FUN_004c3d50(0) with this = [0x007f27e0], then if this->[4] is
 * nonzero, calls its vtable slot 0 with arg 1 and clears this->[4].
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f27e0;
extern void __cdecl FUN_004c3d50(int a);

__declspec(naked) int __fastcall FUN_0060e3f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_7f27e0]
        push    0
        call    FUN_004c3d50
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        jz      L_done
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [esi + 4], 0
L_done:
        mov     eax, 1
        pop     esi
        ret
    }
}
