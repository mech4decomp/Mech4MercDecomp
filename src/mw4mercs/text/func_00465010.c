/*
 * FUN_00465010 (88 B) — MLR_I_DeT_PMesh class factory/init.
 * Registers the class name, allocates 0x18 bytes, sets up the vtable
 * pointer at +0x14, stores the instance in g_007d993c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007d9940;
extern int g_007da5e4;
extern int g_007d993c;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00465010(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0
        push    0x76ef30
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007d9940], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_505c
        mov     ecx, dword ptr [g_007da5e4]
        push    ecx
        push    0x76ef0c
        push    0x60
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x465290
        mov     dword ptr [g_007d993c], esi
        pop     esi
        ret
L_505c:
        mov     dword ptr [g_007d993c], 0
        pop     esi
        ret
    }
}
