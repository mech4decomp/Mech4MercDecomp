/*
 * FUN_00609ab0 (99 B) — __thiscall (this in ECX), RET 0xc, 3 params.
 *
 * Same pattern as FUN_00609650 (registers at this+0x28). Looks up via
 * FUN_00416b60(&param_1); if found increments [obj+0x30]. Else allocates
 * 0x34 bytes, constructs via FUN_00607e80, registers via FUN_00416a90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void *p);
extern void __cdecl FUN_004084d0(void *p);
extern void __cdecl FUN_00607e80(void *a, void *b, void *c);
extern void __cdecl FUN_00416a90(void *a, void *b);

__declspec(naked) void FUN_00609ab0(void)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x28]
        lea     eax, [esp + 0x8]
        push    eax
        mov     ecx, esi
        call    FUN_00416b60
        test    eax, eax
        jz      L_acb
        inc     dword ptr [eax + 0x30]
        pop     esi
        ret     0xc
    L_acb:
        push    0x34
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_b00
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00607e80
        lea     edx, [esp + 0x8]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00416a90
        pop     esi
        ret     0xc
    L_b00:
        lea     edx, [esp + 0x8]
        xor     eax, eax
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00416a90
        pop     esi
        ret     0xc
    }
}
