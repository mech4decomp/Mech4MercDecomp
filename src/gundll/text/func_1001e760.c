/*
 * FUN_1001e760 (205 B) - __stdcall, RET 0x10 (4 args).  Buffer/string
 * parse-and-copy helper.  Calls FUN_1001c7a0(arg1,arg2,0x1004a668,arg3,
 * &local1); on success FUN_1002af80(&local2, arg1+0x30), then a big
 * FUN_1001c660 call with GUIDs 0x10049b34/0x10049c70/0x10049c7c/
 * 0x10049b58/0x10049b5c and fields from arg1+0x20..0x30, finally storing
 * a result pointer into *arg4.  On exit frees local2 via FUN_10001d60 if
 * it differs from arg1+0x30.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1001e760(void)
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
        push    0x1004a668
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L80f
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x30]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L80f
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x2c]
        mov     edx, dword ptr [edi + 0x28]
        push    eax
        mov     eax, dword ptr [edi + 0x24]
        push    0x10049b5c
        push    ecx
        mov     ecx, dword ptr [edi + 0x20]
        push    0x10049b58
        push    edx
        push    0x10049c7c
        push    eax
        push    0x10049c70
        push    ecx
        push    0x10049b34
        push    0x10050d50
        lea     edx, [esp + 0x3c]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x38
        test    esi, esi
        jl      L80f
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L80f:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x30]
        je      L821
        push    eax
        call    FUN_10001d60
        add     esp, 4
L821:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
