/*
 * FUN_006476a0 (164 B) — __thiscall (ECX = this). Builds a string via
 * FUN_004179b0/FUN_00417a40/FUN_00417ad0 loop, conditionally calls
 * FUN_004ebe90, stores fields at this+0x34/38/3c, calls FUN_00707e70
 * and stores float results at +0x40/+0x44. RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);
extern int __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004ebe90(void);
extern float __cdecl FUN_00707e70(void);

__declspec(naked) void __fastcall FUN_006476a0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x2c]
        push    ebp
        mov     ecx, esi
        call    FUN_004179b0
        mov     ecx, esi
        call    FUN_00417a40
        cmp     eax, 0x2
        jbe     L_f5
L_c3:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0xc], 0x774758
        jz      L_e0
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x14], eax
L_e0:
        lea     ecx, [esp + 0xc]
        call    FUN_00417ad0
        mov     ecx, esi
        call    FUN_00417a40
        cmp     eax, 0x2
        ja      L_c3
L_f5:
        mov     ecx, esi
        call    FUN_00417a40
        cmp     eax, 0x1
        jnz     L_712
        push    0x0
        mov     ecx, ebp
        mov     dword ptr [esp + 0x24], 0x0
        call    FUN_004ebe90
L_712:
        mov     ecx, dword ptr [edi + 0x3c]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x28]
        push    0x0
        mov     dword ptr [edi + 0x34], ecx
        mov     dword ptr [edi + 0x38], edx
        mov     dword ptr [edi + 0x3c], eax
        call    FUN_00707e70
        fst     dword ptr [edi + 0x40]
        fadd    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [edi + 0x44]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret     0x10
    }
}
