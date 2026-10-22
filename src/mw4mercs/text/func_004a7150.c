/*
 * FUN_004a7150 (51 B) — __thiscall MLR object destructor: frees member at
 * +0xa8, calls base dtor FUN_00494140, optionally frees this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_004a7150(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xa8]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     ecx, esi
        call    FUN_00494140
        test    byte ptr [esp+8], 1
        jz      L2
        push    esi
        call    FUN_004084e0
        add     esp, 4
L2:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
