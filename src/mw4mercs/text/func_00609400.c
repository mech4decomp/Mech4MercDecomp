/*
 * FUN_00609400 (197 B) — animation-blend/archive subsystem. Looks up an
 * object (FUN_00416b60), sums blend weights of matching entries, and
 * dispatches FUN_00609650/FUN_00609610.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00609650(void);
extern void __cdecl FUN_00609610(void);

__declspec(naked) void FUN_00609400(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x28]
        mov     edi, ecx
        push    eax
        call    FUN_00416b60
        mov     ebx, eax
        test    ebx, ebx
        jz      L_6094b9
        mov     ebp, dword ptr [ebx + 0x10]
        cmp     ebp, 0x96
        jl      L_60949a
        cmp     ebp, 0xc8
        jge     L_60949a
        push    edi
        lea     ecx, [esp + 0x14]
        xor     esi, esi
        call    FUN_00416bc0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x78bf24
        call    FUN_00416cc0
        test    eax, eax
        jz      L_609479
L_609451:
        mov     ecx, dword ptr [eax + 0x10]
        cmp     ecx, 0x96
        jl      L_609467
        cmp     ecx, 0xc8
        jge     L_609467
        add     esi, dword ptr [eax + 0x30]
L_609467:
        lea     ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_609451
        cmp     esi, 2
        jge     L_609491
L_609479:
        lea     ecx, [esp + 0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x14
        ret     0x4
L_609491:
        lea     ecx, [esp + 0x10]
        call    FUN_00416c60
L_60949a:
        fld     dword ptr [ebx + 0x18]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x14]
        fstp    dword ptr [esp]
        push    ecx
        push    ebp
        mov     ecx, edi
        call    FUN_00609650
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        mov     ecx, edi
        call    FUN_00609610
L_6094b9:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret     0x4
    }
}
