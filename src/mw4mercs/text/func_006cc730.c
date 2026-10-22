/*
 * FUN_006CC730 — expression evaluator (float version).
 *
 * __cdecl, no stack params. Returns float result.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

float __stdcall FUN_006ccd90(void);
int __stdcall FUN_006ccb40(void);
float __stdcall FUN_006cc7e0(int a, float b, int c);
void __stdcall FUN_006bfa50(const char *str);

__declspec(naked) float __stdcall func_006cc730(void)
{
    __asm {
        sub     esp, 0x104
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
    L_loop:
        call    FUN_006ccd90
        fstp    dword ptr [esp + 0x10]
        call    FUN_006ccb40
        mov     ebp, eax
        _emit 0xA1
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        cmp     byte ptr [eax], 0x20
        jnz     L_check
        inc     eax
        _emit 0xA3
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
    L_check:
        test    edi, edi
        jz      L_store
        mov     ebx, ebp
        and     ebx, 0xff
        lea     esi, [edi * 4 - 4]
    L_reduce:
        mov     eax, dword ptr [esp + esi + 0x94]
        mov     ecx, eax
        and     ecx, 0xff
        cmp     ebx, ecx
        jg      L_store
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        mov     eax, dword ptr [esp + esi + 0x18]
        push    edx
        push    eax
        call    FUN_006cc7e0
        fstp    dword ptr [esp + 0x10]
        dec     edi
        sub     esi, 4
        test    edi, edi
        jnz     L_reduce
    L_store:
        test    ebp, ebp
        jz      L_ret
        cmp     edi, 0x20
        jnz     L_no_overflow
        push    0x79e2ec
        call    FUN_006bfa50
        add     esp, 4
    L_no_overflow:
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esp + edi * 4 + 0x94], ebp
        fstp    dword ptr [esp + edi * 4 + 0x14]
        inc     edi
        jmp     L_loop
    L_ret:
        fld     dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x104
        ret
    }
}
