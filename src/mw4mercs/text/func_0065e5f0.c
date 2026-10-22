/*
 * FUN_0065e5f0 (43 B) — reference-counted singleton release. Decrements
 * the global object's refcount; when it hits 0, destroys the object
 * (FUN_00661cf0) and frees it (FUN_004084e0), then nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00661cf0(void);
extern void __cdecl FUN_004084e0(void);

extern int g_0080da70;   /* DAT_0080da70 */

__declspec(naked) void FUN_0065e5f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_0080da70]
        dec     dword ptr [esi]
        jnz     L619
        test    esi, esi
        jz      L60F
        mov     ecx, esi
        call    FUN_00661cf0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L60F:
        mov     dword ptr [g_0080da70], 0x0
L619:
        pop     esi
        ret
    }
}
