/*
 * FUN_0046bc60 (88 B) — MLR (MidLevelRenderer) graphics library.
 * Class factory/init for MLR_I_C_DT_PMesh: registers the class name,
 * allocates 0x18 bytes, sets up the vtable pointer at +0x14, stores the
 * instance in g_007d9968.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007d996c;
extern int g_007d9984;
extern int g_007d9968;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0046bc60(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    0x76f104
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007d996c], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_bcac
        mov     ecx, dword ptr [g_007d9984]
        push    ecx
        push    0x76f0e0
        push    0x5b
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x46be30
        mov     dword ptr [g_007d9968], esi
        pop     esi
        ret
L_bcac:
        mov     dword ptr [g_007d9968], 0x0
        pop     esi
        ret
    }
}
