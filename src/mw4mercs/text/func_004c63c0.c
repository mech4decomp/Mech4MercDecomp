/*
 * FUN_004c63c0 (106 B) - MLR ElementRenderer teardown / refcount release.
 * Decrements refcounts on the three singleton objects (0x007dab24,
 * 0x007dab20, 0x007dab18), releasing them via virtual call when the count
 * hits zero, and nulls the globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007dab24;   /* DAT_007dab24 */
extern int g_007dab20;   /* DAT_007dab20 */
extern int g_007dab18;   /* DAT_007dab18 */

__declspec(naked) void FUN_004c63c0(void)
{
    __asm {
        mov     ecx, dword ptr [g_007dab24]
        dec     word ptr [ecx + 0x10]
        mov     ax, word ptr [ecx + 0x10]
        push    esi
        push    edi
        xor     edi, edi
        cmp     ax, di
        jnz     L63E1
        cmp     ecx, edi
        jz      L63E1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L63E1:
        mov     ecx, dword ptr [g_007dab20]
        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], di
        mov     dword ptr [g_007dab24], edi
        jnz     L6401
        cmp     ecx, edi
        jz      L6401
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L6401:
        mov     esi, dword ptr [g_007dab18]
        cmp     esi, edi
        mov     dword ptr [g_007dab20], edi
        jz      L6421
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L6421:
        mov     dword ptr [g_007dab18], edi
        pop     edi
        pop     esi
        ret
    }
}
