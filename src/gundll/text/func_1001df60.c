/*
 * FUN_1001df60 (281 B) - __stdcall, RET 0x10 (4 args).  Buffer/string
 * parse-and-copy helper.  Calls FUN_1001c7a0(arg1,arg2,0x1004a634,arg3,
 * &local1); on success FUN_1002af80(&local2, arg1+0x20), then a series of
 * FUN_1001c660 / FUN_1002d0b0 / FUN_1001c660 calls advancing buffer
 * pointers (ebx/edi/ecx) by parsed counts, finally storing a result
 * pointer into *arg4.  On exit frees local2 via FUN_10001d60 if it
 * differs from arg1+0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __stdcall FUN_1002d0b0(void); /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1001df60(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a634
        push    ebx
        push    ebp
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L05b
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebx, [ebx + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L05b
        mov     eax, dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    0x10049d1c
        push    ecx
        push    0x10049b78
        push    0x10050d20
        lea     edx, [esp + 0x24]
        push    edx
        push    edi
        push    ebx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L05b
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x24]
        add     esi, eax
        lea     ebx, [ebx + eax*2]
        sub     edi, eax
        mov     eax, dword ptr [ebp + 0x24]
        push    eax
        push    0x10049e10
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x38], esi
        call    FUN_1002d0b0
        mov     esi, eax
        test    esi, esi
        jl      L05b
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        push    0x1004a634
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     edi, eax
        lea     ebx, [ebx + eax*2]
        add     ecx, eax
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x38], ecx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      L05b
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L05b:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebp + 0x20]
        je      L06d
        push    eax
        call    FUN_10001d60
        add     esp, 4
L06d:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
