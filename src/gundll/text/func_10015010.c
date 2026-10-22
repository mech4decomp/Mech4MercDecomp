/*
 * FUN_10015010 (104 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then a vtable[5] dispatch (call [ecx+0x14]) with g_10075060 and GUID
 * 0x10049bf8, storing the returned handle into this->+0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10015010(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L_1502f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_1502f:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L_15073
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
        jne     L_15068
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     4
L_15068:
        test    eax, eax
        jl      L_15073
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
L_15073:
        pop     esi
        pop     ecx
        ret     4
    }
}
