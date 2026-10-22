/*
 * FUN_5e00feb0 (256 B) — DirectDraw surface format-set wrapper (large).
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e001b60(void);

__declspec(naked) void __stdcall FUN_5e00feb0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        sub     esp, 0x218
        mov     ecx, 0x4
        xor     eax, eax
        push    esi
        push    edi
        mov     edi, 0x5e035730
        mov     esi, edx
        repe    cmpsd
        jnz     loc_ff70
        mov     edx, 0xfc
        mov     ecx, 0x3e
        lea     edi, [esp + 0x128]
        mov     dword ptr [esp + 0x124], edx
        rep     stosd
        mov     ecx, 0x3e
        lea     edi, [esp + 0x2c]
        mov     dword ptr [esp + 0x28], edx
        mov     esi, 0x20
        rep     stosd
        mov     ecx, 0x7
        lea     edi, [esp + 0xc]
        mov     dword ptr [esp + 0x8], esi
        lea     edx, [esp + 0x124]
        rep     stosd
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edx
        call    FUN_5e001b60
        xor     eax, eax
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0x230]
        mov     dword ptr [esp + 0x8], esi
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x14], 0x400
        mov     dword ptr [esp + 0x1c], 0x10
        mov     dword ptr [esp + 0x24], 0xffff
        call    dword ptr [esp + 0x234]
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x218
        ret     0x10
loc_ff70:
        mov     eax, dword ptr [esp + 0x224]
        mov     eax, dword ptr [eax + 0x1c]
        test    eax, eax
        jz      loc_ffa0
        mov     esi, dword ptr [esp + 0x230]
        mov     ecx, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [esp + 0x230]
        push    esi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
        pop     edi
        pop     esi
        add     esp, 0x218
        ret     0x10
loc_ffa0:
        pop     edi
        mov     eax, 0x80004005
        pop     esi
        add     esp, 0x218
        ret     0x10
    }
}
