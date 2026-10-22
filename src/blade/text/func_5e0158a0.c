/*
 * FUN_5e0158a0 (222 B) — DirectDraw surface step/advance body (4-channel).
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

extern float g_5e77a63c;    /* DAT_5e77a63c */
extern float g_5e77a644;    /* DAT_5e77a644 */
extern float g_5e77a650;    /* DAT_5e77a650 */
extern float g_5e77a658;    /* DAT_5e77a658 */
extern float g_5e77a65c;    /* DAT_5e77a65c */
extern float g_5e77a664;    /* DAT_5e77a664 */
extern float g_5e77a630;    /* DAT_5e77a630 */
extern float g_5e77a638;    /* DAT_5e77a638 */
extern float g_5e77a640;    /* DAT_5e77a640 */
extern float g_5e77a654;    /* DAT_5e77a654 */
extern float g_5e77a660;    /* DAT_5e77a660 */
extern float g_5e77a634;    /* DAT_5e77a634 */

__declspec(naked) void FUN_5e0158a0(void)
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
        js      L_5935
        fld     dword ptr [g_5e77a63c]
        fadd    dword ptr [g_5e77a644]
        mov     ecx, dword ptr [g_5e77a5e4]
        inc     ecx
        mov     dword ptr [g_5e77a5e4], ecx
        mov     ecx, dword ptr [g_5e77a5f8]
        fstp    dword ptr [g_5e77a63c]
        fld     dword ptr [g_5e77a650]
        fadd    dword ptr [g_5e77a658]
        sub     eax, ecx
        mov     dword ptr [g_5e77a5fc], eax
        fstp    dword ptr [g_5e77a650]
        fld     dword ptr [g_5e77a65c]
        fadd    dword ptr [g_5e77a664]
        fstp    dword ptr [g_5e77a65c]
        fld     dword ptr [g_5e77a630]
        fadd    dword ptr [g_5e77a638]
        fstp    dword ptr [g_5e77a630]
        ret
    L_5935:
        fld     dword ptr [g_5e77a640]
        fadd    dword ptr [g_5e77a63c]
        fstp    dword ptr [g_5e77a63c]
        fld     dword ptr [g_5e77a654]
        fadd    dword ptr [g_5e77a650]
        fstp    dword ptr [g_5e77a650]
        fld     dword ptr [g_5e77a660]
        fadd    dword ptr [g_5e77a65c]
        fstp    dword ptr [g_5e77a65c]
        fld     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a630]
        fstp    dword ptr [g_5e77a630]
        ret
    }
}
