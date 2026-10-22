/*
 * FUN_006207e0 (37 B) — __thiscall sprintf wrapper.
 *
 * If this->[0x15] is nonzero, sprintf(&DAT_007f29a4, "%s Parameters: (",
 *                                    *(param + 0x10)).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __imp__sprintf;              /* 0x0076B420 - IAT sprintf */
extern const char DAT_0078cad0[];       /* 0x0078CAD0 - "%s Parameters: (" */
extern char DAT_007f29a4[];             /* 0x007F29A4 - output buffer */

__declspec(naked) void __stdcall FUN_006207e0(void *param)
{
    __asm {
        mov     al, byte ptr [ecx + 0x15]
        test    al, al
        jz      L_done
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        push    offset DAT_0078cad0
        push    offset DAT_007f29a4
        call    dword ptr [__imp__sprintf]
        add     esp, 0xC
L_done:
        ret     4
    }
}
