/*
 * FUN_00423fc0 (175 B) — MLR static teardown. Frees the global render
 * objects allocated by FUN_00423e30 (bumpy-water material + pool
 * objects), nulling the globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *p);

extern int g_007b9644;
extern int g_007b9640;
extern int g_007b963c;
extern int g_007b9638;
extern int g_007b9634;

__declspec(naked) void FUN_00423fc0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b9644]
        test    esi, esi
        jz      L_db
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_db:
        mov     esi, dword ptr [g_007b9640]
        test    esi, esi
        mov     dword ptr [g_007b9644], 0
        jz      L_07
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_fe
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_fe:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_07:
        mov     esi, dword ptr [g_007b963c]
        test    esi, esi
        jz      L_29
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_20
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_20:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_29:
        mov     esi, dword ptr [g_007b9638]
        test    esi, esi
        jz      L_4b
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_42
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_42:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_4b:
        mov     esi, dword ptr [g_007b9634]
        test    esi, esi
        jz      L_6d
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_64
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_64:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_6d:
        pop     esi
        ret
    }
}
