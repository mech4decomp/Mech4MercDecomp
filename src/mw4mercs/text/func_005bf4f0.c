/*
 * FUN_005bf4f0 (85 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls FUN_004169c0. If (param & 1), calls FUN_00416130(this), decrements
 * global DAT_007f229c; if it hits 0, deletes DAT_007f22a0 (FUN_00415e30 +
 * FUN_004084e0) and zeroes it. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004169c0(void);
extern void FUN_00416130(void);
extern void FUN_00415e30(void);
extern void FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_005bf4f0(void *param)
{
    

extern int DAT_007f22a0;
extern int DAT_007f229c;
__asm {
push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_5bf53f
        mov ecx, dword ptr [DAT_007f22a0]
        push    esi
        call    FUN_00416130
        dec dword ptr [DAT_007f229c]
        jnz     L_5bf53f
        push    edi
        mov edi, dword ptr [DAT_007f22a0]
        test    edi, edi
        jz      L_5bf52e
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_5bf52e:
        pop     edi
        mov     eax, esi
        mov dword ptr [DAT_007f22a0], 0x0
        pop     esi
        ret     4
    L_5bf53f:
        mov     eax, esi
        pop     esi
        ret     4
    }


}
