/*
 * FUN_005d59d0 (362 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * Calls a virtual method, then switches on this->[0x41c] to set up
 * per-case float parameters and invoke another virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d59d0(void)
{
    

extern int DAT_007880f8;
extern int DAT_0078815c;
extern int DAT_0076c5b0;
__asm {
sub     esp, 0x28
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x35c]
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esi + 0x41c]
        dec     ecx
        cmp     ecx, 0x3
        ja      L_default
        jmp     dword ptr [ecx*4 + 0x5d5b3c]

L_case1:
        fld     dword ptr [eax + 0x2bc]
        xor     cl, cl
        fdivr dword ptr [DAT_007880f8]
        mov     edx, dword ptr [esi]
        mov     byte ptr [esi + 0x434], cl
        mov     byte ptr [esi + 0x435], cl
        mov     dword ptr [esi + 0x41c], 0x2
        mov     dword ptr [esp + 0x8], 0xbf800000
        push    ecx
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x10], 0xbf800000
        mov     dword ptr [esp + 0x14], 0xbf800000
        fstp    dword ptr [esp]
        fld     dword ptr [eax + 0x2bc]
        push    ecx
        fdivr dword ptr [DAT_0078815c]
        push    ecx
        lea     eax, [esi + 0x3f8]
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    eax
        call    dword ptr [edx + 0x1d0]
        pop     esi
        add     esp, 0x28
        ret

L_case2:
        fld     dword ptr [eax + 0x2bc]
        mov     edx, dword ptr [esi]
        fdivr dword ptr [DAT_007880f8]
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0x41c], 0x3
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        fstp    dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        push    ecx
        push    eax
        lea     eax, [esi + 0x404]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x1d0]
        pop     esi
        add     esp, 0x28
        ret

L_case3:
        mov     edx, dword ptr [esi + 0x42c]
        mov     ecx, 0x4
        cmp     edx, ecx
        jz      L_case4
        fld     dword ptr [eax + 0x2bc]
        push    ecx
        fdivr dword ptr [DAT_0076c5b0]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esi + 0x41c], ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        mov     dword ptr [esp + 0x2c], 0xbf800000
        fstp    dword ptr [esp]
        fld     dword ptr [eax + 0x2bc]
        push    ecx
        fdivr dword ptr [DAT_007880f8]
        push    ecx
        lea     eax, [esi + 0x410]
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    eax
        call    dword ptr [edx + 0x1d0]
        pop     esi
        add     esp, 0x28
        ret

L_case4:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x41c], 0x5
        call    dword ptr [edx + 0x1c4]

L_default:
        pop     esi
        add     esp, 0x28
        ret
    }


}
