/*
 * FUN_10018e00 (111 B) — __stdcall, RET 0x10 (4 args).
 * Buffer/string registration helper. Calls FUN_1001ca30(arg1,arg2,0x1004a424,
 * arg3,&local0); then FUN_1001c660 with a GUID set (0x10050298/
 * 0x10049bf8) and buffer pointers derived from arg2/arg3/local0, writing
 * a result through arg4.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1001c660(void);

__declspec(naked) void __stdcall FUN_10018e00(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a424
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001ca30
        test    eax, eax
        jl      L1
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x1c]
        push    edx
        push    0x10049bf8
        lea     ecx, [edi + eax*2]
        sub     esi, eax
        mov     ebp, eax
        push    0x10050298
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x18
        test    eax, eax
        jl      L1
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
    L1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
