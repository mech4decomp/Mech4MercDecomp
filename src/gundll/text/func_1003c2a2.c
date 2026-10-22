/*
 * FUN_1003c2a2 (58 B) - __cdecl. Linear search over a stride-3
 * (12-byte) element array starting at param_2 for an element equal
 * to param_1, bounded by param_2 + DAT_10051e64*3 elements. Returns
 * the matching element pointer, else 0.
 *
 * CFLAGS: /O1
 */

extern int g_10051e64;

__declspec(naked) void __cdecl FUN_1003c2a2(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [g_10051e64]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     dword ptr [edx], esi
        push    edi
        mov     eax, edx
        jz      L_c9
        lea     edi, [ecx + ecx*2]
        lea     edi, [edx + edi*4]
    L_be:
        add     eax, 0xc
        cmp     eax, edi
        jnc     L_c9
        cmp     dword ptr [eax], esi
        jnz     L_be
    L_c9:
        lea     ecx, [ecx + ecx*2]
        lea     ecx, [edx + ecx*4]
        cmp     eax, ecx
        jnc     L_d7
        cmp     dword ptr [eax], esi
        jz      L_d9
    L_d7:
        xor     eax, eax
    L_d9:
        pop     edi
        pop     esi
        ret
    }
}
