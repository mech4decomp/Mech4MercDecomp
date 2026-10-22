/*
 * FUN_0049dfd0 (607 B) - MLR particle/flare/debris object setup
 * (__thiscall, RET 0x4, one float arg). Validates particle-count limits
 * (div by [esi+0x238]), performs FPU range checks against several
 * constants, logs errors via FUN_006fabf0, and initializes member
 * sub-objects via FUN_004ad160 / FUN_004aeb30 / FUN_004adfb0, then calls
 * FUN_004938b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(const char *fmt, ...);
extern void __cdecl FUN_004ad160(void *a, void *b);
extern void __cdecl FUN_004aeb30(int arg);
extern void __cdecl FUN_004adfb0(int arg);
extern void __cdecl FUN_004938b0(int arg);

extern float g_007b220c;   /* 0x007b220c */
extern float g_00770168;   /* 0x00770168 */
extern float g_0076c5b0;   /* 0x0076c5b0 */
extern float g_00770164;   /* 0x00770164 */
extern float g_00770160;   /* 0x00770160 */

extern char g_007b2c88[];  /* 0x007b2c88 */
extern char g_007b2cdc[];  /* 0x007b2cdc */
extern char g_007b2d24[];  /* 0x007b2d24 */
extern char g_007b2d70[];  /* 0x007b2d70 */
extern char g_007b2dbc[];  /* 0x007b2dbc */

__declspec(naked) void FUN_0049dfd0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x228]
        mov     eax, 0x2
        cmp     ecx, eax
        jge     LE010
        test    bl, bl
        jz      LE225
        mov     dword ptr [esi + 0x228], eax
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    offset g_007b2c88
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      LE010
        int     3
LE010:
        xor     edx, edx
        mov     eax, 0x400
        div     dword ptr [esi + 0x238]
        cmp     dword ptr [esi + 0x228], eax
        jle     LE049
        test    bl, bl
        jz      LE225
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    offset g_007b2cdc
        mov     dword ptr [esi + 0x228], eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      LE049
        int     3
LE049:
        lea     edx, [ebp - 0x14]
        push    edx
        lea     eax, [ebp - 0x10]
        push    eax
        lea     ecx, [esi + 0xd0]
        call    FUN_004ad160
        fld     dword ptr [g_007b220c]
        fmul    dword ptr [g_00770168]
        fcomp   dword ptr [ebp - 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     LE0B7
        test    bl, bl
        jz      LE225
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    offset g_007b2d24
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      LE090
        int     3
LE090:
        push    0x3f800000
        lea     ecx, [esi + 0xd4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xe0]
        mov     byte ptr [esi + 0xf4], 0x0
        call    FUN_004adfb0
LE0B7:
        lea     edx, [ebp - 0x4]
        push    edx
        lea     eax, [ebp + 0x8]
        push    eax
        lea     ecx, [esi + 0x1c8]
        call    FUN_004ad160
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_0076c5b0]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x18], ecx
        fnstsw  ax
        test    ah, 0x41
        jnz     LE0E7
        mov     dword ptr [ebp - 0x18], 0x0
LE0E7:
        mov     edx, dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x8]
        push    eax
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     ecx, [esi + 0x1a0]
        mov     dword ptr [ebp - 0x1c], edx
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x8]
        fadd    dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_00770164]
        fnstsw  ax
        test    ah, 0x41
        jz      LE126
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x18]
        fcomp   dword ptr [g_00770160]
        fnstsw  ax
        test    ah, 0x1
        jz      LE168
LE126:
        test    bl, bl
        jz      LE225
        push    0x0
        lea     ecx, [esi + 0x1a4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x1b0]
        mov     byte ptr [esi + 0x1c4], 0x0
        call    FUN_004adfb0
        mov     edx, dword ptr [esi + 0x4]
        push    edx
        push    offset g_007b2d70
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      LE168
        int     3
LE168:
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [ebp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x1f8]
        call    FUN_004ad160
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [g_0076c5b0]
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x18], edx
        fnstsw  ax
        test    ah, 0x41
        jnz     LE198
        mov     dword ptr [ebp - 0x18], 0x0
LE198:
        mov     eax, dword ptr [ebp - 0x4]
        lea     ecx, [ebp - 0x8]
        push    ecx
        lea     edx, [ebp - 0xc]
        push    edx
        lea     ecx, [esi + 0x178]
        mov     dword ptr [ebp - 0x1c], eax
        call    FUN_004ad160
        fld     dword ptr [ebp - 0x8]
        fadd    dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_00770164]
        fnstsw  ax
        test    ah, 0x41
        jz      LE1D7
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x18]
        fcomp   dword ptr [g_00770160]
        fnstsw  ax
        test    ah, 0x1
        jz      LE215
LE1D7:
        test    bl, bl
        jz      LE225
        push    0x0
        lea     ecx, [esi + 0x17c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x188]
        mov     byte ptr [esi + 0x19c], 0x0
        call    FUN_004adfb0
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    offset g_007b2dbc
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      LE215
        int     3
LE215:
        push    ebx
        mov     ecx, esi
        call    FUN_004938b0
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
LE225:
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
