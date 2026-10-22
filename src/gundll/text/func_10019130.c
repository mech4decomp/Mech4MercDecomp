/*
 * FUN_10019130 (277 B) — __stdcall, RET 0x10 (4 args).
 * Buffer/string registration helper. Calls FUN_1001ca30(arg2,arg3,0x1004a438,
 * arg4,&local0); then FUN_1002af80 three times to allocate three strings
 * (local1, local2, local3) sized from this+0x1c/0x20/0x24; then
 * FUN_1001c660 with a GUID set (0x10050560/0x10049b60/0x10049bf0/
 * 0x10049c3c) and the three strings, writing a result through arg4.
 * Frees locals via FUN_10001d60 when they differ from this+0x1c/0x20/0x24.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10019130(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a438
        push    ebp
        push    edi
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L1
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x1c]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x34], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L1
        mov     ecx, dword ptr [edi + 0x20]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L1
        mov     eax, dword ptr [edi + 0x24]
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L1
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    0x10049c3c
        push    edx
        push    0x10049bf0
        push    eax
        push    0x10049b60
        push    0x10050560
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L1
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     eax, edx
        mov     dword ptr [ecx], eax
    L1:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x1c]
        je      L2
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L2:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x20]
        je      L3
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L3:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [edi + 0x24]
        je      L4
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L4:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x10
    }
}
