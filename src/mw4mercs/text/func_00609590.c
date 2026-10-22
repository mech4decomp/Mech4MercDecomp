/*
 * FUN_00609590 (120 B) — __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * Looks up an object via FUN_00416b60(&param_1); if found, increments a
 * counter and returns. Otherwise builds a new object via FUN_006097f0 /
 * FUN_004084d0 / FUN_00607e80 and registers it via FUN_00416a90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_006097f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00607e80(void);
extern void __cdecl FUN_00416a90(void);

__declspec(naked) void __stdcall FUN_00609590(void)
{
    __asm {
        push    ecx
        push    esi
        lea     eax, [esp + 0xc]
        mov     esi, ecx
        push    eax
        call    FUN_00416b60
        test    eax, eax
        jz      L_006095aa
        inc     dword ptr [eax + 0x30]
        pop     esi
        pop     ecx
        ret     0x8
L_006095aa:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, 0xc8
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x8], 0x0
        jge     L_006095d1
        push    0x0
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_006097f0
        fstp    dword ptr [esp + 0x8]
L_006095d1:
        push    0x34
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_006095f3
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        push    edx
        mov     ecx, eax
        call    FUN_00607e80
        jmp     L_006095f5
L_006095f3:
        xor     eax, eax
L_006095f5:
        lea     ecx, [esp + 0x10]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_00416a90
        pop     edi
        pop     esi
        pop     ecx
        ret     0x8
    }
}
