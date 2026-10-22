/*
 * FUN_100224f0 (134 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770, then
 * dispatches vtable[5] (call [ecx+0x14]) twice with g_10075060 and GUIDs
 * 0x10049bc4 / 0x10049c2c, storing two handles into this+0x20/0x24.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100224f0(void)
{
    __asm {
        sub     esp, 8
        push    esi
        mov     esi, dword ptr [esp+0x10]
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        mov     dword ptr [esp+4], 0
        mov     dword ptr [esp+8], 0
        jne     L_51b
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
L_51b:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L_6f
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc4
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        test    eax, eax
        jl      L_6f
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c2c
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        test    eax, eax
        jl      L_6f
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [esp+8]
        mov     dword ptr [esi+0x20], ecx
        mov     dword ptr [esi+0x24], edx
L_6f:
        pop     esi
        add     esp, 8
        ret     4
    }
}
