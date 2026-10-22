/*
 * FUN_00708B40 (218 B) - String tokenizer / quote-stripper.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * Searches for param_1 within the string at 0x859078 via an IAT call
 * (0x76B298). If not found, returns 1. Otherwise parses the matched
 * region: strips leading spaces, extracts a quoted token into the buffer
 * at 0x858F78, then reverses/copies a segment between 0x859078 and
 * 0x859178. Returns the token buffer pointer (or 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_859078[];
extern char g_859177;
extern char g_859178;
extern char g_858f78[];
extern void *g_76b298;

__declspec(naked) int __stdcall FUN_00708b40(char *param_1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        push    offset g_859078
        call    dword ptr [g_76b298]
        mov     edx, eax
        add     esp, 8
        test    edx, edx
        jnz     loc_8b60
        pop     edi
        pop     esi
        ret     4
loc_8b60:
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     esi, edx
        sub     esi, offset g_859078
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [g_858f78], al
        mov     al, byte ptr [ecx + edx*1]
        cmp     al, 0x22
        mov     edi, 1
        jz      loc_8b92
        cmp     al, 0x20
        jz      loc_8b96
        test    al, al
        jz      loc_8b92
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
loc_8b92:
        cmp     al, 0x20
        jnz     loc_8b9f
loc_8b96:
        mov     al, byte ptr [ecx + edx*1 + 1]
        inc     ecx
        cmp     al, 0x20
        jz      loc_8b96
loc_8b9f:
        cmp     byte ptr [ecx + edx*1], 0x22
        jnz     loc_8bd3
        mov     al, byte ptr [ecx + edx*1 + 1]
        xor     edi, edi
        inc     ecx
loc_8bac:
        mov     byte ptr [edi + g_858f78], al
        mov     al, byte ptr [ecx + edx*1 + 1]
        inc     edi
        inc     ecx
        cmp     al, 0x22
        jz      loc_8bc0
        test    al, al
        jnz     loc_8bac
loc_8bc0:
        cmp     byte ptr [ecx + edx*1], 0x22
        jnz     loc_8bce
        mov     byte ptr [edi + g_858f78], 0
        inc     ecx
loc_8bce:
        mov     edi, offset g_858f78
loc_8bd3:
        cmp     byte ptr [ecx + edx*1], 0x20
        jnz     loc_8be2
loc_8bd9:
        mov     al, byte ptr [ecx + edx*1 + 1]
        inc     ecx
        cmp     al, 0x20
        jz      loc_8bd9
loc_8be2:
        mov     al, byte ptr [ecx + esi*1 + g_859177]
        test    al, al
        jz      loc_8c13
loc_8bed:
        mov     al, byte ptr [esi + ecx*1 + g_859178]
        mov     dl, byte ptr [ecx + esi*1 + g_859078]
        mov     byte ptr [esi + g_859178], al
        mov     al, byte ptr [ecx + esi*1 + g_859178]
        mov     byte ptr [esi + g_859078], dl
        inc     esi
        test    al, al
        jnz     loc_8bed
loc_8c13:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}
