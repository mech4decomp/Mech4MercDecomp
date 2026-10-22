/*
 * FUN_0072b200 (47 B) — __stdcall, RET 0xc.
 *
 * If g_8825d4 is non-zero, calls
 *   FUN_0072b270(p1, p2+1, p1+2, p2-1+p3, g_881710).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8825d4;
extern int g_881710;
extern void __cdecl FUN_0072b270(int, int, int, int, int);

__declspec(naked) void __stdcall FUN_0072b200(int p1, int p2, int p3)
{
    __asm {
        mov     al, byte ptr [g_8825d4]
        test    al, al
        jz      L_ret
        mov     eax, dword ptr [g_881710]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        lea     edx, [eax + ecx - 1]
        mov     ecx, dword ptr [esp + 0x8]
        push    edx
        lea     edx, [ecx + 2]
        push    edx
        inc     eax
        push    eax
        push    ecx
        call    FUN_0072b270
L_ret:
        ret     0xc
    }
}
