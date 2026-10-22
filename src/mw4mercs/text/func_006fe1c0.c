/*
 * FUN_006fe1c0 (229 B) — String-pair copy + free + array shift.
 *
 * Copies two strings from a global object (DAT_00856860) into the two
 * output params, frees the source buffers, shifts an array, and returns 1.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856860;
extern void *g_76b2d0;   /* IAT: free */

__declspec(naked) int __stdcall FUN_006fe1c0(void *param_1, void *param_2)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_856860]
        test    ebx, ebx
        jz      loc_6fe29f
        mov     eax, dword ptr [ebx + 0x2c]
        test    eax, eax
        jle     loc_6fe29f
        mov     edx, dword ptr [ebx + 0x30]
        or      ecx, 0xffffffff
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x10]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebx + 0xfd0]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [g_76b2d0]
        push    edx
        call    esi
        mov     ecx, dword ptr [g_856860]
        mov     edx, dword ptr [ecx + 0xfd0]
        push    edx
        call    esi
        mov     ecx, dword ptr [g_856860]
        mov     eax, dword ptr [ecx + 0x2c]
        mov     edx, 1
        add     esp, 8
        cmp     eax, edx
        jle     loc_6fe274
        lea     eax, [ecx + 0xfd0]
loc_6fe258:
        mov     esi, dword ptr [eax + 0x4]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [eax + 0xfffff064]
        mov     dword ptr [eax + 0xfffff060], esi
        mov     esi, dword ptr [ecx + 0x2c]
        inc     edx
        add     eax, 4
        cmp     edx, esi
        jl      loc_6fe258
loc_6fe274:
        mov     eax, dword ptr [ecx + 0x2c]
        mov     dword ptr [ecx + eax*4 + 0x2c], 0
        mov     edx, dword ptr [ecx + 0x2c]
        mov     dword ptr [ecx + edx*4 + 0xfcc], 0
        mov     eax, dword ptr [ecx + 0x2c]
        pop     edi
        dec     eax
        pop     esi
        mov     dword ptr [ecx + 0x2c], eax
        mov     eax, 1
        pop     ebx
        ret     8
loc_6fe29f:
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
