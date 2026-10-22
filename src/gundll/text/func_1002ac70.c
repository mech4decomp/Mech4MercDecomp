/*
 * FUN_1002AC70 (172 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then makes two virtual calls on the obj (vtable[4]/[5]) passing
 * g_10075060 + a string constant and an out-ptr, storing the two results
 * into this->+0x20/+0x24.  On failure frees the first out-ptr via
 * FUN_10001d60 and returns the error code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);            /* rel32 call */
extern int g_10075060;                     /* module data ptr */
extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1002AC70(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L_ac9d
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0x8
        ret     4
    L_ac9d:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L_ad01
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_ad01
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c94
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_ad01
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     4
    L_ad01:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_ad12
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_ad12:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     4
    }
}
