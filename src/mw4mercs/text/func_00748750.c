/*
 * FUN_00748750 (56 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * If this->[0x10] == 0, call FUN_00748b50() (ECX = this).
 * If (param1 != 0) && ((this->[4] & 1) == 0), call FUN_00748f80() (ECX = this).
 * Then call FUN_00747a50(this->[0x10], param2) (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00748b50(void);
extern void __cdecl FUN_00748f80(void);
extern void __cdecl FUN_00747a50(void *a, void *b);

__declspec(naked) void __cdecl FUN_00748750(void *param1, char param2, void *param3)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jnz     label1
        call    FUN_00748b50
label1:
        mov     al, byte ptr [esp + 0x8]
        test    al, al
        jz      label2
        test    byte ptr [esi + 0x4], 0x1
        jnz     label2
        mov     ecx, esi
        call    FUN_00748f80
label2:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esi + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00747a50
        pop     esi
        ret     0x8
    }
}
