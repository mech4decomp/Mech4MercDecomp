/*
 * FUN_100183d0 (131 B) — __stdcall, RET 0x14 (5 args).
 * Object-registration helper. If this+0xc != 0 return 0xc112000d; else
 * call FUN_1001ca10(arg2,this) and, if >= 0, allocate/copy two strings
 * (arg4, arg5) via FUN_10001dd0 and store them at this+0x20/0x24 along
 * with arg3 at this+0x1c and this+0x4=1. On allocation failure frees
 * via FUN_10001d60 and returns 0x8007000e.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);
extern void __stdcall FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_100183d0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      L1
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x14
    L1:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L6
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jne     L2
        test    ebx, ebx
        jne     L4
    L2:
        mov     ebx, dword ptr [esp + 0x20]
        push    ebx
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L3
        test    ebx, ebx
        jne     L4
    L3:
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x20], edi
        pop     edi
        mov     byte ptr [esi + 4], 0x1
        mov     dword ptr [esi + 0x1c], edx
        mov     dword ptr [esi + 0x24], ecx
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x14
    L4:
        test    edi, edi
        mov     esi, 0x8007000e
        jz      L5
        push    edi
        call    FUN_10001d60
        add     esp, 4
    L5:
        mov     eax, esi
    L6:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
