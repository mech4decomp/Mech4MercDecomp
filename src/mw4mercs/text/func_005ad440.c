/*
 * FUN_005AD440 (65 B) — global shutdown routine, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501B40(void);
extern void __cdecl FUN_004084E0(void *param);

__declspec(naked) void __stdcall FUN_005AD440(void)
{
    

extern int DAT_007f20d0;
extern int DAT_007f20d8;
__asm {
        mov ecx, dword ptr [DAT_007f20d0]
        test    ecx, ecx
        jz      L450
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L450:
        push    esi
        mov esi, dword ptr [DAT_007f20d8]
        test    esi, esi
        mov dword ptr [DAT_007f20d0], 0x0
        jz      L475
        mov     ecx, esi
        call    FUN_00501B40
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
L475:
        mov dword ptr [DAT_007f20d8], 0x0
        pop     esi
        ret
    }


}
