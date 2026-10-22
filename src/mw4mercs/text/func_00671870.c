/*
 * FUN_00671870 (64 B) — __thiscall destructor.
 *
 * Sets vtable 0x797200, calls virtual method (1) on this+0x6c if non-null,
 * frees this+0x84 if non-null, destructs this+0x64 (FUN_0041fc90),
 * then FUN_00561730(this). No return value.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084e0(void);
extern void FUN_0041fc90(void);
extern void FUN_00561730(void);

__declspec(naked) void __fastcall FUN_00671870(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x6c]
        test    ecx, ecx
        mov     dword ptr [esi], 0x797200
        jz      L_skip1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_skip1:
        mov     eax, dword ptr [esi + 0x84]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L_skip2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skip2:
        lea     ecx, [esi + 0x64]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        pop     ecx
        ret
    }
}
