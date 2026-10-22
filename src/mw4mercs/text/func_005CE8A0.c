/*
 * FUN_005CE8A0 (144 B) — __thiscall (this in ECX), returns bool in AL.
 * Loads a global, calls FUN_00415230, then performs a two-point distance
 * check (fld/fsub/fcomp against 0x7880f8) and returns 1 if both deltas
 * exceed the threshold, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00417D80(void);
extern void __cdecl FUN_00420840(void);
extern unsigned long g_7f1f84;
extern float g_7880f8;

__declspec(naked) int func_005CE8A0(void)
{
    __asm {
        mov     eax, dword ptr [g_7f1f84]
        sub     esp, 0x58
        push    esi
        mov     esi, dword ptr [ecx + 0x35c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne     L_fail
        mov     eax, dword ptr [esi + 0x128]
        test    eax, eax
        jne     L_check
        mov     eax, dword ptr [esi + 0x124]
        test    eax, eax
        je      L_fail
L_check:
        mov     ecx, dword ptr [esi + 0xd8]
        add     ecx, 0x80
        push    ecx
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00417D80
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 8]
        call    FUN_00420840
        fld     dword ptr [esp + 8]
        fsub    dword ptr [esp + 4]
        fcomp   dword ptr [g_7880f8]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        je      L_fail
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x14]
        fcomp   dword ptr [g_7880f8]
        __emit  0xDF            /* fnstsw ax: no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x41 */
        __emit  0xC4
        __emit  0x41
        je      L_fail
        mov     al, 1
        pop     esi
        add     esp, 0x58
        ret
L_fail:
        xor     al, al
        pop     esi
        add     esp, 0x58
        ret
    }
}
