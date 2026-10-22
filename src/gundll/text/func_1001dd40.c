/*
 * FUN_1001dd40 (173 B) - __stdcall, RET 0x14 (5 args). COM object
 * registration/init helper. If (this+0xc)!=0 return 0xc112000d; else
 * call FUN_1001c760(this, arg2); on success clone arg3 via FUN_10001dd0,
 * on failure set 0x8007000e and free; then FUN_1002d770(local, obj!=0);
 * on the success path call FUN_1002d510(&local, arg4), store results into
 * this+0x20/0x24/0x28 and set this+4=1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void);            /* rel32 call */
extern void __cdecl FUN_10001d60(void);              /* rel32 call */
extern void __stdcall FUN_1002d770(void);            /* rel32 call */
extern void __stdcall FUN_1002d510(void);            /* rel32 call */

__declspec(naked) void __stdcall FUN_1001dd40(void)
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
        je      L63
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x14
L63:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        call    FUN_1001c760
        mov     esi, eax
        test    esi, esi
        jl      L9a
        mov     esi, dword ptr [esp + 0x1c]
        push    esi
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jne     Lba
        test    esi, esi
        je      Lba
        mov     esi, 0x8007000e
L8d:
        test    ebx, ebx
        je      L9a
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L9a:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      Lb1
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002d770
Lb1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x14
Lba:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_1002d510
        mov     esi, eax
        test    esi, esi
        jl      L8d
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [edi + 0x20], ebx
        mov     dword ptr [edi + 0x24], eax
        mov     byte ptr [edi + 4], 1
        mov     dword ptr [edi + 0x28], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
