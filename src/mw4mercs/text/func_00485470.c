/*
 * FUN_00485470 (175 B) — MLR TriangleCloud teardown. Frees each growable
 * buffer descriptor (0x7da70c/08/04/00) and its backing allocation, then
 * destroys the cloud object (0x7da710) and zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da70c;
extern int g_007da708;
extern int g_007da704;
extern int g_007da700;
extern int g_007da710;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_00485470(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da70c]
        test    esi, esi
        jz      L_93
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_8a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_8a:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_93:
        mov     esi, dword ptr [g_007da708]
        test    esi, esi
        jz      L_b5
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_ac
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_ac:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_b5:
        mov     esi, dword ptr [g_007da704]
        test    esi, esi
        jz      L_d7
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_ce
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_ce:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_d7:
        mov     esi, dword ptr [g_007da700]
        test    esi, esi
        jz      L_f9
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_f0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_f0:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_f9:
        mov     esi, dword ptr [g_007da710]
        test    esi, esi
        jz      L_113
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_113:
        mov     dword ptr [g_007da710], 0x0
        pop     esi
        ret
    }
}
