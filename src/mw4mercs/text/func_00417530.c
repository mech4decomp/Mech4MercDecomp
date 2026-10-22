/*
 * FUN_00417530 (58 B) - __thiscall container element insert.
 * Gets a node from FUN_00416110, constructs a SafeChainLink via
 * FUN_00417430, links it into this[0x8]/[0xc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00416110(void);
extern void FUN_00417430(void);
extern int  g_007b8c1c;

__declspec(naked) void FUN_00417530(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b8c1c]
        call    FUN_00416110
        test    eax, eax
        jz      L_zero
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        push    0x0
        push    edx
        push    esi
        mov     ecx, eax
        call    FUN_00417430
        jmp     L_join
    L_zero:
        xor     eax, eax
    L_join:
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        mov     dword ptr [esi + 0xc], eax
        jnz     L_done
        mov     dword ptr [esi + 0x8], eax
    L_done:
        pop     esi
        ret     0x4
    }
}
