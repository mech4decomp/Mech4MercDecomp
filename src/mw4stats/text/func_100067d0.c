/*
 * FUN_100067d0 (33 B) - __fastcall (ECX = this). Sets vtable ptr,
 * then calls FUN_10006800 on the buffer at this[1] and frees it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021294; /* vtable ptr */
extern void *g_100210ec; /* IAT: free */
extern void __cdecl FUN_10006800(void);

__declspec(naked) void __cdecl FUN_100067d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 4]
        test    esi, esi
        mov     dword ptr [ecx], offset g_10021294
        jz      L_ef
        mov     ecx, esi
        call    FUN_10006800
        push    esi
        call    dword ptr [g_100210ec]
        add     esp, 0x4
    L_ef:
        pop     esi
        ret
    }
}
