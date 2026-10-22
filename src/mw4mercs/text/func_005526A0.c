/*
 * FUN_005526a0 (218 B) — Computes a float value based on object state.
 *
 * Starts with 1.0f, adjusts based on virtual method calls and
 * object fields. Returns clamped value (minimum 0.0f from 0x0076d5ec).
 *
 * __stdcall, RET 8 (two stack params: param1, param2)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_005faf20(int param);
extern int __stdcall FUN_00415230(int param1, int param2);

__declspec(naked) void __stdcall FUN_005526a0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_0076d064;
extern int DAT_007f268c;
extern int DAT_0076d5ec;
__asm {
push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0x0c]
        mov     ecx, esi
        mov     dword ptr [esp + 0x04], 0x3f800000
        call    FUN_005faf20
        test    al, al
        jz      label_0x5526d4
        mov     eax, dword ptr [esi + 0x3d8]
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x04]
        fld dword ptr [DAT_0076d064]
        fsub    dword ptr [eax + 0x38]
        fstp    dword ptr [esp + 0x04]

label_0x5526d4:
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        jz      label_0x552756
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x04]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      label_0x552756
        mov     ecx, esi
        call    FUN_005faf20
        test    al, al
        jz      label_0x552713
        mov     eax, dword ptr [esi + 0x3d8]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x04]
        fld     dword ptr [esp + 0x04]
        fsub    dword ptr [eax + 0x34]
        fstp    dword ptr [esp + 0x04]

label_0x552713:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x68]
        test    al, al
        jz      label_0x552738
        mov     eax, dword ptr [esi + 0x3e0]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x04]
        fld     dword ptr [esp + 0x04]
        fadd    dword ptr [eax + 0x34]
        fstp    dword ptr [esp + 0x04]

label_0x552738:
        mov     esi, dword ptr [esi + 0x3e8]
        test    esi, esi
        jz      label_0x552756
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x04]
        fld     dword ptr [esp + 0x04]
        fadd    dword ptr [eax + 0x34]
        fstp    dword ptr [esp + 0x04]

label_0x552756:
        fld     dword ptr [esp + 0x04]
        pop     esi
        fcomp dword ptr [DAT_0076d5ec]
        fnstsw  ax
        test    ah, 0x01
        jz      label_0x552772
        fld dword ptr [DAT_0076d5ec]
        pop     ecx
        ret     0x08

label_0x552772:
        /* __emit: MSVC6 encodes fld dword ptr [esp+0] as D9 04 24 (no disp), not D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        pop     ecx
        ret     0x08
    }


}
