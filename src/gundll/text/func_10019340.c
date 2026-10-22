/*
 * FUN_10019340 (148 B) — __stdcall, RET 0x4 (1 arg).
 * Object-registration helper. If this+0xc == 0 return 0xc112000e; else
 * call FUN_1001c770(this), then call FUN_1002d200(obj, g_10075060,
 * 0x10049e10, &local) and store the returned handle at this+0x20. On
 * failure frees local via FUN_1002d770(local, obj!=0).
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);
extern int g_10075060;
extern void __stdcall FUN_1002d200(void);
extern void __cdecl FUN_1002d770(void);

__declspec(naked) void __stdcall FUN_10019340(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
    L1:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L6
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 8]
        push    eax
        push    0x10049e10
        push    ecx
        push    edx
        call    FUN_1002d200
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L4
        mov     eax, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x20], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    L4:
        test    esi, esi
        jl      L6
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x20], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    L6:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      L7
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   cl
        push    eax
        push    ecx
        call    FUN_1002d770
    L7:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
