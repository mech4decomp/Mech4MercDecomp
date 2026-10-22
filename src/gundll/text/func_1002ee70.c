/*
 * FUN_1002ee70 (108 B) — __thiscall, RET 0x4.
 * Init helper: validates param_1 == 3, then reads two values via
 * FUN_1002e750 and dispatches through a vtable method.
 *
 * CFLAGS: /O1
 */

extern void FUN_1002e3a0(void);
extern void FUN_1002e750(void);
extern void FUN_1002eee0(void);

__declspec(naked) void FUN_1002ee70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, 3
        mov     esi, ecx
        jz      L_ee8e
        push    0C1121C00h
        call    FUN_1002e3a0
        pop     edi
        pop     esi
        ret     4
    L_ee8e:
        call    FUN_1002e750
        cmp     eax, 7
        mov     dword ptr [esi + 0x24], eax
        mov     ecx, esi
        jz      L_eeae
        push    0C1121C00h
        call    FUN_1002e3a0
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    L_eeae:
        push    ebx
        call    FUN_1002e750
        mov     ecx, dword ptr [esi + 0x30]
        mov     edx, dword ptr [esi + 0x2c]
        push    ecx
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x28]
        push    edx
        mov     dword ptr [esi + 0x24], edi
        mov     ebx, dword ptr [eax]
        push    eax
        call    dword ptr [ebx + 0x4]
        test    eax, eax
        pop     ebx
        jl      L_eed7
        push    edi
        mov     ecx, esi
        call    FUN_1002eee0
    L_eed7:
        pop     edi
        pop     esi
        ret     4
    }
}
