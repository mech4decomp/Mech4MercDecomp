/*
 * FUN_005a96f0 (69 B) — __thiscall; invokes a virtual method on two
 * sub-objects at offsets 0x220 and 0x234 if non-null.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a96f0(void)
{
    

/* extern data/function symbols for absolute-address references */
extern void __cdecl FUN_10041fd79(void);
extern void __cdecl FUN_10041fd6e(void);
extern void __cdecl FUN_10041fd5a(void);
extern void __cdecl FUN_10041fd4f(void);
__asm {
push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x220]
        mov     ecx, esi
        call FUN_10041fd79
        test    eax, eax
        jz      lbl1
        mov     ecx, esi
        call FUN_10041fd6e
        mov     edx, [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
    lbl1:
        lea     esi, [edi + 0x234]
        mov     ecx, esi
        call FUN_10041fd5a
        test    eax, eax
        jz      lbl2
        mov     ecx, esi
        call FUN_10041fd4f
        mov     edx, [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
    lbl2:
        pop     edi
        pop     esi
        ret
    }


}
