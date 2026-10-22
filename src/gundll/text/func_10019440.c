/*
 * FUN_10019440 (176 B) — __stdcall, RET 0x10 (4 args).
 * Buffer/string registration helper. Calls FUN_1001c7a0(arg2,arg3,0x1004a5cc,
 * arg4,&local0); then FUN_1001c660 with 0x100502fc and buffer pointers
 * derived from arg3/arg4/local0; then FUN_1002d0b0 with 0x10049e10 and
 * this+0x20; then FUN_1001c660 with 0x10050244/0x1004a5cc, writing a
 * result through arg4.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1001c660(void);
extern void __stdcall FUN_1002d0b0(void);

__declspec(naked) void __stdcall FUN_10019440(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a5cc
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      L1
        mov     edi, dword ptr [esp + 0x10]
        push    0x100502fc
        lea     ecx, [esp + 0x14]
        push    ecx
        sub     esi, edi
        lea     ebx, [ebx + edi*2]
        push    esi
        push    ebx
        call    FUN_1001c660
        add     esp, 0x10
        test    eax, eax
        jl      L1
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x20]
        push    edx
        lea     ebx, [ebx + eax*2]
        sub     esi, eax
        push    0x10049e10
        add     edi, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        push    ebx
        call    FUN_1002d0b0
        test    eax, eax
        jl      L1
        mov     eax, dword ptr [esp + 0x10]
        push    0x1004a5cc
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     esi, eax
        lea     ecx, [ebx + eax*2]
        push    esi
        push    ecx
        add     edi, eax
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      L1
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     edi, ecx
        mov     dword ptr [edx], edi
    L1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
