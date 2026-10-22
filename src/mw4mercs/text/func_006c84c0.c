/*
 * FUN_006C84C0 — allocates a 0x28-byte object, calls FUN_006C8790
 *   to initialize it, stores result in *param_1.
 *   If allocation fails, sets *param_1 = 0.
 *
 * __stdcall, RET 0xC.
 *   [ESP+4] = param_1 (output pointer)
 *   [ESP+8] = param_2
 *   [ESP+C] = param_3
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_004084C0 — alloc wrapper: __cdecl, RET 8. */
extern void *__cdecl gos_alloc(int size, int tag);

/* FUN_006C8790 — __thiscall (ECX = this), RET 8. */
extern int __stdcall texture_ctor_8790(int param2, int param3);

__declspec(naked) void __stdcall func_006c84c0(int *out_ptr, int param2, int param3)
{
    __asm {
        _emit 0xA1
        _emit 0x24
        _emit 0xE2
        _emit 0x82
        _emit 0x00
        push    eax
        push    0x28
        call    gos_alloc
        add     esp, 8
        test    eax, eax
        jz      L_fail
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    texture_ctor_8790
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [ecx], eax
        ret     0xc
    L_fail:
        mov     edx, dword ptr [esp + 4]
        xor     eax, eax
        mov     dword ptr [edx], eax
        ret     0xc
    }
}
