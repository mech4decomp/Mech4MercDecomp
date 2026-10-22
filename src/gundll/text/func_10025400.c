/*
 * FUN_10025400 (193 B) - __stdcall, RET 0x1c (7 args).  Registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001ca10(arg2, this), then duplicates arg4 via FUN_10001dd0; on
 * success calls FUN_1002b670(arg6, arg7, &local) and stores +0x1c=arg3,
 * +0x20=dup, +0x24=arg5, +0x28=arg6, +0x2c=local, +4=1.  On failure frees
 * the dup via FUN_10001d60 and calls FUN_1002b6d0(arg6, local, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void); /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern void __stdcall FUN_1002b670(void);
extern void __stdcall FUN_1002b6d0(void);

__declspec(naked) void __stdcall FUN_10025400(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0x10], 0
        je      L_5425
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x1c
L_5425:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    esi
        call    FUN_1001ca10
        mov     ebp, dword ptr [esp + 0x2c]
        mov     edi, eax
        test    edi, edi
        jl      L_5460
        mov     edi, dword ptr [esp + 0x24]
        push    edi
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jne     L_5482
        test    edi, edi
        je      L_5482
        mov     edi, 0x8007000e
L_5453:
        test    ebx, ebx
        je      L_5460
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_5460:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_5478
        mov     edx, dword ptr [esi + 0xc]
        push    ebp
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002b6d0
L_5478:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x1c
L_5482:
        mov     ecx, dword ptr [esp + 0x30]
        push    ebp
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_1002b670
        mov     edi, eax
        test    edi, edi
        jl      L_5453
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x28], ebp
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x2c], edx
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x1c
    }
}
