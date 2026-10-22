/*
 * FUN_006BFA50 (303 B) — Error/log function for unknown file formats and
 * general error reporting.
 *
 * __cdecl, 1+ params (format string + varargs).
 *
 * Builds a log message with a prefix (either a file:line prefix or
 * "Unknown File : ") and the user-provided formatted message, then
 * dispatches to FUN_006F91D0 (log/output function) with mode 0x201.
 * If the log function returns non-zero, triggers INT3 (debug break).
 *
 * The prefix selection depends on three globals:
 *   DAT_0082f338 (g_log_mode?) — if 0 or 0xFF81FF81, use "Unknown File : "
 *   DAT_0082f330 — if 0, use "Unknown File : "
 *   Otherwise, use GetFullPathNameA to resolve DAT_0082f32c, extract the
 *   filename portion (after last '\'), and format "%s(%d) : " with
 *   DAT_0082f334 as the line number.
 *
 * Called by texture_name_finalize (FUN_006C8E30) with
 *   "Unknown file format '%s'" and the filename.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <windows.h>

/* ---- IAT entries ---- */
extern int __imp__sprintf;   /* 0x0076B420 */
extern int __imp__vsprintf;  /* 0x0076B3EC */

/* ---- External functions ---- */
void __stdcall FUN_006fbc60(char *dst, const char *src);  /* GetFullPathNameA wrapper, __stdcall ret 8 */
int  __stdcall FUN_006f91d0(int mode, const char *msg);

/* ---- String constants in .rdata ---- */
extern const char _str_fmt_fileline[];  /* 0x0079BDFC: "%s(%d) : " */
extern const char _str_unknown_file[];  /* 0x0079BDE0: "Unknown File : " */
extern const char _str_gosscript[];     /* 0x0079BDF0: "GOSSCRIPT" */

/* ---- Globals ---- */
extern int   DAT_0082f338;   /* 0x0082F338 — log mode / enable flag */
extern int   DAT_0082f330;   /* 0x0082F330 — secondary enable flag */
extern int   DAT_0082f32c;   /* 0x0082F32C — source file path pointer */
extern int   DAT_0082f334;   /* 0x0082F334 — source line number */
extern char  DAT_008303ec[]; /* 0x008303EC — path buffer (256 bytes) */
extern void *DAT_00849888;   /* 0x00849888 — current path pointer */
extern int   DAT_00849884;   /* 0x00849884 — current line number */
extern void *DAT_0087dbf8;   /* 0x0087DBF8 — current script name */

__declspec(naked) void __cdecl FUN_006bfa50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x800               ; two 1024-byte buffers
        mov     eax, dword ptr [DAT_0082f338]
        push    ebx
        xor     ecx, ecx
        cmp     eax, ecx
        push    esi
        push    edi
        mov     byte ptr [ebp - 0x400], cl  ; local_404[0] = 0
        jz      l_unknown_file

        cmp     eax, 0xFF81FF81
        jz      l_unknown_file

        cmp     dword ptr [DAT_0082f330], ecx
        jz      l_unknown_file

        ; ---- File:line prefix path ----
        mov     eax, dword ptr [DAT_0082f32c]
        push    eax
        push    offset DAT_008303ec
        call    FUN_006fbc60             ; GetFullPathNameA(src, 256, dst, ...)
                                         ; __stdcall ret 8 (callee cleanup)

        ; Find last '\' in the resolved path
        or      ecx, -1
        xor     eax, eax
        mov     edi, offset DAT_008303ec
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, offset DAT_008303ec  ; ECX = end of string (pointer to null)

        cmp     ecx, offset DAT_008303ec
        mov     dword ptr [DAT_00849888], offset DAT_008303ec
        jz      l_skip_backslash_search

        mov     al, 0x5C                  ; '\'

    l_find_backslash:
        cmp     byte ptr [ecx - 1], al
        jz      l_skip_backslash_search
        dec     ecx
        cmp     ecx, offset DAT_008303ec
        jnz     l_find_backslash

    l_skip_backslash_search:
        mov     eax, dword ptr [DAT_0082f334]
        push    eax
        push    ecx
        lea     ecx, [ebp - 0x400]
        push    offset _str_fmt_fileline  ; "%s(%d) : "
        push    ecx
        mov     dword ptr [DAT_00849884], eax
        mov     dword ptr [DAT_0087dbf8], offset _str_gosscript
        call    dword ptr [__imp__sprintf]
        add     esp, 0x10
        jmp     l_format_message

    l_unknown_file:
        ; ---- "Unknown File : " prefix path ----
        lea     edx, [ebp - 0x400]
        push    offset _str_unknown_file  ; "Unknown File : "
        push    edx
        mov     dword ptr [DAT_00849888], ecx  ; ECX = 0 (NULL)
        mov     dword ptr [DAT_0087dbf8], offset _str_gosscript
        call    dword ptr [__imp__sprintf]
        add     esp, 8

    l_format_message:
        ; ---- vsprintf the user message ----
        mov     ecx, dword ptr [ebp + 8]   ; ECX = format string (param_1)
        lea     eax, [ebp + 0x0c]          ; EAX = va_list (params after format)
        push    eax
        push    ecx
        lea     edx, [ebp - 0x800]         ; EDX = local_804 buffer
        push    edx
        call    dword ptr [__imp__vsprintf]

        ; ---- strcat: concatenate prefix + formatted message ----
        ; strlen(local_804) -> EBX
        or      ecx, -1
        add     esp, 0x0c
        xor     eax, eax
        lea     edi, [ebp - 0x800]
        repne scasb
        not     ecx
        sub     edi, ecx                   ; EDI = start of local_804
        mov     ebx, ecx                   ; EBX = strlen(local_804) + 1

        ; strlen(local_404) -> find end
        or      ecx, -1
        mov     esi, edi                   ; ESI = start of local_804
        lea     edx, [ebp - 0x400]
        mov     edi, edx                   ; EDI = local_404
        repne scasb
        mov     ecx, ebx                   ; ECX = strlen(local_804) + 1
        shr     ecx, 2                     ; ECX = (strlen+1) / 4
        dec     edi                        ; EDI = end of local_404 (before null)
        rep movsd                          ; copy dwords

        lea     eax, [ebp - 0x400]
        mov     ecx, ebx
        push    eax
        and     ecx, 3                     ; ECX = (strlen+1) % 4
        push    0x201
        rep movsb                          ; copy remaining bytes

        call    FUN_006f91d0

        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jz      l_skip_break

        int     3                          ; debug break

    l_skip_break:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
