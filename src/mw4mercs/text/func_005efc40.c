/*
 * func_005efc40 - __thiscall
 * Decrements a counter/flag state on the object; returns 1 on success, 0 otherwise.
 */
__declspec(naked) void func_005efc40()
{
    

extern void __cdecl FUN_10050e1a9(void);
extern void __cdecl FUN_005efcdd(void);
extern void __cdecl FUN_0050E1A0(void);
extern void __cdecl FUN_005f077f(void);
extern int DAT_0076d064;
__asm {
push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, [edi + 0x1ac]
        push    eax
        call FUN_10050e1a9
        add     esp, 4
        mov     ecx, edi
        mov     esi, eax
        call FUN_005efcdd
        mov     ebx, eax
        cmp     esi, ebx
        jle     ret0
        sub     esi, ebx
        cmp     esi, ebx
        jge     skip_clamp
        mov     esi, ebx
    skip_clamp:
        push    esi
        mov     [edi + 0x1b0], esi
        call FUN_0050E1A0
        add     esp, 4
        test    ebx, ebx
        mov     [edi + 0x1ac], eax
        jle     skip_fsub
        mov     ecx, edi
        call FUN_005f077f
        fld     dword ptr [eax + 0x3b8]
        fsub dword ptr [DAT_0076d064]
        fstp    dword ptr [eax + 0x3b8]
    skip_fsub:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
    ret0:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    }


}
