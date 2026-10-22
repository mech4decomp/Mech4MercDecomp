/*
 * FUN_5e016ee0 (186 B) — accumulator update (variant of FUN_5e016960).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5f0;   /* DAT_5e77a5f0 */
extern int g_5e77a5e4;   /* DAT_5e77a5e4 */
extern int g_5e77a5e8;   /* DAT_5e77a5e8 */
extern int g_5e77a5f4;   /* DAT_5e77a5f4 */
extern int g_5e77a5fc;   /* DAT_5e77a5fc */
extern float g_5e77a63c; /* DAT_5e77a63c */
extern float g_5e77a644; /* DAT_5e77a644 */
extern int g_5e77a5f8;   /* DAT_5e77a5f8 */
extern float g_5e77a650; /* DAT_5e77a650 */
extern float g_5e77a658; /* DAT_5e77a658 */
extern float g_5e77a65c; /* DAT_5e77a65c */
extern float g_5e77a664; /* DAT_5e77a664 */
extern float g_5e77a640; /* DAT_5e77a640 */
extern float g_5e77a654; /* DAT_5e77a654 */
extern float g_5e77a660; /* DAT_5e77a660 */

__declspec(naked) void FUN_5e016ee0(void)
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
        js      L1
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
        ret
    L1:
        fld     dword ptr [g_5e77a640]
        fadd    dword ptr [g_5e77a63c]
        fstp    dword ptr [g_5e77a63c]
        fld     dword ptr [g_5e77a654]
        fadd    dword ptr [g_5e77a650]
        fstp    dword ptr [g_5e77a650]
        fld     dword ptr [g_5e77a660]
        fadd    dword ptr [g_5e77a65c]
        fstp    dword ptr [g_5e77a65c]
        ret
    }
}
