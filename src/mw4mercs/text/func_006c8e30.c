/*
 * FUN_006C8E30 — name sub-object finalizer (extension-based dispatch).
 *
 * Called by texture_name_init (FUN_006C8950) after the name sub-object is
 * initialized. Examines the filename extension and dispatches to the
 * appropriate texture loader:
 *   .tga → FUN_006C8B90 (TGA loader)
 *   .bmp → FUN_006C8C40 (BMP loader)
 *   .jpg → FUN_006C8AE0 (JPEG loader)
 *   else → FUN_006BFA50 (error: "Unknown file format '%s'")
 *
 * __fastcall (ECX = this), no explicit return value.
 *   ECX = this (name sub-object, at texture+0x00)
 *   No stack params.
 *
 * Operations:
 *   1. Loads _stricmp IAT entry into EBP
 *   2. Gets name string pointer from this+0x20
 *   3. Computes strlen(name) via REPNE SCASB
 *   4. Computes name + strlen - 4 (extension pointer)
 *   5. Calls _stricmp(".tga", ext_ptr); if match → FUN_006C8B90(this, name)
 *   6. Calls _stricmp(".bmp", ext_ptr); if match → FUN_006C8C40(this, name)
 *   7. Calls _stricmp(".jpg", ext_ptr); if match → FUN_006C8AE0(this, name)
 *   8. Else → FUN_006BFA50("Unknown file format '%s'", name)
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* ---- external globals ---- */

/* IAT entry for _stricmp (MSVCRT.dll) at 0x0076B2AC */
extern int __imp__stricmp;

/* String constants in .rdata */
extern const char _str_dot_tga[];    /* 0x007700AC: ".tga" */
extern const char _str_dot_bmp[];    /* 0x0079E268: ".bmp" */
extern const char _str_dot_jpg[];    /* 0x0079E260: ".jpg" */
extern const char _str_unknown_fmt[]; /* 0x0079E244: "Unknown file format '%s'" */

/* ---- external functions (__thiscall: ECX = this, 1 stack param) ---- */
/* VC6 doesn't support __thiscall in declarations; the naked asm handles it. */
extern void FUN_006c8b90(void);
extern void FUN_006c8c40(void);
extern void FUN_006c8ae0(void);
void __cdecl FUN_006bfa50(const char *fmt, ...);

__declspec(naked) void __fastcall texture_name_finalize(void)
{
    __asm {
        push    ecx                         /* save this */
        push    ebx
        push    ebp
        mov     ebp, dword ptr [__imp__stricmp]  /* EBP = _stricmp */
        push    esi
        mov     esi, dword ptr [ecx + 0x20] /* ESI = this->name_ptr */
        mov     dword ptr [esp + 0x0c], ecx /* re-save this (compiler artifact) */
        push    edi

        /* ---- strlen(name) ---- */
        or      ecx, -1                     /* ECX = 0xFFFFFFFF */
        xor     eax, eax
        mov     edi, esi                    /* EDI = name */
        repne   scasb                       /* scan for null */
        not     ecx                         /* ECX = strlen + 1 */
        dec     ecx                         /* ECX = strlen */
        lea     ebx, dword ptr [esi - 4]    /* EBX = name - 4 */
        add     ecx, ebx                    /* ECX = name + strlen - 4 (ext ptr) */

        /* ---- Check .tga ---- */
        push    ecx                         /* push ext_ptr */
        push    offset _str_dot_tga         /* push ".tga" */
        call    ebp                         /* _stricmp(".tga", ext_ptr) */
        add     esp, 8
        test    eax, eax
        jnz     l_not_tga

        /* .tga match */
        mov     ecx, dword ptr [esp + 0x10] /* ECX = this */
        push    esi                         /* push name_ptr */
        call    FUN_006c8b90
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret

l_not_tga:
        /* ---- Check .bmp ---- */
        or      ecx, -1
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, ebx                    /* ECX = name + strlen - 4 */
        push    ecx
        push    offset _str_dot_bmp         /* push ".bmp" */
        call    ebp
        add     esp, 8
        test    eax, eax
        jnz     l_not_bmp

        /* .bmp match */
        mov     ecx, dword ptr [esp + 0x10] /* ECX = this */
        push    esi
        call    FUN_006c8c40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret

l_not_bmp:
        /* ---- Check .jpg ---- */
        or      ecx, -1
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, ebx                    /* ECX = name + strlen - 4 */
        push    ecx
        push    offset _str_dot_jpg         /* push ".jpg" */
        call    ebp
        add     esp, 8
        test    eax, eax
        push    esi                         /* push name_ptr (for error path) */
        jnz     l_not_jpg

        /* .jpg match */
        mov     ecx, dword ptr [esp + 0x14] /* ECX = this (extra PUSH shifts by 4) */
        call    FUN_006c8ae0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret

l_not_jpg:
        /* ---- Unknown format: error ---- */
        push    offset _str_unknown_fmt     /* push format string */
        call    FUN_006bfa50
        add     esp, 8

        /* ---- Epilogue ---- */
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
