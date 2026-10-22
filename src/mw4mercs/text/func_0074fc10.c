/*
 * FUN_0074FC10 (229 B) — Debug string builder. Builds a description string
 * into the global buffer DAT_008b9f94 based on param_1 (0 = "Whole Vieport",
 * 1 = "%d,%d to %d,%d" rect, else "%d Rectangles"), then appends
 * " Background" (param_3&1) and " ZBuffer" (param_3&2).
 *
 * __stdcall, RET 0xC (3 dword params). Returns pointer to DAT_008b9f94.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_7aca54[];   /* "%d Rectangles" */
extern char g_str_7a3d00[];   /* "%d,%d to %d,%d" */
extern char g_str_7aca44[];   /* "Whole Vieport" */
extern char g_str_7aca38[];   /* " Background" */
extern char g_str_7aca2c[];   /* " ZBuffer" */
extern char g_buf_8b9f94[];   /* DAT_008b9f94 global buffer */
extern int (__stdcall *g_wsprintfA)(char *, const char *, ...); /* IAT 0x76b4f8 */

__declspec(naked) char * __stdcall FUN_0074FC10(int param_1, void *param_2, unsigned char param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     eax, 0
        push    esi
        push    edi
        jz      L_fc5c
        dec     eax
        mov     eax, dword ptr [esp + 0x10]
        jz      L_fc38
        push    eax
        push    offset g_str_7aca54
        push    offset g_buf_8b9f94
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        jmp     L_fc81
L_fc38:
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x8]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        push    edx
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        push    offset g_str_7a3d00
        push    offset g_buf_8b9f94
        call    dword ptr [g_wsprintfA]
        add     esp, 0x18
        jmp     L_fc81
L_fc5c:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7aca44
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_buf_8b9f94
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
L_fc81:
        mov     dl, byte ptr [esp + 0x14]
        test    dl, 1
        jz      L_fcb9
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7aca38
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        push    ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     edi, offset g_buf_8b9f94
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        pop     ebx
L_fcb9:
        test    dl, 2
        jz      L_fceb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7aca2c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_buf_8b9f94
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_fceb:
        pop     edi
        mov     eax, offset g_buf_8b9f94
        pop     esi
        ret     0xc
    }
}
