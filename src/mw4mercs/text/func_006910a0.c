/*
 * FUN_006910a0 (41 B) — __fastcall (ECX = this). If [this+0x25] is nonzero
 * call FUN_00691080, else call FUN_006910d0. Then if [this+0x25] is zero,
 * clear global DAT_0082db14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00691080(void);
extern void __cdecl FUN_006910d0(void);
extern int g_0082db14;

__declspec(naked) void __fastcall FUN_006910a0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x25]
        test    al, al
        jz      L_call2
        call    FUN_00691080
        jmp     L_after
    L_call2:
        call    FUN_006910d0
    L_after:
        mov     al, byte ptr [esi + 0x25]
        test    al, al
        pop     esi
        jnz     L_done
        mov     dword ptr [g_0082db14], 0
    L_done:
        ret
    }
}
