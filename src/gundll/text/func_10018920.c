/*
 * FUN_10018920 (221 B) — __stdcall, RET 0x10 (4 args).
 * Buffer/string registration helper. Calls FUN_1001ca30(arg1,arg2,0x1004a410,
 * arg3,&local0); then FUN_1002af80 twice to allocate two strings (local1,
 * local2) sized from this+0x1c/0x20; then FUN_1001c660 with a GUID set
 * (0x10050404/0x10049b60/0x10049c00) and the two strings, writing a result
 * through arg4. Frees locals via FUN_10001d60 when they differ from
 * this+0x1c/0x20.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10018920(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a410
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
        mov     dword ptr [esp + 0x30], eax
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
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    0x10049c00
        push    eax
        push    0x10049b60
        push    0x10050404
        lea     ecx, [esp + 0x24]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L1
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
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
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
