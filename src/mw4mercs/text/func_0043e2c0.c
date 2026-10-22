/*
 * FUN_0043e2c0 (88 B) — MLR mesh class factory/initializer. Creates a
 * "MLR_I_C_DT_TMesh" instance and stores it in a global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007b9854;
extern void *g_007b986c;
extern int g_007b9850;
extern char g_76e5fc[];
extern char g_76e5d8[];
extern char g_43e4d0;

extern void FUN_006f4710(void);
extern void *FUN_004084d0(unsigned int);
extern void FUN_004151c0(void);

__declspec(naked) void FUN_0043e2c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    offset g_76e5fc
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007b9854], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_e30c
        mov     ecx, dword ptr [g_007b986c]
        push    ecx
        push    offset g_76e5d8
        push    0x6c
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], offset g_43e4d0
        mov     dword ptr [g_007b9850], esi
        pop     esi
        ret
L_e30c:
        mov     dword ptr [g_007b9850], 0x0
        pop     esi
        ret
    }
}
