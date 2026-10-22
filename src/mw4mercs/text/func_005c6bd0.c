/*
 * func_005c6bd0 - FUN_005c6bd0
 * __fastcall. Resets several fields, conditionally frees a resource,
 * and dispatches through the vtable.
 */
__declspec(naked) void func_005c6bd0()
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f494b(void);
extern void __cdecl FUN_1004084a3(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call FUN_006f494b
        xor     edi, edi
        mov     [esi + 0x4f0], edi
        mov     eax, [esi + 0x59c]
        mov     ecx, eax
        and     ecx, 1
        cmp     cl, 1
        mov     [esi + 0x4f8], edi
        mov     [esi + 0x4f4], edi
        jnz     L6c1a
        mov     edx, eax
        and     eax, 0xfffffffc
        push    eax
        and     edx, 2
        mov     [esi + 0x59c], eax
        call FUN_1004084a3
        add     esp, 4
    L6c1a:
        mov     [esi + 0x59c], edi
        mov     eax, [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x1c4]
        call FUN_006f494b
        pop     edi
        pop     esi
        ret
    }


}
