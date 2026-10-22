/*
 * FUN_00637bf0 (54 B) — __thiscall float-array linear search. Scans
 * this[i] for i in [param_2, param_3); returns first index whose
 * element is >= param_1 (or param_3 if none). RET 0xc (3 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637a20(void);

__declspec(naked) void FUN_00637bf0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        cmp     esi, ebx
        push    edi
        mov     ebp, ecx
        mov     edi, esi
        jge     L1
L2:
        push    esi
        mov     ecx, ebp
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L1
        inc     edi
        inc     esi
        cmp     esi, ebx
        jl      L2
L1:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
