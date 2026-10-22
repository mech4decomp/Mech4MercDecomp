/*
 * FUN_005A7770 (77 B) — allocates and constructs an object, returning a
 * handle; wraps the result in a lock/unlock pair.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dd234;
extern int g_7f2078;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005a7820(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005A7770(void)
{
    __asm {
        mov     eax, dword ptr [g_7dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x198
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_77b2
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+8]
        push    0
        push    ecx
        mov     ecx, dword ptr [g_7f2078]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_005a7820
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    L_77b2:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
