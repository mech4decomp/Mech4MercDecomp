/*
 * FUN_00417600 (58 B) - __thiscall container element insert (before a
 * given element). Gets a node from FUN_00416110, constructs a
 * SafeChainLink via FUN_00417430, updates this[0x8] if it pointed at
 * the given element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00416110(void);
extern void FUN_00417430(void);
extern int  g_007b8c1c;

__declspec(naked) void FUN_00417600(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b8c1c]
        push    edi
        call    FUN_00416110
        test    eax, eax
        mov     edi, dword ptr [esp + 0x10]
        jz      L_zero
        mov     ecx, dword ptr [edi + 0x14]
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        push    edx
        push    esi
        mov     ecx, eax
        call    FUN_00417430
        jmp     L_join
    L_zero:
        xor     eax, eax
    L_join:
        cmp     dword ptr [esi + 0x8], edi
        jnz     L_done
        mov     dword ptr [esi + 0x8], eax
    L_done:
        pop     edi
        pop     esi
        ret     0x8
    }
}
