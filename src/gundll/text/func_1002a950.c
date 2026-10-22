/*
 * FUN_1002A950 (236 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20,
 * then makes three virtual calls on the obj (vtable[4]/[5]) passing
 * g_10075060 + a string constant and an out-ptr, storing the three
 * results into this->+0x1c/+0x20/+0x24.  On failure frees the partial
 * out-ptrs via FUN_10001d60 and returns the error code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);    /* rel32 call */
extern int g_10075060;                     /* module data ptr */
extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1002A950(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L_985
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
    L_985:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_a10
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
        jl      L_a10
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_a10
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c34
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_a10
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        mov     dword ptr [edi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    L_a10:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_a21
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_a21:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_a32
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_a32:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
