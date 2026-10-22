/*
 * FUN_5e015290 (186 B) — DirectDraw surface step/advance body.
 * Updates fixed-point + FPU interpolation state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5f0;      /* DAT_5e77a5f0 */
extern int g_5e77a5e4;      /* DAT_5e77a5e4 */
extern int g_5e77a5e8;      /* DAT_5e77a5e8 */
extern int g_5e77a5f4;      /* DAT_5e77a5f4 */
extern int g_5e77a5fc;      /* DAT_5e77a5fc */
extern int g_5e77a5f8;      /* DAT_5e77a5f8 */

extern float g_5e77a668;    /* DAT_5e77a668 */
extern float g_5e77a670;    /* DAT_5e77a670 */
extern float g_5e77a674;    /* DAT_5e77a674 */
extern float g_5e77a67c;    /* DAT_5e77a67c */
extern float g_5e77a630;    /* DAT_5e77a630 */
extern float g_5e77a638;    /* DAT_5e77a638 */
extern float g_5e77a66c;    /* DAT_5e77a66c */
extern float g_5e77a678;    /* DAT_5e77a678 */
extern float g_5e77a634;    /* DAT_5e77a634 */

__declspec(naked) void FUN_5e015290(void)
{
    __asm {
        mov     eax, dword ptr [g_5e77a5f0]
        mov     ecx, dword ptr [g_5e77a5e4]
        add     ecx, eax
        mov     eax, dword ptr [g_5e77a5e8]
        inc     eax
        mov     dword ptr [g_5e77a5e4], ecx
        mov     ecx, dword ptr [g_5e77a5f4]
        mov     dword ptr [g_5e77a5e8], eax
        mov     eax, dword ptr [g_5e77a5fc]
        add     eax, ecx
        mov     dword ptr [g_5e77a5fc], eax
        js      L_5313
        fld     dword ptr [g_5e77a668]
        fadd    dword ptr [g_5e77a670]
        mov     ecx, dword ptr [g_5e77a5e4]
        inc     ecx
        mov     dword ptr [g_5e77a5e4], ecx
        mov     ecx, dword ptr [g_5e77a5f8]
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a674]
        fadd    dword ptr [g_5e77a67c]
        sub     eax, ecx
        mov     dword ptr [g_5e77a5fc], eax
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a630]
        fadd    dword ptr [g_5e77a638]
        fstp    dword ptr [g_5e77a630]
        ret
    L_5313:
        fld     dword ptr [g_5e77a66c]
        fadd    dword ptr [g_5e77a668]
        fstp    dword ptr [g_5e77a668]
        fld     dword ptr [g_5e77a678]
        fadd    dword ptr [g_5e77a674]
        fstp    dword ptr [g_5e77a674]
        fld     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a630]
        fstp    dword ptr [g_5e77a630]
        ret
    }
}
