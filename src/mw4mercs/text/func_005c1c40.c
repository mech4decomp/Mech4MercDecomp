/*
 * FUN_005c1c40 (136 B) — __fastcall (ECX = this).
 *
 * Calls FUN_006f4950(). If this->field_57c == _DAT_0076c5b0, returns.
 * Else computes (this->field_578 + this->field_57c) via FUN_00707e70(0)
 * and if less, calls virtual method at vtable+0xbc and zeroes field_57c.
 * Calls FUN_006f49a0().
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1c40(int param_1)
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f4949(void);
extern int DAT_0076c5b0;
extern void __cdecl FUN_006f4981(void);
extern void __cdecl FUN_00707e34(void);
extern int DAT_007f1f84;
extern void __cdecl FUN_1004151d5(void);
extern void __cdecl FUN_006f4928(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        sub     esp, 0x8
        push    edi
        push    eax
        mov     edi, ecx
        call FUN_006f4949
        fld     dword ptr [edi + 0x57c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_c6e
        call FUN_006f4981
        pop     edi
        add     esp, 0x8
        ret
    l_c6e:
        fld     dword ptr [edi + 0x578]
        push    esi
        fadd    dword ptr [edi + 0x57c]
        push    0x0
        fstp    qword ptr [esp + 0xc]
        call FUN_00707e34
        fcomp   qword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_cbd
        mov eax, dword ptr [DAT_007f1f84]
        mov     esi, dword ptr [edi + 0x170]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_1004151d5
        cmp     al, 0x1
        jnz     l_cbd
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xbc]
        mov     dword ptr [edi + 0x57c], 0x0
    l_cbd:
        call FUN_006f4928
        pop     esi
        pop     edi
        add     esp, 0x8
        ret
    }


}
