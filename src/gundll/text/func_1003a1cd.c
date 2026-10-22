/*
 * FUN_1003a1cd (83 B) - __cdecl.
 * Calls FUN_1003c500(param_1, param_2); if param_2[0x40] then
 * FUN_1003a0dc(param_1,2,0x1004b714,&param_2[0x40]); if param_2[0x80]
 * then FUN_1003a0dc(param_1,2,0x1004b710,&param_2[0x80]).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c500(void);   /* rel32 call */
extern void __cdecl FUN_1003a0dc(void);   /* rel32 call */

__declspec(naked) void FUN_1003a1cd(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        push    dword ptr [esp + 0xc]
        call    FUN_1003c500
        cmp     byte ptr [esi + 0x40], 0
        lea     eax, [esi + 0x40]
        pop     ecx
        pop     ecx
        jz      L_1fb
        push    eax
        push    0x1004b714
        push    2
        push    dword ptr [esp + 0x14]
        call    FUN_1003a0dc
        add     esp, 0x10
    L_1fb:
        cmp     byte ptr [esi + 0x80], 0
        lea     eax, [esi + 0x80]
        pop     esi
        jz      L_21f
        push    eax
        push    0x1004b710
        push    2
        push    dword ptr [esp + 0x10]
        call    FUN_1003a0dc
        add     esp, 0x10
    L_21f:
        ret
    }
}
