/*
 * FUN_00735b60 (115 B) - __fastcall bounds/validation check (ECX = param).
 *
 * Returns 0 (false) if:
 *   - global 0x00859f84 bit 0x20 set and param[0] != param[1], or
 *   - 0x00859fb8 != 0 and (param[0] > param[1]*0x00859fb8 or
 *     param[1] > param[0]*0x00859fb8), or
 *   - 0x00859fb0 != 0 and param[1] > 0x00859fb0, or
 *   - 0x00859fac != 0 and param[0] > 0x00859fac.
 * Otherwise returns 1.
 *
 * __fastcall (ECX = param), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00859f84;
extern int g_00859fb8;
extern int g_00859fb0;
extern int g_00859fac;

__declspec(naked) unsigned int __fastcall FUN_00735b60(void)
{
    __asm {
        test    byte ptr [g_00859f84], 0x20
        push    esi
        jz      label_735b77
        mov     ax, word ptr [ecx]
        cmp     ax, word ptr [ecx + 0x2]
        jz      label_735b77
        xor     al, al
        pop     esi
        ret
label_735b77:
        mov     esi, dword ptr [g_00859fb8]
        test    esi, esi
        jz      label_735ba2
        xor     edx, edx
        mov     dx, word ptr [ecx + 0x2]
        push    edi
        xor     eax, eax
        mov     ax, word ptr [ecx]
        mov     edi, edx
        imul    edi, esi
        cmp     eax, edi
        pop     edi
        ja      label_735b9e
        imul    eax, esi
        cmp     edx, eax
        jbe     label_735ba2
label_735b9e:
        xor     al, al
        pop     esi
        ret
label_735ba2:
        mov     eax, dword ptr [g_00859fb0]
        test    eax, eax
        jz      label_735bb9
        xor     edx, edx
        mov     dx, word ptr [ecx + 0x2]
        cmp     edx, eax
        jbe     label_735bb9
        xor     al, al
        pop     esi
        ret
label_735bb9:
        mov     eax, dword ptr [g_00859fac]
        test    eax, eax
        jz      label_735bcf
        xor     edx, edx
        mov     dx, word ptr [ecx]
        cmp     edx, eax
        jbe     label_735bcf
        xor     al, al
        pop     esi
        ret
label_735bcf:
        mov     al, 0x1
        pop     esi
        ret
    }
}
