/*
 * FUN_10018c10 (178 B) — __stdcall, RET 0x10 (4 args).
 * Buffer/string registration helper. Calls FUN_1001ca30(arg1,arg2,0x1004a418,
 * arg3,&local0); then FUN_1002af80 to allocate a string (local1) sized
 * from this+0x20; then FUN_1001c660 with a GUID set (0x1005033c/
 * 0x10049bf8/0x10049c34) and the string, writing a result through arg4.
 * Frees local1 via FUN_10001d60 when it differs from this+0x20.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10018c10(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a418
        push    ebp
        push    edi
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L1
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L1
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x1c]
        push    eax
        push    0x10049c34
        push    ecx
        push    0x10049bf8
        push    0x1005033c
        lea     edx, [esp + 0x24]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L1
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
    L1:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x20]
        je      L2
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L2:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
