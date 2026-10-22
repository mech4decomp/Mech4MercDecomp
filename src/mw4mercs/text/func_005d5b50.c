/*
 * FUN_005d5b50 (148 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * Calls virtual methods on a sub-object, then sets this->[0x450]=4 and
 * invokes virtual method at vtable+0x1d0 with float params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d5b50(void)
{
    

extern int DAT_00788160;
__asm {
sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        mov     ebx, eax
        call    dword ptr [edx + 0xb0]
        mov     al, byte ptr [esi + 0x458]
        test    al, al
        mov     dword ptr [esi + 0x450], 0x4
        jz      L_5b91
        fld     dword ptr [ebx + 0x2c4]
        jmp     L_5b97
L_5b91:
        fld     dword ptr [ebx + 0x2bc]
L_5b97:
        fdivr dword ptr [DAT_00788160]
        mov     eax, dword ptr [esi]
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        fst     dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    ecx
        lea     edx, [esi + 0x444]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x1d0]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret
    }


}
