/*
 * FUN_0054d450 (185 B) — __cdecl function.
 * No this pointer, no stack cleanup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054d450(void)
{
    

extern void __cdecl FUN_10040ecbb(void);
extern void __cdecl FUN_100411d3e(void);
extern void __cdecl FUN_100411d2b(void);
extern int DAT_007b46b8;
extern int DAT_0076c5b0;
extern int DAT_0077d060;
extern int DAT_007b46bc;
extern int DAT_0076d064;
__asm {
mov     ecx, dword ptr [esp + 4]
        push    esi
        push    0x77D07C
        call FUN_10040ecbb

        mov     esi, eax
        test    esi, esi
        jz      L_0054D507

        push    0
        push    0x7B46B8
        push    0x77D070
        mov     ecx, esi
        call FUN_100411d3e

        push    0
        push    0x7B46BC
        push    0x77D064
        mov     ecx, esi
        call FUN_100411d2b

        fld dword ptr [DAT_007b46b8]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D4AE

        mov dword ptr [DAT_007b46b8], 0x0
        jmp     L_0054D4CB

L_0054D4AE:
        fld dword ptr [DAT_007b46b8]
        fcomp dword ptr [DAT_0077d060]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D4CB
        mov dword ptr [DAT_007b46b8], 0x3d4ccccd

L_0054D4CB:
        fld dword ptr [DAT_007b46bc]
        fcomp dword ptr [DAT_007b46b8]
        fnstsw  ax
        test    ah, 1
        jz      L_0054D4EA

        mov eax, dword ptr [DAT_007b46b8]
        mov dword ptr [DAT_007b46bc], eax
        pop     esi
        ret

L_0054D4EA:
        fld dword ptr [DAT_007b46bc]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D507
        mov dword ptr [DAT_007b46bc], 0x3f800000

L_0054D507:
        pop     esi
        ret
    }


}
