/*
 * FUN_10029790 (297 B) - __stdcall, RET 0x10 (4 args). Registration helper:
 * calls FUN_1001ca30(arg1, arg2, 0x1004a574, arg3, &local0), then
 * FUN_1002af80([arg1+0x24], &local1), then FUN_1001c660(...) and
 * FUN_1002b140(...) advancing buffer pointers (ebp/edi) by parsed counts,
 * then FUN_1001c660(...) again. On success stores (arg3+local0) into *arg4.
 * Frees local1 via FUN_10001d60 if it differs from [arg1+0x24].
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern int __stdcall FUN_1002b140(int a, int b, void *c, int d, int e, int f);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10029790(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a574
        push    ebp
        push    ebx
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_989b
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_989b
        mov     eax, dword ptr [ebx + 0x28]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebx + 0x1c]
        push    eax
        push    0x10049bf8
        push    ecx
        push    0x10049b60
        push    edx
        push    0x10049c50
        push    0x10051228
        lea     eax, [esp + 0x2c]
        push    eax
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_989b
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ebx + 0x20]
        add     ecx, eax
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [ebx + 0x1c]
        push    ecx
        push    edx
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        push    0x10049e64
        lea     eax, [esp + 0x1c]
        push    eax
        push    edi
        push    ebp
        call    FUN_1002b140
        mov     esi, eax
        test    esi, esi
        jl      L_989b
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        add     ecx, eax
        push    0x1004a574
        mov     dword ptr [esp + 0x28], ecx
        push    0x10050244
        lea     ecx, [esp + 0x18]
        push    ecx
        sub     edi, eax
        lea     ebp, [ebp + eax*2]
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      L_989b
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_989b:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebx + 0x24]
        je      L_98ad
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_98ad:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
