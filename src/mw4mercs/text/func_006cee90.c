/*
 * FUN_006cee90 (163 B) — Compute a texture buffer size from a format code
 * (value & 7) via a 5-entry jump table; default path asserts on an unknown
 * format string.
 *
 * __fastcall (ECX = this). Returns computed size in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(void *str);
extern int g_jt_6cef34;   /* jump table base 0x006cef34 (data outside fn range) */

__declspec(naked) int __fastcall FUN_006cee90(int param_1)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x24]
        and     eax, 0x7
        push    esi
        xor     esi, esi
        dec     eax
        cmp     eax, 0x4
        ja      L_6cef1d
        jmp     dword ptr [eax*4 + g_jt_6cef34]
    L_6ceea6:
        mov     edx, dword ptr [ecx + 0x14]
        mov     esi, dword ptr [ecx + 0x10]
        push    ebx
        push    edi
        mov     eax, esi
        sar     eax, 0x2
        mov     edi, edx
        sar     edi, 0x2
        add     edi, 0x2
        add     eax, 0x2
        imul    eax, edi
        mov     edi, esi
        sar     edi, 0x1
        mov     ebx, edx
        sar     ebx, 0x1
        add     edi, 0x2
        add     ebx, 0x2
        imul    edi, ebx
        add     esi, 0x2
        add     edx, 0x2
        imul    esi, edx
        add     eax, edi
        add     eax, esi
        imul    eax, dword ptr [ecx + 0x20]
        pop     edi
        pop     ebx
        mov     dword ptr [ecx + 0x2c], eax
        pop     esi
        ret
    L_6ceeea:
        mov     eax, dword ptr [ecx + 0x14]
        mov     edx, dword ptr [ecx + 0x10]
        add     eax, 0x2
        add     edx, 0x2
        imul    eax, edx
        imul    eax, dword ptr [ecx + 0x20]
        mov     dword ptr [ecx + 0x2c], eax
        pop     esi
        ret
    L_6cef02:
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ecx + 0x14]
        sar     eax, 0x3
        add     eax, 0x2
        add     edx, 0x2
        imul    eax, edx
        imul    eax, dword ptr [ecx + 0x20]
        mov     dword ptr [ecx + 0x2c], eax
        pop     esi
        ret
    L_6cef1d:
        push    0x79e7d4
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_6cef2f
        int     3
    L_6cef2f:
        mov     eax, esi
        pop     esi
        ret
    }
}
