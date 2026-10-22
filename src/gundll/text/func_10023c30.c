/*
 * FUN_10023C30 (83 B) - __stdcall, RET 0x4.  COM-style registration helper:
 * if this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then dispatches a vtable method at [obj]->vtable[5] (call [ecx+0x14])
 * passing a GUID pointer (0x10049bc4) and g_10075060; stores the returned
 * handle into this->+0x20.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern int g_10075060;
extern char g_10049bc4[];   /* GUID/string data, push offset */

__declspec(naked) void __stdcall FUN_10023C30(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L_c4f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_c4f:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L_c7e
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049bc4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_c7e
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x20], ecx
L_c7e:
        pop     esi
        pop     ecx
        ret     4
    }
}
