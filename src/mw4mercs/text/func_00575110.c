/* FUN_00575110 (0x00575110, 281 bytes) */

#ifdef __cplusplus
extern "C" {
#endif

void __declspec(naked) FUN_00575110(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db29(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064db01(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_100566663(void);
extern void __cdecl FUN_006fab7d(void);
extern void __cdecl FUN_10056663d(void);
extern void __cdecl FUN_006fab57(void);
extern int DAT_0077a1a0;
extern void __cdecl FUN_100566b34(void);
extern void __cdecl FUN_100566b63(void);
extern void __cdecl FUN_100574fca(void);
extern void __cdecl FUN_1005667cf(void);
extern void __cdecl FUN_005fb6dd(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db29
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db01
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, [eax]
        sub     eax, 0x4
        cmp     esi, -0x1
        mov     [ebp - 0x4], esi
        mov dword ptr [DAT_0080592c], eax
        jz      neg_one
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      do_conv
        test    esi, esi
        jge     check_upper
        push    0x780e24
        call FUN_100566663
        push    eax
        call FUN_006fab7d
        add     esp, 0x8
        test    eax, eax
        jz      check_upper
        int     0x3
    check_upper:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      do_conv
        cmp     esi, 0x64
        jle     do_conv
        push    0x780e24
        call FUN_10056663d
        push    eax
        call FUN_006fab57
        add     esp, 0x8
        test    eax, eax
        jz      do_conv
        int     0x3
    do_conv:
        fild    dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_0077a1a0]
        fstp    dword ptr [ebp - 0x4]
        jmp     after_neg
    neg_one:
        mov     dword ptr [ebp - 0x4], 0xbf800000
    after_neg:
        push    edi
        call FUN_100566b34
        add     esp, 0x4
        cmp     al, 0x1
        jnz     try_other
        mov     eax, [ebp - 0x4]
        push    eax
        push    edi
        call FUN_100566b63
        add     esp, 0x4
        push    eax
        call FUN_100574fca
        add     esp, 0x8
        jmp     done
    try_other:
        push    edi
        call FUN_1005667cf
        add     esp, 0x4
        test    eax, eax
        jz      done
        mov     edx, [ebp - 0x4]
        push    edx
        mov     ecx, eax
        call FUN_005fb6dd
    done:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     edi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}

#ifdef __cplusplus
}
#endif
