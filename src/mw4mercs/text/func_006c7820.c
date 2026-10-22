/*
 * FUN_006C7820 (216 B) - FPU bounds/intersection test.
 *
 * __thiscall (ECX = this), RET 8 (two stack params at [ESP+0xC]/[ESP+0x10]
 * after SUB ESP,8).
 *
 * Compares this+0x30/0x34/0x38 against the float at 0x76C5B0, then
 * performs a series of FPU arithmetic checks (products, subtracts,
 * adds) against the two params and integer constants 0x858940/0x858944.
 * Returns 0 if all checks pass, else 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern int g_858940;
extern int g_858944;

__declspec(naked) char __fastcall FUN_006c7820(void)
{
    __asm {
        fld     dword ptr [ecx + 0x30]
        sub     esp, 8
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      loc_78f0
        fld     dword ptr [ecx + 0x34]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_78f0
        fld     dword ptr [ecx + 0x38]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 */
        __emit 0xC4
        __emit 0x40
        jz      loc_78f0
        fld     dword ptr [ecx + 0x10]
        fmul    dword ptr [ecx + 0x18]
        fsubr   dword ptr [esp + 0xc]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_78f0
        fld     dword ptr [ecx + 0x14]
        fmul    dword ptr [ecx + 0x1c]
        fsubr   dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_78f0
        mov     edx, dword ptr [ecx + 0x44]
        mov     eax, dword ptr [edx + 0x14]
        __emit 0x89   /* mov [esp],eax: MSVC6 drops 00 disp byte (89 04 24); ref 89 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 4], 0
        __emit 0xDF   /* fild qword [esp]: MSVC6 drops 00 disp byte; ref DF 6C 24 00 */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        fsub    dword ptr [ecx + 0x18]
        fmul    dword ptr [ecx + 0x10]
        fadd    dword ptr [esp + 0xc]
        fild    dword ptr [g_858940]
        fcompp
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_78f0
        mov     edx, dword ptr [edx + 0x10]
        __emit 0x89   /* mov [esp],edx: MSVC6 drops 00 disp byte; ref 89 54 24 00 */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 4], 0
        __emit 0xDF   /* fild qword [esp]: MSVC6 drops 00 disp byte; ref DF 6C 24 00 */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        fsub    dword ptr [ecx + 0x1c]
        fmul    dword ptr [ecx + 0x14]
        fadd    dword ptr [esp + 0x10]
        fild    dword ptr [g_858944]
        fcompp
        __emit 0xDF   /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     loc_78f0
        xor     al, al
        add     esp, 8
        ret     8
loc_78f0:
        mov     al, 1
        add     esp, 8
        ret     8
    }
}
