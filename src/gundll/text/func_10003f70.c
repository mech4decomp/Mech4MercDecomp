/*
 * FUN_10003f70 (160 B) - __stdcall, RET 0x14.
 * SEH-guarded handler: initializes a local object via FUN_100156a0,
 * checks a flag at param_1+0x30, then either returns a fixed error code
 * (0xc1120405) or calls FUN_10015720 / FUN_10001970 to build a result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100156a0(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10015720(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10015880(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10003f70(void)
{
    __asm {
        push    -1
        push    0x10046df8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2c
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_100156a0
        mov     edi, dword ptr [esp + 0x44]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x3c], 0x0
        jnz     L_3fad
        mov     esi, 0xc1120405
        jmp     L_3fea
    L_3fad:
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jnz     L_3fba
        mov     eax, 0x10055024
    L_3fba:
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x54]
        push    eax
        mov     eax, dword ptr [esp + 0x50]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_10015720
        mov     esi, eax
        test    esi, esi
        jl      L_3fea
        lea     ecx, [esp + 0x8]
        push    ecx
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_3fea:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x3c], 0xffffffff
        call    FUN_10015880
        mov     ecx, dword ptr [esp + 0x34]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x38
        ret     0x14
    }
}
