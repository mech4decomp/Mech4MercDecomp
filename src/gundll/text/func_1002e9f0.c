/*
 * FUN_1002e9f0 (230 B) — __thiscall, RET 0x4.
 * Dispatches on param_1 (2 or 4): allocates via FUN_1002e750, calls a
 * vtable method on [ESI+0x28], then FUN_1002eae0/FUN_1002ee70 (or a
 * second vtable method for case 4). Invalid param -> FUN_1002e3a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002eae0(void);
extern void __cdecl FUN_1002ee70(void);

__declspec(naked) void FUN_1002e9f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     eax, 0x2
        push    esi
        mov     esi, ecx
        jz      L_ea6c
        sub     eax, 0x2
        jz      L_ea0f
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
    L_ea0f:
        call    FUN_1002e750
        mov     dword ptr [esi + 0x24], eax
        mov     eax, dword ptr [esi + 0x434]
        lea     edx, [esi + 0x234]
        push    edx
        mov     dword ptr [esi + eax*4 + 0x34], 0x0
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [eax]
        lea     edx, [esi + 0x34]
        push    edx
        mov     edx, dword ptr [esi + 0x434]
        push    edx
        mov     edx, dword ptr [esi + 0x43c]
        push    edx
        mov     edx, dword ptr [esi + 0x438]
        push    edx
        push    eax
        call    dword ptr [ecx]
        test    eax, eax
        mov     dword ptr [esi + 0x434], 0x0
        jl      L_ead2
        mov     esi, dword ptr [esi + 0x28]
        mov     eax, dword ptr [esi]
        push    0x0
        push    0x0
        push    esi
        call    dword ptr [eax + 0x4]
        pop     esi
        ret     0x4
    L_ea6c:
        call    FUN_1002e750
        mov     ecx, dword ptr [esi + 0x434]
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + ecx*4 + 0x34], 0x0
        mov     eax, dword ptr [esi + 0x28]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x234]
        push    ecx
        lea     ecx, [esi + 0x34]
        push    ecx
        mov     ecx, dword ptr [esi + 0x434]
        push    ecx
        mov     ecx, dword ptr [esi + 0x43c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x438]
        push    ecx
        push    eax
        call    dword ptr [edx]
        test    eax, eax
        mov     dword ptr [esi + 0x434], 0x0
        jl      L_ead2
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_1002eae0
        test    eax, eax
        jl      L_ead2
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_1002ee70
    L_ead2:
        pop     esi
        ret     0x4
    }
}
