/*
 * FUN_005f0340 (77 B) — no-arg initializer.
 *
 * Allocates 0x24 bytes via FUN_004084d0; on success calls
 * FUN_004dd270(...) and stores the result in global 0x007f25b0,
 * else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_004dd270(void);

__declspec(naked) void __stdcall FUN_005f0340(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f25b0;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L1
        mov eax, dword ptr [DAT_007dc8cc]
        push    0x5052a0
        push    0x5f03c0
        push    0x78a0a8
        push    2
        push    eax
        push    0x78a0d8
        push    0x48b
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f25b0], esi
        pop     esi
        ret
L1:
        mov dword ptr [DAT_007f25b0], 0x0
        pop     esi
        ret
    }


}
