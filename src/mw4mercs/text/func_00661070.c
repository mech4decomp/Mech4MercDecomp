/*
 * FUN_00661070 (56 B) — __thiscall (ECX = this), RET 4. Calls
 * FUN_006a22e0 on this+0x28, this+0x1C, this+0x0C, and this; then if
 * param_1 & 1, calls FUN_004084e0(this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006a22e0(void *this);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *__fastcall FUN_00661070(void *this, int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x28]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x1C]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x0C]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
        test    byte ptr [esp + 8], 1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
