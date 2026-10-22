/*
 * FUN_10027a80 (252 B) - __stdcall, RET 0x10. String-parse/register helper:
 * FUN_1001c7a0(arg1,arg2,0x1004a50c,arg3,&local1) -> count; then
 * FUN_1002af80([edi+0x2c],&local2) and FUN_1002af80([edi+0x30],&local3);
 * then FUN_1001c660(adv_buf,arg3-count,&local2,0x100510f0,0x10049bf8,
 * [edi+0x20],0x10049cd8,[edi+0x24],0x10049e58,[edi+0x28],0x10049ce0,
 * [edi+0x20],0x10049ccc,[edi+0x24],&local2) accumulating into *arg4.
 * Frees local2/local3 via FUN_10001d60 when they differ from the object's
 * cached pointers.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10027a80(void)
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
        push    0x1004a50c
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_4c
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x2c]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x30], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_4c
        mov     ecx, dword ptr [edi + 0x30]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_4c
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x28]
        push    edx
        mov     edx, dword ptr [edi + 0x24]
        push    0x10049ccc
        push    eax
        mov     eax, dword ptr [edi + 0x20]
        push    0x10049ce0
        push    ecx
        push    0x10049e58
        push    edx
        push    0x10049cd8
        push    eax
        push    0x10049bf8
        push    0x100510f0
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x38
        test    esi, esi
        jl      L_4c
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_4c:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x2c]
        je      L_5e
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_5e:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x30]
        je      L_70
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_70:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
