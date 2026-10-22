/*
 * FUN_1001BE80 (104 B) - __stdcall, RET 0xc.  Registers a string via
 * FUN_1001b280 / FUN_10037b0e.  If arg1==0 uses arg2+0x84; if arg1!=0 and
 * arg2==0 uses a default string (0x10055024); else compares arg2+0x84 vs
 * arg1+0x84 via FUN_10037b0e before registering.  Returns 1 on success.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int  __cdecl FUN_1001b280(void);     /* rel32 call, ecx=this, 2 args */
extern void __cdecl FUN_10037b0e(void);     /* rel32 call, 2 args */

__declspec(naked) int __stdcall FUN_1001BE80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        push    edi
        jne     L_be97
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [eax + 0x84]
        push    ecx
        jmp     L_bea4
    L_be97:
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jne     L_beb9
        push    0x10055024
    L_bea4:
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    FUN_1001b280
        test    eax, eax
        jl      L_bee1
    L_beb2:
        pop     edi
        mov     al, 1
        pop     esi
        ret     0xc
    L_beb9:
        lea     esi, [edi + 0x84]
        add     eax, 0x84
        push    esi
        push    eax
        call    FUN_10037b0e
        add     esp, 8
        test    eax, eax
        je      L_beb2
        mov     ecx, dword ptr [esp + 0x14]
        push    esi
        push    edi
        call    FUN_1001b280
        test    eax, eax
        jge     L_beb2
    L_bee1:
        pop     edi
        xor     al, al
        pop     esi
        ret     0xc
    }
}
