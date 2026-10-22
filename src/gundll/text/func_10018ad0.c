/*
 * FUN_10018ad0 (218 B) — __stdcall, RET 0x4 (1 arg).
 * Object-registration helper. If this+0xc == 0 return 0xc112000e; else
 * call FUN_1001ca20(this), then issue two vtable calls (slots +0x14,
 * +0x10) on the object at this+0xc passing g_10075060, a GUID
 * (0x10049bf8/0x10049c34) and an out-pointer (local). Stores the two
 * returned handles at this+0x1c/0x20. On failure frees local0 via
 * FUN_10001d60 and returns the error.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);
extern int g_10075060;
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10018ad0(void)
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
        jne     L1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
    L1:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L6
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L2
        test    esi, esi
        jl      L6
    L2:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c34
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L4
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    L4:
        test    esi, esi
        jl      L6
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    L6:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L7
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L7:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
