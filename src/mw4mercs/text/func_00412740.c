/*
 * FUN_00412740 (49 B) — __thiscall assignment from another string object.
 * Decrefs the current owned buffer at [this], then adopts the string
 * pointer stored at *param_1 (incrementing its refcount if non-null).
 * Returns `this` in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00412740(void)
{
    __asm {
        push    esi
        mov     esi, ecx
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
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     dword ptr [esi], eax
        jz      L2
        inc     byte ptr [eax - 1]
L2:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
