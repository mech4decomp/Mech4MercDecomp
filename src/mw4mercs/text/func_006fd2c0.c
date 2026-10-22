/*
 * FUN_006FD2C0 (106 B) — D3D format dispatch.
 *
 * __stdcall, RET 8 (2 stack params). Reads field at param2+8, masks
 * with 0xff000, dispatches to FUN_006FD400 (0x2000), FUN_006FD3C0
 * (0x1000), FUN_006FD500 (0x4000), or FUN_006FD450 (0x5000).
 * Always returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fd400(void);
extern void __cdecl FUN_006fd3c0(void);
extern void __cdecl FUN_006fd500(void);
extern void __cdecl FUN_006fd450(void);

__declspec(naked) void __stdcall FUN_006fd2c0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        mov     eax, dword ptr [ecx + 8]
        and     eax, 0xff000
        cmp     eax, 0x4000
        jg      l_gt_4000
        jz      l_4000
        cmp     eax, 0x1000
        jz      l_1000
        cmp     eax, 0x2000
        jnz     l_done
        mov     eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_006fd400
        xor     eax, eax
        ret     8
    l_1000:
        push    ecx
        mov     ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_006fd3c0
        xor     eax, eax
        ret     8
    l_4000:
        mov     edx, dword ptr [esp + 4]
        push    ecx
        push    edx
        call    FUN_006fd500
        xor     eax, eax
        ret     8
    l_gt_4000:
        cmp     eax, 0x5000
        jnz     l_done
        mov     eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_006fd450
    l_done:
        xor     eax, eax
        ret     8
    }
}
