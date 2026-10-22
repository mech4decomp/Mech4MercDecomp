/*
 * FUN_005d8030 (59 B) — Allocate the global rail graph object. Allocates
 * 0x20 bytes; on success constructs a CRailGraph (0x47c bytes) and stores
 * it in the global at 0x007f243c, else stores NULL.
 *
 * __cdecl, no params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d8030(void)
{
    

extern void __cdecl FUN_1004084d3(void);
extern int DAT_007dc140;
extern void __cdecl FUN_1004d5bf0(void);
extern int DAT_007f243c;
__asm {
push    0x20
        call FUN_1004084d3
        add     esp, 0x4
        test    eax, eax
        jz      L8060
        mov ecx, dword ptr [DAT_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x788288
        push    0x47c
        mov     ecx, eax
        call FUN_1004d5bf0
        mov dword ptr [DAT_007f243c], eax
        ret
L8060:
        mov dword ptr [DAT_007f243c], 0x0
        ret
    }


}
