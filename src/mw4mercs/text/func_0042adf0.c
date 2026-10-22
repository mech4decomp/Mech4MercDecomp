/*
 * FUN_0042adf0 (43 B) — __thiscall MLRProjectLight destructor.
 * Sets vtable 0x76e0d8, decrements the refcount of the light-map
 * object (freeing it via virtual call when it hits 0), then calls
 * the base destructor FUN_00482150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00482150(void);

__declspec(naked) void FUN_0042adf0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0xa8]
        test    ecx, ecx
        mov     dword ptr [esi], 0x76e0d8
        jz      L_base
        dec     dword ptr [ecx+0x8]
        jnz     L_base
        test    ecx, ecx
        jz      L_base
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_base:
        mov     ecx, esi
        call    FUN_00482150
        pop     esi
        ret
    }
}
