/*
 * FUN_10022ca0 (217 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770, then
 * dispatches vtable[5] (call [ecx+0x14]) four times with g_10075060 and GUIDs
 * 0x10049bc4/0x10049bc8/0x10049bcc/0x10049be0, storing four handles into
 * this+0x20..+0x2c.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10022ca0(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        mov     esi, dword ptr [esp+0x18]
        mov     eax, dword ptr [esi+0xc]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp+8], edi
        mov     dword ptr [esp+0xc], edi
        mov     dword ptr [esp+0x10], edi
        mov     dword ptr [esp+0x14], edi
        jne     L_ccf
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0x10
        ret     4
L_ccf:
        push    esi
        call    FUN_1001c770
        cmp     eax, edi
        jl      L_d71
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc4
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        cmp     eax, edi
        jl      L_d71
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc8
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        cmp     eax, edi
        jl      L_d71
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bcc
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        cmp     eax, edi
        jl      L_d71
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049be0
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        cmp     eax, edi
        jl      L_d71
        mov     ecx, dword ptr [esp+8]
        mov     edx, dword ptr [esp+0xc]
        mov     dword ptr [esi+0x20], ecx
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esi+0x24], edx
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x28], ecx
        mov     dword ptr [esi+0x2c], edx
L_d71:
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     4
    }
}
