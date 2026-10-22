/*
 * FUN_100252A0 (214 B) - __stdcall, RET 0x10 (4 args).  Registration helper:
 * calls FUN_1001ca30(arg1,arg2,0x1004a7b8,arg3,&local); on success calls
 * FUN_1001c660 (10 args) then FUN_1002b140 (7 args) then FUN_1001c660 (5
 * args), advancing arg2/arg3 by parsed counts.  On success writes
 * *arg4 = ebx + local.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern int __stdcall FUN_1002b140(int a, int b, void *c, int d, int e, int f);

__declspec(naked) void __stdcall FUN_100252A0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a7b8
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001ca30
        test    eax, eax
        jl      L_536e
        mov     ecx, dword ptr [edi + 0x24]
        mov     edx, dword ptr [edi + 0x20]
        mov     eax, dword ptr [edi + 0x1c]
        mov     ebx, dword ptr [esp + 0x10]
        push    ecx
        push    0x10049c50
        push    edx
        push    0x10049e04
        push    eax
        push    0x10049bc4
        push    0x10050520
        lea     ecx, [esp + 0x2c]
        push    ecx
        sub     esi, ebx
        lea     ebp, [ebp + ebx*2]
        push    esi
        push    ebp
        call    FUN_1001c660
        add     esp, 0x28
        test    eax, eax
        jl      L_536e
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x24]
        push    edx
        lea     ebp, [ebp + eax*2]
        sub     esi, eax
        add     ebx, eax
        mov     eax, dword ptr [edi + 0x28]
        push    eax
        push    0x10049e84
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    esi
        push    ebp
        call    FUN_1002b140
        test    eax, eax
        jl      L_536e
        mov     eax, dword ptr [esp + 0x10]
        push    0x1004a7b8
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     esi, eax
        lea     ebp, [ebp + eax*2]
        push    esi
        push    ebp
        add     ebx, eax
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      L_536e
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebx, ecx
        mov     dword ptr [edx], ebx
L_536e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
