/*
 * FUN_10029fc0 (353 B) - __stdcall, RET 0x10 (4 args). Registration helper:
 * calls FUN_1001ca30(arg1, arg2, 0x1004a58c, arg3, &local0), then
 * FUN_1002af80([arg1+0x24], &local1) and FUN_1002af80([arg1+0x28], &local2),
 * then FUN_1001c660(...) and FUN_1002b140(...) advancing buffer pointers
 * (ebp/edi) by parsed counts, then FUN_1001c660(...) again. On success stores
 * (arg3+local0) into *arg4. Frees local1/local2 via FUN_10001d60 if they
 * differ from [arg1+0x24]/[arg1+0x28].
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern int __stdcall FUN_1002b140(int a, int b, void *c, int d, int e, int f);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10029fc0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a58c
        push    ebp
        push    ebx
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_a0f1
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x30], eax
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_a0f1
        mov     ecx, dword ptr [ebx + 0x28]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_a0f1
        mov     edx, dword ptr [ebx + 0x2c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [ebx + 0x1c]
        push    0x10049bf8
        push    eax
        push    0x10049c00
        push    ecx
        push    0x10049b60
        push    edx
        push    0x10049c50
        push    0x10051268
        lea     eax, [esp + 0x34]
        push    eax
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x30
        test    esi, esi
        jl      L_a0f1
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebx + 0x20]
        add     ecx, eax
        mov     dword ptr [esp + 0x28], ecx
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
        jl      L_a0f1
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        add     ecx, eax
        push    0x1004a58c
        mov     dword ptr [esp + 0x2c], ecx
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
        jl      L_a0f1
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_a0f1:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebx + 0x24]
        je      L_a103
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a103:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [ebx + 0x28]
        je      L_a115
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a115:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
