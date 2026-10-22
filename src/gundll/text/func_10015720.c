/*
 * FUN_10015720 (96 B) — __stdcall, RET 0x14.
 * Init helper: guards on [param_1+0xc], calls FUN_1001c760 + FUN_10001dd0.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1001c760(void);
extern int __cdecl FUN_10001dd0(void);

__declspec(naked) void __stdcall FUN_10015720(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      ok
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
    ok:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      done
        mov     edi, dword ptr [esp + 0x1c]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jnz     store
        test    edi, edi
        jz      store
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x14
    store:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x24], edx
        mov     eax, ecx
    done:
        pop     edi
        pop     esi
        ret     0x14
    }
}
