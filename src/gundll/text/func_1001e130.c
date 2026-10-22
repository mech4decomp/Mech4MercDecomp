/*
 * FUN_1001e130 (83 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * return 0xc112000e; else call FUN_1001c770, then vtable[5] dispatch
 * (call [ecx+0x14]) with g_10075060 and GUID 0x10049d1c, storing the
 * returned handle into this->+0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);   /* rel32 call */
extern int g_10075060;            /* module data */

__declspec(naked) void __stdcall FUN_1001e130(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L14f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L14f:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L17e
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049d1c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L17e
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
L17e:
        pop     esi
        pop     ecx
        ret     4
    }
}
