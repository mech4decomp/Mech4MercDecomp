/*
 * func_005efba0 - __thiscall
 * Updates a counter/flag state on the object; returns 1 on success, 0 otherwise.
 */
__declspec(naked) void func_005efba0()
{
    

extern void __cdecl FUN_10050e19e(void);
extern void __cdecl FUN_005f079b(void);
extern void __cdecl FUN_005fbe64(void);
extern void __cdecl FUN_10050e173(void);
extern void __cdecl FUN_005efca7(void);
extern void __cdecl FUN_005f075e(void);
extern int DAT_0076d064;
extern void __cdecl FUN_10050e126(void);
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     ecx, [esi + 0x1ac]
        mov     ebx, [eax + 0x44]
        push    ecx
        call FUN_10050e19e
        add     esp, 4
        cmp     eax, ebx
        jge     ret0
        push    0x3f800000
        mov     ecx, esi
        call FUN_005f079b
        mov     ecx, eax
        call FUN_005fbe64
        test    al, al
        jz      ret0
        mov     edx, [esi + 0x1ac]
        push    edi
        push    edx
        call FUN_10050e173
        add     esp, 4
        mov     ecx, esi
        mov     edi, eax
        call FUN_005efca7
        add     edi, eax
        cmp     edi, ebx
        jle     skip_clamp
        mov     edi, ebx
    skip_clamp:
        test    eax, eax
        mov     [esi + 0x1b0], edi
        jle     skip_fadd
        mov     ecx, esi
        call FUN_005f075e
        fld     dword ptr [eax + 0x3b8]
        fadd dword ptr [DAT_0076d064]
        fstp    dword ptr [eax + 0x3b8]
    skip_fadd:
        push    edi
        call FUN_10050e126
        add     esp, 4
        pop     edi
        mov     [esi + 0x1ac], eax
        pop     esi
        mov     al, 1
        pop     ebx
        ret
    ret0:
        pop     esi
        xor     al, al
        pop     ebx
        ret
    }


}
