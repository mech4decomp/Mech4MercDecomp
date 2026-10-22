/*
 * func_0050D6C0 - 100 bytes
 * Array/vector manipulation with reallocation
 */
__declspec(naked) void func_0050D6C0()
{
    

extern void __cdecl FUN_0050d727(void);
extern void __cdecl FUN_10050d663(void);
extern void __cdecl FUN_10050d655(void);
extern int DAT_0076b28c;
extern void __cdecl FUN_0050d70c(void);
__asm {
push    esi
        mov     esi, [esp + 8]
        mov     eax, [esi]
        cmp     eax, [esi + 4]
        push    edi
        jne     not_full
        push    esi
        call FUN_0050d727
        add     esp, 4
not_full:
        mov     edi, [esi]
        inc     edi
        mov     eax, edi
        mov     [esi], edi
        mov     edi, [esp + 0x14]
        lea     ecx, [eax - 1]
        cmp     edi, ecx
        jge     done
        sub     eax, edi
        dec     eax
        imul    eax, [esi + 8]
        push    eax
        push    edi
        push    esi
        call FUN_10050d663
        add     esp, 8
        push    eax
        lea     edx, [edi + 1]
        push    edx
        push    esi
        call FUN_10050d655
        add     esp, 8
        push    eax
        call dword ptr [DAT_0076b28c]
        add     esp, 0x0C
done:
        mov     eax, [esp + 0x10]
        push    edi
        push    eax
        push    esi
        call FUN_0050d70c
        add     esp, 0x0C
        pop     edi
        pop     esi
        ret
    }


}
