/*
 * FUN_005d5bf0 (256 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Calls a virtual method, then switches on this->[0x450] to perform
 * per-state actions (set state, call virtual methods, float setup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d5bf0(void)
{
    

extern int DAT_00788160;
__asm {
sub     esp, 0x10
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x35c]
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esi + 0x450]
        cmp     ecx, 0x4
        ja      L_default
        jmp     dword ptr [ecx*4 + 0x5d5cf0]

L_case1:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x450], 0x2
        call    dword ptr [edx + 0x118]
        pop     esi
        add     esp, 0x10
        ret     4

L_case2:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x450], 0x0
        call    dword ptr [eax + 0x16c]
        mov     byte ptr [esi + 0x2fa], 0x1
        pop     esi
        add     esp, 0x10
        ret     4

L_case3:
        mov     cl, byte ptr [esi + 0x458]
        test    cl, cl
        mov     dword ptr [esi + 0x450], 0x3
        jz      L_5c73
        fld     dword ptr [eax + 0x2c4]
        jmp     L_5c79
L_5c73:
        fld     dword ptr [eax + 0x2bc]
L_5c79:
        fdivr dword ptr [DAT_00788160]
        mov     edx, dword ptr [esi]
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x8], 0xbf800000
        mov     dword ptr [esp + 0xc], 0xbf800000
        mov     dword ptr [esp + 0x10], 0xbf800000
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esp + 0x8]
        push    ecx
        push    eax
        lea     ecx, [esi + 0x444]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x1d0]
        pop     esi
        add     esp, 0x10
        ret     4

L_case4:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_default
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x450], 0x0
        call    dword ptr [edx + 0x16c]
        mov     byte ptr [esi + 0x2fa], 0x1

L_default:
        pop     esi
        add     esp, 0x10
        ret     4
    }


}
