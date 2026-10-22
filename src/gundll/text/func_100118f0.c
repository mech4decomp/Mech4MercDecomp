/*
 * FUN_100118F0 (137 B) - __stdcall, RET 0x14.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3), then FUN_1002c6f0(&local, arg5, arg4);
 * on success stores +0x24=arg4, +0x28=local, +4=1.  On failure frees via
 * FUN_1002c810 when local is non-null.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */
extern void __cdecl FUN_1002c6f0(void);   /* rel32 call */
extern void __cdecl FUN_1002c810(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100118F0(void)
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
        je      L_11913
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x14
L_11913:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        call    FUN_1001c8b0
        mov     ebx, dword ptr [esp + 0x20]
        mov     esi, eax
        test    esi, esi
        jl      L_11958
        mov     edx, dword ptr [esp + 0x24]
        push    ebx
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_1002c6f0
        mov     esi, eax
        test    esi, esi
        jl      L_11958
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x24], ebx
        mov     byte ptr [edi + 4], 1
        mov     dword ptr [edi + 0x28], ecx
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x14
L_11958:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_11970
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    ebx
        push    eax
        push    edx
        call    FUN_1002c810
L_11970:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
