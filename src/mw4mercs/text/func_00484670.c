/*
 * FUN_00484670 (175 B) — MLR NGonCloud teardown. Frees each growable buffer
 * descriptor (0x7da6ec/e8/e4/e0) and its backing allocation, then destroys
 * the cloud object (0x7da6f0) and zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6ec;
extern int g_007da6e8;
extern int g_007da6e4;
extern int g_007da6e0;
extern int g_007da6f0;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_00484670(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da6ec]
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
        mov     esi, dword ptr [g_007da6e8]
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
        mov     esi, dword ptr [g_007da6e4]
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
        mov     esi, dword ptr [g_007da6e0]
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
        mov     esi, dword ptr [g_007da6f0]
        test    esi, esi
        jz      L_113
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_113:
        mov     dword ptr [g_007da6f0], 0x0
        pop     esi
        ret
    }
}
