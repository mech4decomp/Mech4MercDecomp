/*
 * FUN_10004650 (155 B) - __stdcall, RET 0x10.
 * SEH-guarded handler: initializes a local object via FUN_100112e0,
 * validates a flag at param_1+0x2c, then either returns a fixed error
 * code (0xc1120405) or calls FUN_10011350 / FUN_10001970 to build a
 * result (defaulting a null param_3 to 0x10055024).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100112e0(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10011350(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10011490(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10004650(void)
{
    __asm {
        push    -1
        push    0x10046f58
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x28
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_100112e0
        mov     edi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        mov     dword ptr [esp + 0x38], 0x0
        jnz     L_468d
        mov     esi, 0xc1120405
        jmp     L_46c5
    L_468d:
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jnz     L_469a
        mov     eax, 0x10055024
    L_469a:
        mov     ecx, dword ptr [esp + 0x4c]
        push    eax
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_10011350
        mov     esi, eax
        test    esi, esi
        jl      L_46c5
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0x10
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_46c5:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x38], 0xffffffff
        call    FUN_10011490
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x34
        ret     0x10
    }
}
