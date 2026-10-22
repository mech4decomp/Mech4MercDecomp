/*
 * FUN_10024DC0 (205 B) - __stdcall, RET 0x10 (4 args).  Registration helper:
 * calls FUN_1001c920(arg1,arg2,0x1004a790,arg3,&local); on success calls
 * FUN_1001c660 (8 args) then FUN_1002b140 (7 args) then FUN_1001c660 (5
 * args), advancing arg2/arg3 by parsed counts.  On success writes
 * *arg4 = ebx + local.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern int __stdcall FUN_1002b140(int a, int b, void *c, int d, int e, int f);

__declspec(naked) void __stdcall FUN_10024DC0(void)
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
        push    0x1004a790
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_e85
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [edi + 0x24]
        mov     ebx, dword ptr [esp + 0x10]
        push    ecx
        push    0x10049c50
        push    edx
        push    0x10049e04
        push    0x10051048
        lea     eax, [esp + 0x24]
        push    eax
        sub     esi, ebx
        lea     ebp, [ebp + ebx*2]
        push    esi
        push    ebp
        call    FUN_1001c660
        add     esp, 0x20
        test    eax, eax
        jl      L_e85
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [edi + 0x2c]
        push    ecx
        push    edx
        lea     ebp, [ebp + eax*2]
        sub     esi, eax
        push    0x10049e84
        add     ebx, eax
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        push    ebp
        call    FUN_1002b140
        test    eax, eax
        jl      L_e85
        mov     eax, dword ptr [esp + 0x10]
        push    0x1004a790
        push    0x10050244
        lea     ecx, [esp + 0x18]
        push    ecx
        sub     esi, eax
        lea     ebp, [ebp + eax*2]
        push    esi
        push    ebp
        add     ebx, eax
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      L_e85
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        add     ebx, edx
        mov     dword ptr [ecx], ebx
L_e85:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
