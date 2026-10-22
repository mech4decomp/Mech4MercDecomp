/*
 * FUN_005c59b0 (174 B) — __thiscall, RET 0. Compares fields and does
 * double-precision timing math.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __stdcall FUN_005c59b0(void)
{
    

extern int DAT_0076d970;
extern int DAT_00787950;
__asm {
sub     esp, 0x8
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x364]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L_5a4a
        cmp     byte ptr [eax + 0x1a], 0x1
        jz      L_5a4a
        mov     eax, dword ptr [esi + 0x368]
        cmp     eax, edi
        jz      L_59e3
        cmp     byte ptr [eax + 0x3c], 0x1
        jnz     L_59e3
        cmp     dword ptr [eax + 0x68], 0x6
        jnz     L_59f7
L_59e3:
        mov     dword ptr [esi + 0x694], edi
        mov     dword ptr [esi + 0x698], edi
        pop     edi
        mov     al, 0x1
        pop     esi
        add     esp, 0x8
        ret
L_59f7:
        fld     qword ptr [esi + 0x694]
        fcomp qword ptr [DAT_0076d970]
        fnstsw  ax
        test    ah, 0x40
        jz      L_5a16
        push    edi
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x694]
L_5a16:
        fld dword ptr [DAT_00787950]
        push    edi
        fadd    qword ptr [esi + 0x694]
        fstp    qword ptr [esp + 0xc]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_5a42
        pop     edi
        mov     eax, 0x1
        pop     esi
        add     esp, 0x8
        ret
L_5a42:
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x8
        ret
L_5a4a:
        mov     dword ptr [esi + 0x694], edi
        mov     dword ptr [esi + 0x698], edi
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x8
        ret
    }


}
