/*
 * FUN_10018460 (268 B) — __stdcall, RET 0x4 (1 arg).
 * Object-registration helper. If this+0xc == 0 return 0xc112000e; else
 * call FUN_1001ca20(this), then issue three vtable calls (slots +0x14,
 * +0x10, +0x10) on the object at this+0xc passing g_10075060, a GUID
 * (0x10049bf8/0x10049b60/0x10049c00) and an out-pointer (local). Stores
 * the three returned handles at this+0x1c/0x20/0x24. On failure frees
 * locals via FUN_10001d60 and returns the error.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);
extern int g_10075060;
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10018460(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
    L1:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L6
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
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L3
        test    esi, esi
        jl      L6
    L3:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c00
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L4
        xor     esi, esi
        jmp     L5
    L4:
        test    esi, esi
        jl      L6
    L5:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        mov     dword ptr [edi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    L6:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L7
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L7:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L8
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L8:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
