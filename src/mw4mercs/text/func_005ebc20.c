/*
 * FUN_005EBC20 (85 B) — __thiscall (ECX = this), RET 4 (1 param).
 * Destructor: calls FUN_004169c0; if (param & 1) removes this from
 * the chain (FUN_00416130), decrements DAT_007f2594, and when it
 * reaches 0 tears down the chain object (FUN_00415e30 + free) and
 * nulls DAT_007f2590. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004169c0(void);
extern void *__cdecl FUN_00416130(void);
extern void *__cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *p);

extern int DAT_007f2590;
extern int DAT_007f2594;

__declspec(naked) void *__fastcall FUN_005ebc20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        jz      l_done
        mov     ecx, dword ptr [DAT_007f2590]
        push    esi
        call    FUN_00416130
        dec     dword ptr [DAT_007f2594]
        jnz     l_done
        push    edi
        mov     edi, dword ptr [DAT_007f2590]
        test    edi, edi
        jz      l_null_chain
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_null_chain:
        pop     edi
        mov     eax, esi
        mov     dword ptr [DAT_007f2590], 0
        pop     esi
        ret     4
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
