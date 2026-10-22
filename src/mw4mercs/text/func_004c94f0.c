/*
 * FUN_004C94F0 (51 B) — Global state query/cleanup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char DAT_007dac4c;
extern int DAT_007dac78;
extern int *DAT_007dac70;
extern int DAT_007dac74;

__declspec(naked) int FUN_004c94f0(void)
{
    __asm {
        mov     al, byte ptr [DAT_007dac4c]
        test    al, al
        jnz     l_check_ptr

        xor     al, al
        ret

    l_check_ptr:
        mov     eax, dword ptr [DAT_007dac78]
        test    eax, eax
        jz      l_return_1

        push    eax
        call    dword ptr [DAT_007dac70]
        mov     dword ptr [DAT_007dac78], 0
        mov     dword ptr [DAT_007dac74], 0

    l_return_1:
        mov     al, 1
        ret
    }
}
