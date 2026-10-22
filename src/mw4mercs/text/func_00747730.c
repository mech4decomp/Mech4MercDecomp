/*
 * FUN_00747730 (127 B) — __cdecl teardown routine.
 *
 * If global 0x8b2868 is set: drains the list at 0x8b287c via
 * FUN_00753f80, calls FUN_007492a0, conditionally calls
 * FUN_0075c060/FUN_00735e30, frees 0x8b2874/0x8b286c via
 * FUN_006f4230, clears several globals and 0x8b2868.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00753f80(void);
extern void __cdecl FUN_007492a0(void);
extern void __cdecl FUN_0075c060(void);
extern void __cdecl FUN_00735e30(void);
extern void __cdecl FUN_006f4230(void);

extern char g_8b2868;
extern int g_8b287c;
extern int g_8b2838;
extern int g_8b2804;
extern int g_8b2874;
extern int g_8b286c;
extern int g_8b28d4;
extern int g_8b28d8;
extern int g_8b28dc;

__declspec(naked) void __cdecl FUN_00747730(void)
{
    __asm {
        mov     al, byte ptr [g_8b2868]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        jz      L_7477ad
        mov     ecx, dword ptr [g_8b287c]
        cmp     ecx, ebx
        jz      L_747755
L_747746:
        call    FUN_00753f80
        mov     ecx, dword ptr [g_8b287c]
        cmp     ecx, ebx
        jnz     L_747746
L_747755:
        call    FUN_007492a0
        cmp     dword ptr [g_8b2838], ebx
        jz      L_74776c
        mov     ecx, 0x8b2830
        call    FUN_0075c060
L_74776c:
        cmp     dword ptr [g_8b2804], ebx
        jz      L_74777e
        mov     ecx, 0x8b27f8
        call    FUN_00735e30
L_74777e:
        mov     eax, dword ptr [g_8b2874]
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_8b286c]
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_8b28d4], ebx
        mov     dword ptr [g_8b28d8], ebx
        mov     dword ptr [g_8b28dc], ebx
        mov     byte ptr [g_8b2868], bl
L_7477ad:
        pop     ebx
        ret
    }
}
