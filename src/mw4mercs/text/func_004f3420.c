/*
 * FUN_004f3420 (65 B) — MLR/Adept component-list build helper (__thiscall,
 * RET 0x8, 2 params). Walks a linked list at +0x24, calling a virtual
 * method on each non-null node, then stores the two params at +0x1c/+0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004f3420(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x24]
        test    esi, esi
        jz      L343B
L3427:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L344E
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc]
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4) */
        __emit 0xEC
L343B:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x1c], ecx
        mov     dword ptr [edi + 0x20], edx
        pop     edi
        pop     esi
        ret     0x8
L344E:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        pop     esi
        ret     0x8
    }
}
