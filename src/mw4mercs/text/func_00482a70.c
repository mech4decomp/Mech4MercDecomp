/*
 * FUN_00482a70 (209 B) — MLR teardown. Frees each growable buffer descriptor
 * (0x7da6cc/c8/c4/c0/bc) and its backing allocation, then destroys the
 * card-cloud object (0x7da6d0) and zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6cc;
extern int g_007da6c8;
extern int g_007da6c4;
extern int g_007da6c0;
extern int g_007da6bc;
extern int g_007da6d0;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_00482a70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da6cc]
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
        mov     esi, dword ptr [g_007da6c8]
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
        mov     esi, dword ptr [g_007da6c4]
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
        mov     esi, dword ptr [g_007da6c0]
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
        mov     esi, dword ptr [g_007da6bc]
        test    esi, esi
        jz      L_11b
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_112
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_112:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_11b:
        mov     esi, dword ptr [g_007da6d0]
        test    esi, esi
        jz      L_135
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_135:
        mov     dword ptr [g_007da6d0], 0x0
        pop     esi
        ret
    }
}
