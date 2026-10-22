/*
 * FUN_004CCCC0 (46 B) — Array iterator calling FUN_004ceb20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004ceb20(void *this);
extern int DAT_007db098;

__declspec(naked) void __fastcall FUN_004cccc0(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     ecx, dword ptr [DAT_007db098]

        push    edi

        call    FUN_004ceb20

        add     esi, 0x181c
        mov     edi, 0xfe

    l_loop:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      l_skip
        call    FUN_004ceb20

    l_skip:
        add     esi, 4
        dec     edi
        jnz     l_loop

        pop     edi
        pop     esi
        ret
    }
}
