/*
 * FUN_0042bcd0 (152 B) — MLR color/light table builder. Iterates 0x100
 * entries building a byte lookup table at 0x007b96dc from a trig
 * function (FUN_0075db86) scaled by 0x0076e134/0x0076e138, storing
 * setup params into 0x007b97dc/e0/e4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076e138;
extern int g_007b97e4;
extern int g_007b97dc;
extern int g_007b97e0;
extern float g_0076e134;
extern void __cdecl FUN_0075db86(void);
extern float g_0076dd64;
extern float g_0076d070;
extern float g_0076dd60;

__declspec(naked) void FUN_0042bcd0(void)
{
    __asm {
        sub     esp, 0x8
        fild    dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0xc]
        /* __emit: MSVC6 drops the 00 disp byte for fstp qword ptr [esp+0] */
        __emit  0xDD
        __emit  0x5C
        __emit  0x24
        __emit  0x00
        push    esi
        fld     dword ptr [esp + 0x10]
        xor     esi, esi
        fmul    dword ptr [g_0076e138]
        mov     dword ptr [g_007b97e4], eax
        mov     dword ptr [g_007b97dc], ecx
        mov     dword ptr [g_007b97e0], edx
        fstp    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], esi
L_bd0d:
        fild    dword ptr [esp + 0x18]
        fmul    dword ptr [g_0076e134]
        fld     qword ptr [esp + 0x4]
        call    FUN_0075db86
        fmul    dword ptr [esp + 0x14]
        fcom    dword ptr [g_0076dd64]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_bd3c
        fstp    st(0)
        mov     byte ptr [esi + 0x7b96dc], 0xff
        jmp     L_bd56
L_bd3c:
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x10]
        mov     al, byte ptr [esp + 0x10]
        mov     byte ptr [esi + 0x7b96dc], al
L_bd56:
        inc     esi
        cmp     esi, 0x100
        mov     dword ptr [esp + 0x18], esi
        jl      L_bd0d
        pop     esi
        add     esp, 0x8
        ret
    }
}
