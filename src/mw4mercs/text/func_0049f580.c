/*
 * FUN_0049f580 (351 B) - MLR particle/flare/debris object update
 * (__thiscall, RET 0x4, one byte arg). FPU-heavy: computes particle
 * positions via FUN_004ad160, performs range checks against constants,
 * and calls a math helper through the IAT at 0x0076b2e4. Loops back to
 * recompute until a condition is met.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ad160(void *a, void *b);
extern void __cdecl FUN_004adfb0(int arg);

extern float g_0076c5b0;   /* 0x0076c5b0 */
extern float g_0077027c;   /* 0x0077027c */
extern float g_00770164;   /* 0x00770164 */
extern float g_0076d070;   /* 0x0076d070 */

extern double (__cdecl *g_0076b2e4)(double);   /* IAT @ 0x0076b2e4 */

__declspec(naked) void FUN_0049f580(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x20
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x228]
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        push    edi
        lea     edi, [esi + 0x1c8]
        fstp    dword ptr [esp + 0x14]
LF5A6:
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, edi
        call    FUN_004ad160
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x20]
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     LF5D8
        mov     dword ptr [esp + 0x10], 0x0
LF5D8:
        fld     dword ptr [esp + 0x14]
        lea     eax, [esp + 0x18]
        fmul    dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esi + 0x178]
        fstp    dword ptr [esp + 0x14]
        call    FUN_004ad160
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0xc]
        fst     dword ptr [esp + 0xc]
        fsub    st(0), st(1)
        fcomp   dword ptr [g_0077027c]
        fnstsw  ax
        test    ah, 0x1
        jnz     LF674
        mov     al, byte ptr [ebp + 0x8]
        fstp    st(0)
        test    al, al
        jz      LF66A
        fld     dword ptr [esp + 0x18]
        sub     esp, 0x8
        fsub    dword ptr [esp + 0x24]
        fld     dword ptr [g_0077027c]
        fsub    st(0), st(1)
        fdiv    dword ptr [esp + 0x1c]
        fstp    qword ptr [esp]
        fstp    st(0)
        call    dword ptr [g_0076b2e4]
        fstp    dword ptr [esp + 0x18]
        add     esp, 0x8
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x1cc]
        call    FUN_004adfb0
        mov     byte ptr [esi + 0x1f4], 0x0
        jmp     LF5A6
LF66A:
        xor     al, al
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
LF674:
        fadd    dword ptr [g_00770164]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     LF6A0
        fstp    st(0)
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [g_00770164]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     LF6C9
LF6A0:
        fld     dword ptr [g_0076d070]
        sub     esp, 0x8
        fsub    st(0), st(1)
        fstp    qword ptr [esp]
        fstp    st(0)
        call    dword ptr [g_0076b2e4]
        fstp    dword ptr [esi + 0x244]
        add     esp, 0x8
        mov     al, 0x1
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
LF6C9:
        pop     edi
        fstp    st(0)
        mov     dword ptr [esi + 0x244], 0x0
        mov     al, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
