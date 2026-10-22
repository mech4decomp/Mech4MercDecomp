/*
 * FUN_10018d80 (104 B) — __stdcall, RET 0x4 (1 arg).
 * Object-registration helper. If this+0xc == 0 return 0xc112000e; else
 * call FUN_1001ca20(this), then issue a vtable call (slot +0x14) on the
 * object at this+0xc passing g_10075060, GUID 0x10049bf8 and an
 * out-pointer (local). Stores the returned handle at this+0x1c and
 * returns 0 on success (0xc1120007) or the error.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10018d80(void)
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
        call    FUN_1001ca20
        test    eax, eax
        jl      L6
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
        jne     L4
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x1c], ecx
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     4
    L4:
        test    eax, eax
        jl      L6
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x1c], ecx
    L6:
        pop     esi
        pop     ecx
        ret     4
    }
}
