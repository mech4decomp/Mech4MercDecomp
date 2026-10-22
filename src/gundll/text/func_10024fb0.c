/*
 * FUN_10024FB0 (111 B) - __stdcall, RET 0x10 (4 args).  Registration helper:
 * calls FUN_1001c920(arg1,arg2,0x1004a784,arg3,&local); on success calls
 * FUN_1001c660 (6 args) with [arg1+0x24] and GUIDs, advancing arg2/arg3 by
 * local.  On success writes *arg4 = ebp + local.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10024FB0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a784
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_5017
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x24]
        push    edx
        push    0x10049e58
        lea     ecx, [edi + eax*2]
        sub     esi, eax
        mov     ebp, eax
        push    0x10050298
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x18
        test    eax, eax
        jl      L_5017
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L_5017:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
