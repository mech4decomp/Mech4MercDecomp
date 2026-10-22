/*
 * FUN_10012B90 (134 B) - __stdcall, RET 0x10.  If this->obj(+0xc) is non-null
 * returns 0xC112000D; else calls FUN_1001ca10(arg2, this), then
 * FUN_1002c6f0(arg3, arg4, &local).  On success stores +0x1c=arg3,
 * +0x20=local, +4=1.  On failure frees via FUN_1002c810.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);
extern void __cdecl FUN_1002c6f0(void);
extern void __cdecl FUN_1002c810(void);

__declspec(naked) void __stdcall FUN_10012B90(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        je      L_12bb3
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x10
L_12bb3:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        call    FUN_1001ca10
        mov     ebx, dword ptr [esp + 0x1c]
        mov     esi, eax
        test    esi, esi
        jl      L_12bf5
        mov     ecx, dword ptr [esp + 0x20]
        push    ebx
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_1002c6f0
        mov     esi, eax
        test    esi, esi
        jl      L_12bf5
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x1c], ebx
        mov     dword ptr [edi + 0x20], eax
        mov     byte ptr [edi + 4], 1
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x10
L_12bf5:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_12c0d
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   cl
        push    ebx
        push    eax
        push    ecx
        call    FUN_1002c810
L_12c0d:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
