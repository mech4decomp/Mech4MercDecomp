/*
 * FUN_10013b20 (104 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then dispatches vtable[5] (call [ecx+0x14]) with g_10075060 and GUID
 * 0x10049bf8; on success stores the returned handle into this->+0x20.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);    /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10013b20(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L1
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
    L1:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L4
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        jne     L3
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     4
    L3:
        test    eax, eax
        jl      L4
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
    L4:
        pop     esi
        pop     ecx
        ret     4
    }
}
