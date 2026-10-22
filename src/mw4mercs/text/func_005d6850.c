/*
 * FUN_005d6850 (272 B) — Node setup: sprintf name, create node, set params.
 *
 * __cdecl, RET 0 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0040ecc0(void);
extern void FUN_00411f70(void);
extern void FUN_00411d60(void);

__declspec(naked) void __cdecl FUN_005d6850(void *param_1, void *param_2)
{
    

extern int DAT_0076b420;
extern int DAT_0076d598;
__asm {
sub     esp, 0x2c
        mov     eax, dword ptr [esp + 0x30]
        push    esi
        push    eax
        lea     ecx, [esp + 0x18]
        push    0x788190
        push    ecx
        call dword ptr [DAT_0076b420]
        mov     ecx, dword ptr [esp + 0x48]
        add     esp, 0xc
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0xc], 0xbf800000
        mov     dword ptr [esp + 0x10], 0xbf800000
        mov     dword ptr [esp + 0x14], 0xbf800000
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      L68AB
        push    0x0
        lea     eax, [esp + 0xc]
        push    eax
        push    0x788184
        mov     ecx, esi
        call    FUN_00411f70
L68AB:
        fld     dword ptr [esp + 0x8]
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L694B
        fld     dword ptr [esp + 0xc]
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L694B
        fld     dword ptr [esp + 0x10]
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L694B
        push    0x0
        lea     ecx, [esp + 0x38]
        push    ecx
        push    0x774540
        mov     ecx, esi
        mov     dword ptr [esp + 0x40], 0x42a00000
        call    FUN_00411d60
        push    0x0
        lea     edx, [esp + 0x8]
        push    edx
        push    0x788178
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0x42a00000
        call    FUN_00411d60
        mov     esi, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esi]
        push    0xc
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     esi
        add     esp, 0x2c
        ret
L694B:
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [ecx]
        push    0xc
        lea     eax, [esp + 0xc]
        push    eax
        call    dword ptr [edx + 0x24]
        pop     esi
        add     esp, 0x2c
        ret
    }


}
