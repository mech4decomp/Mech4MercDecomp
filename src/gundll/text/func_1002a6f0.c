/*
 * FUN_1002a6f0 (332 B) - __stdcall, RET 0x10 (4 args). Registration helper:
 * calls FUN_1001ca30(arg1, arg2, 0x1004a5b0, arg3, &local0), then
 * FUN_1002af80([arg1+0x1c], &local1), FUN_1002af80([arg1+0x20], &local2),
 * FUN_1002af80([arg1+0x24], &local3), FUN_1002af80([arg1+0x28], &local4),
 * then FUN_1001c660(...) advancing buffer pointers (ebx/ebp) by parsed
 * counts. On success stores (arg3_slot+local0) into *arg4. Frees
 * local1..local4 via FUN_10001d60 if they differ from [arg1+0x1c..0x28].
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002a6f0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        xor     eax, eax
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebp
        push    0x1004a5b0
        push    ebx
        push    edi
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_a7e8
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x1c]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x38], eax
        lea     ebx, [ebx + eax*2]
        sub     ebp, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_a7e8
        mov     ecx, dword ptr [edi + 0x20]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_a7e8
        mov     eax, dword ptr [edi + 0x24]
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_a7e8
        mov     edx, dword ptr [edi + 0x28]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_a7e8
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    0x10049ccc
        push    ecx
        push    0x10049c3c
        push    edx
        push    0x10049bf0
        push    eax
        push    0x10049b60
        push    0x100512b8
        lea     ecx, [esp + 0x34]
        push    ecx
        push    ebp
        push    ebx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x30
        test    esi, esi
        jl      L_a7e8
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_a7e8:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x1c]
        je      L_a7fa
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a7fa:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x20]
        je      L_a80c
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a80c:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_a81e
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a81e:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_a830
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a830:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x10
    }
}
