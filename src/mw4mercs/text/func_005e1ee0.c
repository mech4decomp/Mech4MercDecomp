/*
 * FUN_005e1ee0 (39 B) — __fastcall (ECX = param). If *DAT_007f252c == 0,
 * calls FUN_004179b0 then copies a pointer through DAT_007f2530; else just
 * calls FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179b0(void);

__declspec(naked) void FUN_005e1ee0(void)
{
    

extern int DAT_007f252c;
extern int DAT_007f2530;
__asm {
mov     eax, ecx
        mov ecx, dword ptr [DAT_007f252c]
        cmp     dword ptr [ecx], 0x0
        push    eax
        jnz     L_1f01
        call    FUN_004179b0
        mov eax, dword ptr [DAT_007f2530]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], edx
        ret
L_1f01:
        call    FUN_004179b0
        ret
    }


}
