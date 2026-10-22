/*
 * FUN_5e018050 (378 B) — accumulator update with FPU.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5f0;   /* DAT_5e77a5f0 */
extern int g_5e77a5e4;   /* DAT_5e77a5e4 */
extern int g_5e77a5e8;   /* DAT_5e77a5e8 */
extern int g_5e77a5fc;   /* DAT_5e77a5fc */
extern int g_5e77a5f4;   /* DAT_5e77a5f4 */
extern int g_5e77a5f8;   /* DAT_5e77a5f8 */
extern int g_5e77a614;   /* DAT_5e77a614 */
extern int g_5e77a60c;   /* DAT_5e77a60c */
extern int g_5e77a580;   /* DAT_5e77a580 */
extern int g_5e77a620;   /* DAT_5e77a620 */
extern int g_5e77a618;   /* DAT_5e77a618 */
extern int g_5e77a624;   /* DAT_5e77a624 */
extern int g_5e77a62c;   /* DAT_5e77a62c */
extern int g_5e77a608;   /* DAT_5e77a608 */
extern int g_5e77a600;   /* DAT_5e77a600 */
extern int g_5e77a610;   /* DAT_5e77a610 */
extern int g_5e77a61c;   /* DAT_5e77a61c */
extern int g_5e77a628;   /* DAT_5e77a628 */
extern int g_5e77a604;   /* DAT_5e77a604 */
extern float g_5e77a668; /* DAT_5e77a668 */
extern float g_5e77a670; /* DAT_5e77a670 */
extern float g_5e77a674; /* DAT_5e77a674 */
extern float g_5e77a67c; /* DAT_5e77a67c */
extern float g_5e77a630; /* DAT_5e77a630 */
extern float g_5e77a638; /* DAT_5e77a638 */
extern float g_5e77a66c; /* DAT_5e77a66c */
extern float g_5e77a678; /* DAT_5e77a678 */
extern float g_5e77a634; /* DAT_5e77a634 */

__declspec(naked) void FUN_5e018050(void)
{
    __asm {
        mov     eax, dword ptr [g_5e77a5f0]
        mov     ecx, dword ptr [g_5e77a5e4]
        mov     edx, dword ptr [g_5e77a5e8]
        add     ecx, eax
        mov     eax, dword ptr [g_5e77a5fc]
        mov     dword ptr [g_5e77a5e4], ecx
        mov     ecx, dword ptr [g_5e77a5f4]
        inc     edx
        add     eax, ecx
        mov     dword ptr [g_5e77a5e8], edx
        mov     dword ptr [g_5e77a5fc], eax
        js      L_18138
        fld     dword ptr [g_5e77a668]
        fadd    dword ptr [g_5e77a670]
        mov     edx, dword ptr [g_5e77a5e4]
        mov     ecx, dword ptr [g_5e77a5f8]
        inc     edx
        sub     eax, ecx
        mov     ecx, dword ptr [g_5e77a614]
        mov     dword ptr [g_5e77a5e4], edx
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a674]
        fadd    dword ptr [g_5e77a67c]
        mov     edx, dword ptr [g_5e77a60c]
        mov     dword ptr [g_5e77a5fc], eax
        mov     al, byte ptr [g_5e77a580]
        add     edx, ecx
        test    al, 0x2
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a630]
        fadd    dword ptr [g_5e77a638]
        mov     dword ptr [g_5e77a60c], edx
        fstp    dword ptr [g_5e77a630]
        jnz     L_1811d
        mov     edx, dword ptr [g_5e77a620]
        mov     ecx, dword ptr [g_5e77a618]
        add     ecx, edx
        mov     edx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], ecx
        mov     ecx, dword ptr [g_5e77a62c]
        add     edx, ecx
        mov     dword ptr [g_5e77a624], edx
    L_1811d:
        test    al, 0x10
        jz      L_181c9
        mov     edx, dword ptr [g_5e77a608]
        mov     eax, dword ptr [g_5e77a600]
        add     eax, edx
        mov     dword ptr [g_5e77a600], eax
        ret
    L_18138:
        fld     dword ptr [g_5e77a66c]
        fadd    dword ptr [g_5e77a668]
        mov     eax, dword ptr [g_5e77a610]
        mov     edx, dword ptr [g_5e77a60c]
        add     edx, eax
        mov     al, byte ptr [g_5e77a580]
        test    al, 0x2
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a678]
        fadd    dword ptr [g_5e77a674]
        mov     dword ptr [g_5e77a60c], edx
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a630]
        fstp    dword ptr [g_5e77a630]
        jnz     L_181b2
        mov     ecx, dword ptr [g_5e77a61c]
        mov     edx, dword ptr [g_5e77a618]
        add     edx, ecx
        mov     ecx, dword ptr [g_5e77a624]
        mov     dword ptr [g_5e77a618], edx
        mov     edx, dword ptr [g_5e77a628]
        add     ecx, edx
        mov     dword ptr [g_5e77a624], ecx
    L_181b2:
        test    al, 0x10
        jz      L_181c9
        mov     eax, dword ptr [g_5e77a604]
        mov     ecx, dword ptr [g_5e77a600]
        add     ecx, eax
        mov     dword ptr [g_5e77a600], ecx
    L_181c9:
        ret
    }
}
