/*
 * FUN_005acc20 (50 B) - __fastcall (ECX = param), no stack params.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_0075db4a(void);   /* _ftol */

__declspec(naked) void __fastcall FUN_005acc20(void *param)
{
    

extern int DAT_0076c5b0;
extern int DAT_0076d048;
__asm {
push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x58]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_zero
        fld     dword ptr [esi + 0x54]
        fdiv    dword ptr [esi + 0x58]
        fmul dword ptr [DAT_0076d048]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x20], eax
        pop     esi
        ret
L_zero:
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        ret
    }


}
