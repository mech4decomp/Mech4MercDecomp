/*
 * FUN_005a6960 (79 B) — Update/refresh function.
 *
 * Checks two flags at this+0x1ad and this+0x1ac, conditionally calls
 * subroutines, then calls FUN_004dae60 with 2 params.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a6a60(void);
extern void __cdecl FUN_005a69b0(void);
extern void __cdecl FUN_004dae60(int param1, int param2);

__declspec(naked) void __stdcall FUN_005a6960(int param1, int param2)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x1ad]
        test    al, al
        jz      check_flag2
        call    FUN_005a6a60
        mov     byte ptr [esi + 0x1ad], 0
check_flag2:
        mov     al, byte ptr [esi + 0x1ac]
        test    al, al
        jz      do_call
        mov     ecx, esi
        call    FUN_005a69b0
        mov     byte ptr [esi + 0x1ac], 0
do_call:
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        and     edx, 0xffffffbf
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], edx
        call    FUN_004dae60
        pop     esi
        ret     8
    }
}
