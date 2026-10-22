/*
 * FUN_006F1060 (84 B) — Timer/update function: calls FUN_006f39a0(this),
 * compares result with double at 0x76d970 and with stack param (double).
 * If within range, adds and calls FUN_006f3960 with sum. Else calls
 * FUN_006f3960 with original param. Sets byte at this+0x2c to 0. RET 8.
 *
 * __thiscall (ECX = this), RET 8 (2 stack params = double).
 *
 * Disassembly:
 *   56                   push    esi
 *   8B F1                mov     esi, ecx
 *   E8 38 29 00 00       call    0x006f39a0
 *   DC 15 70 D9 76 00    fcom    qword ptr [0x0076d970]
 *   DF E0                fnstsw  ax
 *   F6 C4 41             test    ah, 0x41
 *   75 24                jnz     else_path
 *   DC 54 24 08          fcom    qword ptr [esp + 8]
 *   DF E0                fnstsw  ax
 *   F6 C4 01             test    ah, 1
 *   74 19                jz      else_path
 *   DC 44 24 08          fadd    qword ptr [esp + 8]
 *   83 EC 08             sub     esp, 8
 *   8B CE                mov     ecx, esi
 *   DD 1C 24             fstp    qword ptr [esp]
 *   E8 CF 28 00 00       call    0x006f3960
 *   C6 46 2C 00          mov     byte ptr [esi + 0x2c], 0
 *   5E                   pop     esi
 *   C2 08 00             ret     8
 *   8B 44 24 0C          mov     eax, [esp + 0xc]
 *   DD D8                fstp    st0
 *   8B 4C 24 08          mov     ecx, [esp + 8]
 *   50                   push    eax
 *   51                   push    ecx
 *   8B CE                mov     ecx, esi
 *   E8 B4 28 00 00       call    0x006f3960
 *   C6 46 2C 00          mov     byte ptr [esi + 0x2c], 0
 *   5E                   pop     esi
 *   C2 08 00             ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006f39a0(int);
void __fastcall FUN_006f3960(int, double);

__declspec(naked) void __stdcall FUN_006f1060(double param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006f39a0
        _emit 0xDC
        _emit 0x15
        _emit 0x70
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x41
        jnz     else_path
        fcom    qword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        jz      else_path
        fadd    qword ptr [esp + 8]
        sub     esp, 8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_006f3960
        mov     byte ptr [esi + 0x2c], 0
        pop     esi
        ret     8
else_path:
        mov     eax, dword ptr [esp + 0xc]
        _emit 0xDD
        _emit 0xD8
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006f3960
        mov     byte ptr [esi + 0x2c], 0
        pop     esi
        ret     8
    }
}
