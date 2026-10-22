/*
 * FUN_004AE360 (95 B) — __thiscall float clamp + call to FUN_004AE2B0.
 *   Clamps [ecx+8] and [ecx+8]+param2*[ecx+4] to >= param1,
 *   then calls FUN_004AE2B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_004ae2b0(void);

__declspec(naked) void __stdcall FUN_004ae360(void)
{
    __asm {
        sub     esp, 8
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 8]
        fmul    dword ptr [ecx + 4]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov [esp+0],eax — MSVC6 drops zero disp (89 04 24) */
        fadd    dword ptr [ecx + 8]
        fst     dword ptr [esp + 4]
        __asm _emit 0xD9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: fld [esp+0] — MSVC6 drops zero disp (D9 04 24) */
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        jz      l_check_second
        mov     edx, dword ptr [esp + 0xc]
        __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov [esp+0],edx — MSVC6 drops zero disp (89 14 24) */
    l_check_second:
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        jz      l_call_func
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 4], eax
    l_call_func:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 4]
        push    edx
        mov     edx, dword ptr [esp + 4]
        push    eax
        mov     eax, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_004ae2b0
        add     esp, 8
        ret     8
    }
}
