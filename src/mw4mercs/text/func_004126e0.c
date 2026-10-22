/*
 * FUN_004126e0 (85 B) — __thiscall setter. Decrefs the existing owned buffer
 * at [this], then replaces it with a refcounted copy of the incoming string
 * arg (or null). Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87f0;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void *);

__declspec(naked) void FUN_004126e0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b87f0]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jnz     L2
        mov     dword ptr [esi], eax
        call    FUN_006f49a0
        pop     esi
        ret     4
L2:
        add     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     byte ptr [eax], 1
        inc     eax
        mov     dword ptr [esi], eax
        call    FUN_006f49a0
        pop     esi
        ret     4
    }
}
