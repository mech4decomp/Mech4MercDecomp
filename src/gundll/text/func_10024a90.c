/*
 * FUN_10024A90 (230 B) - __stdcall, RET 0x10 (4 args).  Registration helper:
 * calls FUN_1001c920(arg1,arg2,0x1004a79c,arg3,&local0); on success calls
 * FUN_1002af80(&local1,[arg1+0x24]) and FUN_1002af80(&local2,[arg1+0x2c]),
 * then FUN_1001c660 with a 10-arg GUID/string table, advancing arg2/arg3 by
 * local0.  On success writes *arg4 = arg3slot + local0.  Frees local1/local2
 * via FUN_10001d60 when they differ from [arg1+0x24]/[arg1+0x2c].
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10024A90(void)
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
        push    0x1004a79c
        push    ebp
        push    edi
        call    FUN_1001c920
        mov     esi, eax
        test    esi, esi
        jl      L_b46
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x30], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_b46
        mov     ecx, dword ptr [edi + 0x2c]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_b46
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0x28]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    0x10049c54
        push    eax
        push    0x10049be0
        push    ecx
        push    0x10049e50
        push    0x10050398
        lea     edx, [esp + 0x2c]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_b46
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_b46:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_b58
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_b58:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x2c]
        je      L_b6a
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_b6a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
