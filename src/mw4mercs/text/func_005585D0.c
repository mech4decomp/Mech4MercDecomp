/*
 * FUN_005585d0 (381 B) — Object method dispatcher. Sets up various
 * float fields based on a mode parameter (1, 3, 4).
 *
 * __thiscall (ECX = this), 2 params (int mode, void* src).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_005585D0(void)
{
    

extern int DAT_0077d040;
extern int DAT_0076d5f0;
extern int DAT_0077d044;
extern int DAT_007748c8;
extern void __cdecl FUN_10054f1bc(void);
extern void __cdecl FUN_10041ab25(void);
extern void __cdecl FUN_1004da388(void);
extern void __cdecl FUN_1004db0a1(void);
__asm {
mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        xor     ecx, ecx
        mov     dword ptr [esi + 0x564], eax
        dec     eax
        mov     dword ptr [esi + 0x344], ecx
        jz      L_case1
        sub     eax, 2
        jz      L_case3
        dec     eax
        jnz     L_end
        /* case 4 */
        fld     dword ptr [esi + 0x520]
        mov     eax, dword ptr [esi + 0x384]
        fcomp dword ptr [DAT_0077d040]
        mov     byte ptr [eax + 0x4a0], cl
        mov     byte ptr [eax + 0x4a1], 1
        fnstsw  ax
        test    ah, 0x41
        jnz     L_skip1
        mov     dword ptr [esi + 0x520], 0x42200000
L_skip1:
        fld     dword ptr [esi + 0x520]
        mov     edx, 0x40000000
        fcomp dword ptr [DAT_0076d5f0]
        fnstsw  ax
        test    ah, 1
        jz      L_skip2
        mov     dword ptr [esi + 0x520], edx
L_skip2:
        fld     dword ptr [esi + 0x518]
        fcomp dword ptr [DAT_0077d044]
        fnstsw  ax
        test    ah, 1
        jz      L_skip3
        mov     dword ptr [esi + 0x518], 0xc1a00000
L_skip3:
        fld     dword ptr [esi + 0x518]
        mov     ecx, 0x41a00000
        fcomp dword ptr [DAT_007748c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_skip4
        mov     dword ptr [esi + 0x518], ecx
L_skip4:
        fld     dword ptr [esi + 0x51c]
        fcomp dword ptr [DAT_0076d5f0]
        fnstsw  ax
        test    ah, 1
        jz      L_skip5
        mov     dword ptr [esi + 0x51c], edx
L_skip5:
        fld     dword ptr [esi + 0x51c]
        fcomp dword ptr [DAT_007748c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_skip6
        mov     dword ptr [esi + 0x51c], ecx
L_skip6:
        mov     ecx, esi
        call FUN_10054f1bc
        pop     esi
        ret     8

L_case3:
        mov     eax, dword ptr [esi + 0x384]
        mov     byte ptr [eax + 0x4a0], cl
        mov     byte ptr [eax + 0x4a1], cl
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax + 0x28]
        mov     dword ptr [esi + 0x518], ecx
        mov     ecx, dword ptr [eax + 0x2c]
        mov     dword ptr [esi + 0x51c], edx
        mov     dword ptr [esi + 0x520], ecx
        jmp     L_common

L_case1:
        mov     eax, dword ptr [esi + 0x384]
        mov     byte ptr [eax + 0x4a0], cl
        mov     byte ptr [eax + 0x4a1], cl
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax + 0x24]
        mov     ecx, dword ptr [eax + 0x28]
        mov     dword ptr [esi + 0x518], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esi + 0x51c], ecx
        mov     dword ptr [esi + 0x520], edx

L_common:
        add     eax, 0x54
        push    eax
        lea     ecx, [esi + 0x524]
        call FUN_10041ab25
        mov     esi, dword ptr [esi + 0x384]
        mov     ecx, esi
        call FUN_1004da388
        mov     ecx, esi
        call FUN_1004db0a1

L_end:
        pop     esi
        ret     8
    }


}
