/*
 * FUN_00461740 (88 B) — MLR_I_C_DeT_PMesh class factory/init.
 * Calls FUN_006f4710 to register the class name, allocates 0x18 bytes,
 * sets up the vtable pointer at +0x14, stores the instance in g_007d9928.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007d992c;
extern int g_007d993c;
extern int g_007d9928;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00461740(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0
        push    0x76ee28
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007d992c], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_178c
        mov     ecx, dword ptr [g_007d993c]
        push    ecx
        push    0x76ee04
        push    0x61
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x461910
        mov     dword ptr [g_007d9928], esi
        pop     esi
        ret
L_178c:
        mov     dword ptr [g_007d9928], 0
        pop     esi
        ret
    }
}
