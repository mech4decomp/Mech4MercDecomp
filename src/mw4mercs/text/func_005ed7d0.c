/*
 * FUN_005ed7d0 (289 B) — __thiscall method (ECX = this), RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004fae10(void);
extern char __stdcall FUN_00415230(void *p);

/* extern data symbols for absolute-address operands */
extern float DAT_0076f5d8;
extern int DAT_007f2554;

__declspec(naked) void __stdcall FUN_005ed7d0(void *p1, void *p2)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x21c]
        fld     dword ptr [esi + 0x218]
        mov     ecx, dword ptr [esi + 0x220]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x5c]
        mov     edx, dword ptr [eax + 0x6c]
        fsubrp  st(1), st
        add     eax, 0x50
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x8], edx
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0xc], eax
        fld     dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x18], ecx
        fsub    dword ptr [esp + 0x18]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esi + 0x224]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        jnz     L8B8
        fld     dword ptr [esi + 0x224]
        fadd    dword ptr [DAT_0076f5d8]
        fld     st(0)
        fmul    st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jz      L887
        mov     eax, dword ptr [esi + 0x130]
        test    eax, eax
        jz      L887
        mov     ecx, dword ptr [esi + 0x12c]
        test    ecx, ecx
        jnz     L887
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xa0]
L887:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004fae10
        mov     eax, dword ptr [DAT_007f2554]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L8EA
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        pop     esi
        add     esp, 0x18
        ret     8
L8B8:
        mov     eax, dword ptr [esi + 0x130]
        fstp    st(0)
        test    eax, eax
        jz      L8D9
        mov     ecx, dword ptr [esi + 0x12c]
        test    ecx, ecx
        jnz     L8D9
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xa0]
L8D9:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004fae10
L8EA:
        pop     esi
        add     esp, 0x18
        ret     8
    }
}
