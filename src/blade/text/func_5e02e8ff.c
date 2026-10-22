/*
 * FUN_5e02e8ff (58 B) - linear search over an array of 12-byte records
 * (DAT_5e039484 records) for a matching first dword.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e039484;   /* DAT_5e039484 */

__declspec(naked) void FUN_5e02e8ff(void)
{
    __asm {
        mov     edx, dword ptr [esp+8]
        mov     ecx, dword ptr [g_5e039484]
        push    esi
        mov     esi, dword ptr [esp+8]
        cmp     dword ptr [edx], esi
        push    edi
        mov     eax, edx
        jz      L926
        lea     edi, [ecx+ecx*2]
        lea     edi, [edx+edi*4]
    L915:
        add     eax, 0xc
        cmp     eax, edi
        jnc     L926
        cmp     dword ptr [eax], esi
        jnz     L915
    L926:
        lea     ecx, [ecx+ecx*2]
        lea     ecx, [edx+ecx*4]
        cmp     eax, ecx
        jnc     L934
        cmp     dword ptr [eax], esi
        jz      L936
    L934:
        xor     eax, eax
    L936:
        pop     edi
        pop     esi
        ret
    }
}
