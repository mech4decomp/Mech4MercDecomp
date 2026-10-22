/*
 * FUN_5e002340 (155 B) — __thiscall (ECX=this). If flag at +0x4270 is set,
 * converts two float pairs (param_1, param_2) to ints via __ftol, clamps them
 * to the surface size at +0x4018/+0x401c, and calls FUN_5e01e9a0.
 *
 * __thiscall, RET 8 (two stack params).
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b4cc(void);
extern void __cdecl FUN_5e01e9a0(void);

__declspec(naked) void __stdcall FUN_5e002340(void)
{
    __asm {
        push    ecx
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x4270]
        test    eax, eax
        jz      L_d6
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        fld     dword ptr [ebp]
        call    FUN_5e02b4cc
        fld     dword ptr [ebp + 0x4]
        mov     esi, eax
        call    FUN_5e02b4cc
        mov     ebx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x10], eax
        fld     dword ptr [ebx]
        call    FUN_5e02b4cc
        fld     dword ptr [ebx + 0x4]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_5e02b4cc
        mov     ecx, dword ptr [edi + 0x4018]
        mov     edx, dword ptr [edi + 0x401c]
        cmp     esi, ecx
        jl      L_399
        lea     esi, [ecx + -0x1]
L_399:
        cmp     dword ptr [esp + 0x18], ecx
        jl      L_3a4
        dec     ecx
        mov     dword ptr [esp + 0x18], ecx
L_3a4:
        cmp     dword ptr [esp + 0x10], edx
        jl      L_3b1
        lea     ecx, [edx + -0x1]
        mov     dword ptr [esp + 0x10], ecx
L_3b1:
        cmp     eax, edx
        jl      L_3b8
        lea     eax, [edx + -0x1]
L_3b8:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ebp + 0x10]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    esi
        push    ecx
        lea     ecx, [edi + 0x400c]
        call    FUN_5e01e9a0
        pop     esi
        pop     ebp
        pop     ebx
L_d6:
        pop     edi
        pop     ecx
        ret     8
    }
}
