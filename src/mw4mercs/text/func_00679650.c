/*
 * FUN_00679650 (83 B) — __thiscall (1 stack arg, RET 8). FPU accumulator
 * update: compares [this+0x54] against g_76D970, optionally stores the arg,
 * then loops adding g_78D008 while a counter at [this+0x60] is < 0x19 and
 * the compare flags hold; stores the result to [this+0x2C].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_76d970;
extern double g_78d008;

__declspec(naked) void FUN_00679650(void)
{
    __asm {
        fld     qword ptr [ecx + 0x54]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp + 4]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        je      loc_679667
        fst     qword ptr [ecx + 0x54]
loc_679667:
        fcom    qword ptr [ecx + 0x54]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jne     loc_67969d
        mov     eax, dword ptr [ecx + 0x60]
        cmp     eax, 0x19
        jge     loc_67969d
loc_679671:
        fld     qword ptr [ecx + 0x54]
        mov     dl, byte ptr [ecx + 0x5c]
        fadd    qword ptr [g_78d008]
        test    dl, dl
        sete    dl
        inc     eax
        fst     qword ptr [ecx + 0x54]
        mov     dword ptr [ecx + 0x60], eax
        fcomp   st(1)
        mov     byte ptr [ecx + 0x5c], dl
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        __emit 0x75 /* jne 0x679671: MSVC6 miscomputes backward rel across reloc'd fadd (0xDC vs ref 0xD4) */
        __emit 0xD4
loc_67969d:
        fstp    qword ptr [ecx + 0x2c]
        ret     8
    }
}
