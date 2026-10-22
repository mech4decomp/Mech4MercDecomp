/*
 * FUN_00701270 (58 B) — __stdcall, 2 params, returns 0.
 *
 * Masks param_2->field8 with 0xFF000. If the result is 0x1000 calls
 * FUN_007012E0(param_1, param_2); if 0x2000 calls FUN_00701330(param_1,
 * param_2). Always returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00701330(void);
extern void __cdecl FUN_007012e0(void);

__declspec(naked) int __stdcall FUN_00701270(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        mov     eax, dword ptr [ecx + 8]
        and     eax, 0xff000
        cmp     eax, 0x1000
        jz      case1000
        cmp     eax, 0x2000
        jnz     ret0
        mov     eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_00701330
        xor     eax, eax
        ret     8
case1000:
        push    ecx
        mov     ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_007012e0
ret0:
        xor     eax, eax
        ret     8
    }
}
