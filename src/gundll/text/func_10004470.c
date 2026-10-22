/*
 * FUN_10004470 (152 B) - __stdcall, RET 0xc.
 * SEH-guarded handler: initializes a local object via FUN_10010bc0,
 * validates a flag at param_1+0x2c and a pointer param_2, then either
 * returns a fixed error code (0xc1120405 / 0x80070057) or calls
 * FUN_10010c30 / FUN_10001970 to build a result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10010bc0(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10010c30(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10010d20(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10004470(void)
{
    __asm {
        push    -1
        push    0x10046ef8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10010bc0
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        mov     dword ptr [esp + 0x34], 0x0
        jnz     L_44ad
        mov     esi, 0xc1120405
        jmp     L_44e2
    L_44ad:
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        jnz     L_44bc
        mov     esi, 0x80070057
        jmp     L_44e2
    L_44bc:
        push    eax
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_10010c30
        mov     esi, eax
        test    esi, esi
        jl      L_44e2
        lea     edx, [esp + 0x8]
        push    edx
        add     edi, -0x10
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_44e2:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_10010d20
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x30
        ret     0xc
    }
}
