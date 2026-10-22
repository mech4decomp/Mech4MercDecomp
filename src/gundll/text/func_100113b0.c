/*
 * FUN_100113B0 (218 B) - __stdcall, RET 0x4.  COM-style registration helper:
 * if this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then dispatches vtable methods [obj]->vtable[5] (call [ecx+0x14]) and
 * vtable[4] (call [ecx+0x10]) with g_10075060 and GUID pointers
 * (0x10049be0 / 0x10049c54), storing two returned handles into this->+0x20
 * and +0x24.  On failure frees the first handle via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100113B0(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 8], 0
        jne     L_113dd
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
L_113dd:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L_1146f
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049be0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_11415
        test    esi, esi
        jl      L_1146f
L_11415:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c54
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_11453
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_11453:
        test    esi, esi
        jl      L_1146f
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_1146f:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_11480
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_11480:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
