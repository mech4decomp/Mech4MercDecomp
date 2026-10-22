/*
 * FUN_006FD330 (129 B) — Dispatch on resource type flags.
 *
 * Reads flags at param_2+0x08, masks with 0xFF000, and dispatches:
 *   0x2000 → FUN_006FD510(param_1, param_2)
 *   0x3000 → FUN_006FDA20(param_1, param_2)
 *   0x4000 → FUN_006FDC50(param_1, param_2)
 *   0x5000 → FUN_006FDA30(param_1, param_2)
 *   0x7000 → FUN_006FDC60(param_1, param_2)
 * Returns 0.
 *
 * __stdcall (RET 8), 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fda20(void);
extern void __cdecl FUN_006fd510(void);
extern void __cdecl FUN_006fdc50(void);
extern void __cdecl FUN_006fda30(void);
extern void __cdecl FUN_006fdc60(void);

__declspec(naked) void FUN_006fd330(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        mov     eax, dword ptr [ecx + 8]
        and     eax, 0xFF000
        cmp     eax, 0x4000
        jg      l_gt_4000
        jz      l_eq_4000
        cmp     eax, 0x2000
        jz      l_eq_2000
        cmp     eax, 0x3000
        jnz     l_done
        mov     eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_006fda20
        xor     eax, eax
        ret     8
    l_eq_2000:
        push    ecx
        mov     ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_006fd510
        xor     eax, eax
        ret     8
    l_eq_4000:
        mov     edx, dword ptr [esp + 4]
        push    ecx
        push    edx
        call    FUN_006fdc50
        xor     eax, eax
        ret     8
    l_gt_4000:
        cmp     eax, 0x5000
        jz      l_eq_5000
        cmp     eax, 0x7000
        jnz     l_done
        mov     eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_006fdc60
        xor     eax, eax
        ret     8
    l_eq_5000:
        push    ecx
        mov     ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_006fda30
    l_done:
        xor     eax, eax
        ret     8
    }
}
