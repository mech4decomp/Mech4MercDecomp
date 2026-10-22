/*
 * FUN_0065e590 (87 B) — reference-counted singleton getter. If the global
 * pointer is null, allocates a 0x14-byte object (FUN_004084d0), constructs
 * it via FUN_0065e630, stores it, then bumps its refcount. Otherwise just
 * bumps the refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0065e630(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_0080da70;   /* DAT_0080da70 */
extern int g_007dd234;   /* DAT_007dd234 */

__declspec(naked) void FUN_0065e590(void)
{
    __asm {
        mov     eax, dword ptr [g_0080da70]
        test    eax, eax
        jnz     L5E4
        mov     eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L5D0
        mov     ecx, dword ptr [esp + 0x4]
        push    ecx
        mov     ecx, eax
        call    FUN_0065e630
        mov     dword ptr [g_0080da70], eax
        call    FUN_006f49a0
        mov     eax, dword ptr [g_0080da70]
        inc     dword ptr [eax]
        ret
L5D0:
        mov     dword ptr [g_0080da70], 0x0
        call    FUN_006f49a0
        mov     eax, dword ptr [g_0080da70]
L5E4:
        inc     dword ptr [eax]
        ret
    }
}
