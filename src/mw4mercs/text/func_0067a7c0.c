/*
 * FUN_0067a7c0 (42 B) — boolean predicate returning AL.
 *
 * Returns 1 if FUN_0067a500() is nonzero, FUN_0067a500()->[0x564] == 5,
 * and FUN_0067a640()->[0xc] == 1; otherwise 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0067a500(void);
extern void *__cdecl FUN_0067a640(void);

__declspec(naked) char __cdecl FUN_0067a7c0(void)
{
    __asm {
        call    FUN_0067a500
        test    eax, eax
        jz      L_false
        call    FUN_0067a500
        cmp     dword ptr [eax + 0x564], 5
        jnz     L_false
        call    FUN_0067a640
        mov     ecx, eax
        mov     dl, byte ptr [ecx + 0xC]
        mov     al, 1
        cmp     dl, al
        jz      L_ret
L_false:
        xor     al, al
L_ret:
        ret
    }
}
