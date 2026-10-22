/*
 * FUN_004FE390 (78 B) -- MLR/Adept object destructor (__thiscall).
 * Restores vtable 0x776108, clears a back-pointer at [obj+0x128] if it
 * points to this, then tears down sub-objects via FUN_004179f0 /
 * FUN_00417980 / FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __stdcall FUN_004fe390(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x98]
        test    eax, eax
        push    edi
        mov     dword ptr [esi], 0x776108
        jz      L_4fe3c0
        mov     ecx, dword ptr [eax + 0x124]
        test    ecx, ecx
        jnz     L_4fe3c0
        cmp     dword ptr [eax + 0x128], esi
        jnz     L_4fe3c0
        mov     dword ptr [eax + 0x128], 0x0
L_4fe3c0:
        lea     edi, [esi + 0x90]
        mov     ecx, edi
        call    FUN_004179f0
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
