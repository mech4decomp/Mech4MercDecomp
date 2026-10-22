/*
 * FUN_5e013b50 (114 B) — DirectDraw caps/format step update.
 *
 * __cdecl, no params. Updates global caps state + FPU accumulators.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5f0;
extern int g_5e77a5e4;
extern int g_5e77a5e8;
extern int g_5e77a5f4;
extern int g_5e77a5fc;
extern int g_5e77a5f8;
extern float g_5e77a630;
extern float g_5e77a638;
extern float g_5e77a634;

__declspec(naked) void __cdecl FUN_5e013b50(void)
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
        js      L_13baf
        mov     ecx, dword ptr [g_5e77a5e4]
        fld     dword ptr [g_5e77a630]
        fadd    dword ptr [g_5e77a638]
        inc     ecx
        mov     dword ptr [g_5e77a5e4], ecx
        mov     ecx, dword ptr [g_5e77a5f8]
        sub     eax, ecx
        fstp    dword ptr [g_5e77a630]
        mov     dword ptr [g_5e77a5fc], eax
        ret
    L_13baf:
        fld     dword ptr [g_5e77a634]
        fadd    dword ptr [g_5e77a630]
        fstp    dword ptr [g_5e77a630]
        ret
    }
}
