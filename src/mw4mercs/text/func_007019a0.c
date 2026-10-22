/*
 * FUN_007019a0 (52 B) — gosScript list unlink (__stdcall, 1 arg). Removes
 * the node matching the argument from the g_00856a7c list, frees it via
 * FUN_006f4230, and returns 1 (or 0 if not found).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856a7c;
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_007019a0(void)
{
    __asm {
        mov     eax, dword ptr [g_00856a7c]
        test    eax, eax
        mov     ecx, 0x856a7c
        jz      L_notfound
        mov     edx, dword ptr [esp + 0x4]
        cmp     eax, edx
        jz      L_found
L_loop:
        lea     ecx, [eax + 0x18]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        /* __emit: MSVC6 miscomputes this backward jnz rel-offset (off-by-4) */
        __emit 0x75
        __emit 0xF3
L_notfound:
        xor     al, al
        ret     0x4
L_found:
        mov     eax, dword ptr [edx + 0x18]
        push    edx
        mov     dword ptr [ecx], eax
        call    FUN_006f4230
        mov     al, 0x1
        ret     0x4
    }
}
