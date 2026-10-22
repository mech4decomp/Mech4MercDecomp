/*
 * FUN_00701510 (195 B) - Wide-char conversion + virtual dispatch helper.
 *
 * If global 0x856870 is non-null and its +0xC byte is non-zero, converts
 * two ANSI strings (param_1, param_2) to wide strings via mbstowcs, calls
 * a virtual method (vtable[0x14]) on the object at *(0x856870+8) with
 * (object, wstr1, wstr2, wstr1, wstr2, 0), frees the wide strings, and
 * sets global 0x85686C to 1 on success (returns 0) or 4 on failure
 * (returns -1). Returns -1 if the guard globals are zero.
 *
 * __stdcall, RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856870;
extern int g_85686c;
extern void *g_76b294;   /* malloc IAT */
extern void *g_76b3e8;   /* mbstowcs IAT */
extern void *g_76b2d0;   /* free IAT */

__declspec(naked) int __stdcall FUN_00701510(char *param_1, char *param_2)
{
    __asm {
        mov     eax, dword ptr [g_856870]
        test    eax, eax
        jz      loc_15be
        mov     cl, byte ptr [eax + 0xc]
        test    cl, cl
        jz      loc_15be
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        push    esi
        push    edi
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     edi, ebp
        repne   scasb
        lea     edi, [edx + 1]
        not     ecx
        lea     eax, [edi + edi*1]
        dec     ecx
        push    eax
        mov     dword ptr [esp + 0x18], ecx
        call    dword ptr [g_76b294]
        push    edi
        mov     esi, eax
        push    ebx
        push    esi
        call    dword ptr [g_76b3e8]
        mov     ecx, dword ptr [esp + 0x24]
        lea     ebx, [ecx + 1]
        lea     edx, [ebx + ebx*1]
        push    edx
        call    dword ptr [g_76b294]
        push    ebx
        mov     edi, eax
        push    ebp
        push    edi
        call    dword ptr [g_76b3e8]
        mov     eax, dword ptr [g_856870]
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [eax]
        add     esp, 0x20
        push    0
        push    edi
        push    esi
        push    edi
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        push    esi
        mov     esi, dword ptr [g_76b2d0]
        mov     ebx, eax
        call    esi
        push    edi
        call    esi
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebp
        test    ebx, ebx
        pop     ebx
        jge     loc_15c4
        mov     dword ptr [g_85686c], 4
loc_15be:
        or      eax, 0xffffffff
        ret     8
loc_15c4:
        mov     dword ptr [g_85686c], 1
        xor     eax, eax
        ret     8
    }
}
