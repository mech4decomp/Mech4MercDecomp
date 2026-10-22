/*
 * FUN_10018a70 (89 B) — __stdcall, RET 0x10 (4 args).
 * Object-registration helper. If this+0xc != 0 return 0xc112000d; else
 * call FUN_1001ca10(arg2,this) and, if >= 0, allocate/copy arg4 via
 * FUN_10001dd0 (returning 0x8007000e on failure), store it at this+0x20,
 * arg3 at this+0x1c, this+0x4=1, and return 0.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);
extern void __stdcall FUN_10001dd0(void);

__declspec(naked) void __stdcall FUN_10018a70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      L1
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
    L1:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L6
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L2
        test    edi, edi
        jz      L2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
    L2:
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x20], eax
        mov     byte ptr [esi + 4], 0x1
        mov     dword ptr [esi + 0x1c], edx
        mov     eax, ecx
    L6:
        pop     edi
        pop     esi
        ret     0x10
    }
}
